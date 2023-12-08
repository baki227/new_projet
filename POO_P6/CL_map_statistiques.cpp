#include "CL_map_statistiques.h"
#include <string.h>
int NS_Comp_MappageStatistiques::statistiques::get_Id_Client(void)
{
	return this->Id_Client;
}

System::String^ NS_Comp_MappageStatistiques::statistiques::get_com_datePaiement(void)
{
	return this->com_datePaiement;
}

int NS_Comp_MappageStatistiques::statistiques::get_id_stock(void)
{
	return this->id_stock;
}

void NS_Comp_MappageStatistiques::statistiques::set_Id_Client(int id)
{
	 this->Id_Client= id;
}

void NS_Comp_MappageStatistiques::statistiques::set_com_datePaiement(System::String^ com_datePaiment)
{
	this->com_datePaiement = com_datePaiment;
}

void NS_Comp_MappageStatistiques::statistiques::set_Id_stock(int id)
{
	this->id_stock = id;
}

System::String^ NS_Comp_MappageStatistiques::statistiques::calculerpaniermoyen(void)
{
	return "SELECT SUM(P.pri_prix) AS total_price_all_orders, COUNT(DISTINCT C.Id_Commande) AS total_orders, SUM(P.pri_prix) / COUNT(DISTINCT C.Id_Commande) AS average_price_all_orders FROM COMMANDES C JOIN CONTENIR CN ON C.Id_Commande = CN.Id_Commande JOIN ARTICLES Ar ON CN.Id_Article = Ar.Id_Article JOIN posseder Po ON Ar.Id_Article = Po.Id_Article JOIN PRIX P ON Po.id_prix = P.id_prix";
}

System::String^ NS_Comp_MappageStatistiques::statistiques::produitsSousSueilReaprovisionnement(void)
{
	return R"(
SELECT
    S.id_stock,
    A.art_designation AS designation_article,
    ST.stock_nombre AS quantite_stock,
    P.pri_prix AS prix_achat_unitaire,
    ST.stock_nombre * P.pri_prix AS valeur_achat_stock
FROM
    STOCK S
JOIN
    stocker ST ON S.id_stock = ST.id_stock
JOIN
    ARTICLES A ON ST.Id_Article = A.Id_Article
JOIN
    posseder Po ON A.Id_Article = Po.Id_Article
JOIN
    PRIX P ON Po.id_prix = P.id_prix
WHERE
    ST.stock_nombre < sto_seuilReapprovis;



        )";
}

System::String^ NS_Comp_MappageStatistiques::statistiques::articlePlusVendus(void)
{
 return R"(
        USE projetPOO;

        SELECT TOP 10
            A.Id_Article,
            A.art_designation,
            COUNT(C.Id_Commande) AS total_ventes
        FROM
            ARTICLES A
        JOIN
            CONTENIR C ON A.Id_Article = C.Id_Article
        GROUP BY
            A.Id_Article, A.art_designation
        ORDER BY
            total_ventes DESC;
    )";
}

System::String^ NS_Comp_MappageStatistiques::statistiques::articleMoinssVendus(void)
{
    return R"(
        USE projetPOO;

        SELECT TOP 10
            A.Id_Article,
            A.art_designation,
            COUNT(C.Id_Commande) AS total_ventes
        FROM
            ARTICLES A
        JOIN
            CONTENIR C ON A.Id_Article = C.Id_Article
        GROUP BY
            A.Id_Article, A.art_designation
        ORDER BY
            total_ventes ASC;
    )";
}

System::String^ NS_Comp_MappageStatistiques::statistiques::chiffreAffairesurUnMois(void)
{
    return "DECLARE @MoisDonne DATE = '" + this->com_datePaiement + "';"
        + "SELECT SUM(P.pri_prix) AS chiffre_affaires"
        + " FROM COMMANDES C"
        + " JOIN CONTENIR CN ON C.Id_Commande = CN.Id_Commande"
        + " JOIN ARTICLES Ar ON CN.Id_Article = Ar.Id_Article"
        + " JOIN posseder Po ON Ar.Id_Article = Po.Id_Article"
        + " JOIN PRIX P ON Po.id_prix = P.id_prix"
        + " WHERE MONTH(C.com_datePaiement) = MONTH(@MoisDonne)"
        + " AND YEAR(C.com_datePaiement) = YEAR(@MoisDonne);";
}


System::String^ NS_Comp_MappageStatistiques::statistiques::totalAchatClient(void)
{
    return "SELECT "
        "C.Id_Client, "
        "U.uti_nom + ' ' + U.uti_prenom AS nom_complet_client, "
        "SUM(P.pri_prix) AS montant_total_achats "
        "FROM CLIENTS C "
        "JOIN UTILISATEUR U ON C.id_utilisateur = U.id_utilisateur "
        "JOIN COMMANDES CO ON C.Id_Client = CO.Id_Client "
        "JOIN CONTENIR CN ON CO.Id_Commande = CN.Id_Commande "
        "JOIN ARTICLES A ON CN.Id_Article = A.Id_Article "
        "JOIN posseder Po ON A.Id_Article = Po.Id_Article "
        "JOIN PRIX P ON Po.id_prix = P.id_prix "
        "WHERE C.Id_Client = " + System::Convert::ToString(this->Id_Client) + " "
        "GROUP BY C.Id_Client, U.uti_nom, U.uti_prenom;";


}

System::String^ NS_Comp_MappageStatistiques::statistiques::totalValeurAchatStock(void)
{
    return "SELECT "
        "S.id_stock, "
        "A.art_designation AS designation_article, "
        "ST.stock_nombre AS quantite_stock, "
        "P.pri_prix AS prix_achat_unitaire, "
        "ST.stock_nombre * P.pri_prix AS valeur_achat_stock, "
        "SUM(ST.stock_nombre * P.pri_prix) OVER (PARTITION BY S.id_stock) AS somme_valeur_achat_stock "
        "FROM "
        "STOCK S "
        "JOIN stocker ST ON S.id_stock = ST.id_stock "
        "JOIN ARTICLES A ON ST.Id_Article = A.Id_Article "
        "JOIN posseder Po ON A.Id_Article = Po.Id_Article "
        "JOIN PRIX P ON Po.id_prix = P.id_prix "
        "WHERE "
        "S.id_stock = " + System::Convert::ToString(this->id_stock) + ";";


}

System::String^ NS_Comp_MappageStatistiques::statistiques::totalValeurCommercialeStock(void)
{
    return
        "DECLARE @tva DECIMAL(18, 2) = 1.2;"
        " DECLARE @remise DECIMAL(18, 2) = 0.05;"
        " DECLARE @marge DECIMAL(18, 2) = 1.05;"
        " DECLARE @demarqueInconnue DECIMAL(18, 2) = 0.02;"
        " SELECT"
        "   S.id_stock,"
        "   A.art_designation AS designation_article,"
        "   ST.stock_nombre AS quantite_stock,"
        "   P.pri_prix AS prix_achat_unitaire,"
        "   ST.stock_nombre * P.pri_prix AS valeur_achat_stock,"
        "   SUM(ST.stock_nombre * P.pri_prix) OVER(PARTITION BY S.id_stock) AS somme_valeur_achat_stock,"
        "   SUM((SUM(ST.stock_nombre * P.pri_prix) * @marge * @tva) - (SUM(ST.stock_nombre * P.pri_prix) * @remise) - (SUM(ST.stock_nombre * P.pri_prix) * @demarqueInconnue)) OVER(PARTITION BY S.id_stock) AS totale_Valeur_commerciale"
        " FROM"
        "   STOCK S"
        "   JOIN"
        "   stocker ST ON S.id_stock = ST.id_stock"
        "   JOIN"
        "   ARTICLES A ON ST.Id_Article = A.Id_Article"
        "   JOIN"
        "   posseder Po ON A.Id_Article = Po.Id_Article"
        "   JOIN"
        "   PRIX P ON Po.id_prix = P.id_prix"
        " WHERE S.id_stock = " + System::Convert::ToString(this->id_stock) +
        " GROUP BY"
        "   S.id_stock, A.art_designation, ST.stock_nombre, P.pri_prix;";


}

System::String^ NS_Comp_MappageStatistiques::statistiques::SimulerVariationValeurCommercialeStock(void)
{
	throw gcnew System::NotImplementedException();
	// TODO: insérer une instruction return ici
}
