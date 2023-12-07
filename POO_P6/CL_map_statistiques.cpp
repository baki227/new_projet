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
    A.Id_Article,
    A.art_designation,
    S.sto_quantite,
    S.sto_seuilReapprovis,
    (S.sto_quantite * 100 / S.sto_seuilReapprovis) AS pourcentage_stock
FROM
    ARTICLES A
JOIN
    stocker ST ON A.Id_Article = ST.Id_Article
JOIN
    STOCK S ON ST.id_stock = S.id_stock
WHERE
    S.sto_quantite < S.sto_seuilReapprovis;


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
    return "(DECLARE @MoisDonne DATE = '"+this->com_datePaiement+"';"

+"SELECT"
  +"  SUM(P.pri_prix) AS chiffre_affaires"
        + " FROM"
        + "   COMMANDES C"
        + " JOIN"
        + "   CONTENIR CN ON C.Id_Commande = CN.Id_Commande"
        + " JOIN"
        + "   ARTICLES Ar ON CN.Id_Article = Ar.Id_Article"
        + " JOIN"
        + "    posseder Po ON Ar.Id_Article = Po.Id_Article"
        + " JOIN"
        + "   PRIX P ON Po.id_prix = P.id_prix"
        + " WHERE"
        + "   MONTH(C.com_datePaiement) = MONTH(@MoisDonne)"
        + "  AND YEAR(C.com_datePaiement) = YEAR(@MoisDonne)";
}

System::String^ NS_Comp_MappageStatistiques::statistiques::totalAchatClient(void)
{
	throw gcnew System::NotImplementedException();
	// TODO: insérer une instruction return ici
}

System::String^ NS_Comp_MappageStatistiques::statistiques::totalValeurAchatStock(void)
{
	throw gcnew System::NotImplementedException();
	// TODO: insérer une instruction return ici
}

System::String^ NS_Comp_MappageStatistiques::statistiques::totalValeurCommercialeStock(void)
{
	throw gcnew System::NotImplementedException();
	// TODO: insérer une instruction return ici
}

System::String^ NS_Comp_MappageStatistiques::statistiques::SimulerVariationValeurCommercialeStock(void)
{
	throw gcnew System::NotImplementedException();
	// TODO: insérer une instruction return ici
}
