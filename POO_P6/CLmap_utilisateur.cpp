#include "CLmap_utilisateur.h"
#include <vcclr.h> // Pour gcnew
#include <iostream>
#include <string.h>

System::String^ NS_Comp_MappageUtilisateur::utilisateur::SelectPersonnel(void)
{
	return "SELECT P.id_Personnel, U.uti_nom, U.uti_prenom, A.adr_num, A.adr_rue, A.adr_postalcode, A.adr_ville, A.adr_region, A.adr_pays, "
		"P.per_supHierarchique, P.per_dateDembauche, P.per_NiveauHierarchique "
		"FROM PERSONNEL P "
		"JOIN UTILISATEUR U ON P.id_utilisateur = U.id_utilisateur "
		"JOIN AVOIR AV ON AV.id_utilisateur = U.id_utilisateur "
		"JOIN ADRESSE A ON AV.id_adresse = A.id_adresse;";

}

System::String^ NS_Comp_MappageUtilisateur::utilisateur::InsertPersonnel(void)
{
	System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
	sb->Append("DECLARE @NewUserId INT;\n");
	sb->Append("DECLARE @NewAddressId INT;\n");
	sb->Append("DECLARE @NewPersonnelId INT;\n");

	// Insérer une nouvelle adresse
	sb->Append("INSERT INTO ADRESSE (adr_num, adr_rue, adr_postalcode, adr_ville, adr_region, adr_pays, adr_type)\n");
	sb->Append("VALUES ('" + this->adr_num + "', '" + this->adr_rue + "', '" + this->adr_postalcode + "', '" + this->cit_nom + "', '" + this->reg_nom + "', '" + this->pay_nom + "', 'adresse');\n");
	sb->Append("SET @NewAddressId = SCOPE_IDENTITY();\n");

	// Insérer un nouvel utilisateur
	sb->Append("INSERT INTO UTILISATEUR (uti_nom, uti_prenom, uti_dateNaissance)\n");
	sb->Append("VALUES ('" + this->uti_nom + "', '" + this->uti_prenom + "', '" + this->uti_dateNaissance + "');\n");
	sb->Append("SET @NewUserId = SCOPE_IDENTITY();\n");

	// Insérer un nouveau personnel avec le lien vers l'utilisateur
	sb->Append("INSERT INTO PERSONNEL (per_supHierarchique, per_NiveauHierarchique, per_dateDembauche, id_utilisateur)\n");
	sb->Append("VALUES (" + this->per_supHierarchique + ", " + this->per_NiveauHierarchique + ", '" + this->per_dateEmbauche + "', @NewUserId);\n");
	sb->Append("SET @NewPersonnelId = SCOPE_IDENTITY();\n");

	// Insérer un nouveau client avec le lien vers l'utilisateur
	sb->Append("INSERT INTO CLIENTS (id_utilisateur)\n");
	sb->Append("VALUES (@NewUserId);\n");

	// Lier l'utilisateur à l'adresse via la table AVOIR
	sb->Append("INSERT INTO AVOIR (id_utilisateur, id_adresse)\n");
	sb->Append("VALUES (@NewUserId, @NewAddressId);\n");

	// Retourner l'ID du nouveau personnel
	sb->Append("SELECT @NewPersonnelId AS NewPersonnelId;\n");

	return sb->ToString();
}


System::String^ NS_Comp_MappageUtilisateur::utilisateur::DeletePersonnel(void)
{

    System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
    sb->Append("DECLARE @PersonnelIdToDelete INT = " + this->id_Personnel + " ;\n");

    // Supprimer le lien de l'utilisateur avec l'adresse via la table AVOIR
    sb->Append("DELETE FROM AVOIR\n");
    sb->Append("WHERE id_utilisateur IN (SELECT id_utilisateur FROM PERSONNEL WHERE id_Personnel = @PersonnelIdToDelete);\n");

    // Supprimer le lien du client avec l'utilisateur
    sb->Append("DELETE FROM CLIENTS\n");
    sb->Append("WHERE id_utilisateur IN (SELECT id_utilisateur FROM PERSONNEL WHERE id_Personnel = @PersonnelIdToDelete);\n");

    // Supprimer le lien du personnel avec l'utilisateur
    sb->Append("DELETE FROM PERSONNEL\n");
    sb->Append("WHERE id_Personnel = @PersonnelIdToDelete;\n");

    // Supprimer l'utilisateur
    sb->Append("DELETE FROM UTILISATEUR\n");
    sb->Append("WHERE id_utilisateur IN (SELECT id_utilisateur FROM PERSONNEL WHERE id_Personnel = @PersonnelIdToDelete);\n");

    // Supprimer l'adresse
    sb->Append("DELETE FROM ADRESSE\n");
    sb->Append("WHERE id_adresse = (SELECT id_adresse FROM AVOIR WHERE id_utilisateur IN (SELECT id_utilisateur FROM PERSONNEL WHERE id_Personnel = @PersonnelIdToDelete));\n");

    // Retournez la chaîne SQL générée
    return sb->ToString();


}

System::String^ NS_Comp_MappageUtilisateur::utilisateur::UpdatePersonnel(void)
{
	System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
	sb->Append("DECLARE @PersonnelIdToUpdate INT = '" + this->id_Personnel + "' ;\n");
	sb->Append("DECLARE @UserIdToUpdate INT;\n");
	sb->Append("DECLARE @AddressIdToUpdate INT;\n");

	// Mettez à jour l'adresse
	sb->Append("UPDATE ADRESSE\n");
	sb->Append("SET\n");
	sb->Append("adr_num = '" + this->adr_num + "',\n");
	sb->Append("adr_rue = '" + this->adr_rue + "',\n");
	sb->Append("adr_postalcode = '" + this->adr_postalcode + "',\n");
	sb->Append("adr_ville = '" + this->cit_nom + "',\n");
	sb->Append("adr_region = '" + this->reg_nom + "',\n");
	sb->Append("adr_pays = '" + this->pay_nom + "',\n");
	sb->Append("adr_type = 'adresse'\n");
	sb->Append("WHERE id_adresse = (SELECT id_adresse FROM AVOIR WHERE id_utilisateur IN (SELECT id_utilisateur FROM PERSONNEL WHERE id_Personnel = @PersonnelIdToUpdate));\n");

	// Mettez à jour l'utilisateur
	sb->Append("UPDATE UTILISATEUR\n");
	sb->Append("SET\n");
	sb->Append("uti_nom = '" + this->uti_nom + "',\n");
	sb->Append("uti_prenom = '" + this->uti_prenom + "',\n");
	sb->Append("uti_dateNaissance = '" + this->uti_dateNaissance + "'\n");
	sb->Append("WHERE id_utilisateur IN (SELECT id_utilisateur FROM PERSONNEL WHERE id_Personnel = @PersonnelIdToUpdate);\n");

	// Mettez à jour le personnel
	sb->Append("UPDATE PERSONNEL\n");
	sb->Append("SET\n");
	sb->Append("per_supHierarchique = " + this->per_supHierarchique + ",\n");
	sb->Append("per_NiveauHierarchique = " + this->per_NiveauHierarchique + ",\n");
	sb->Append("per_dateDembauche = '" + this->per_dateEmbauche + "'\n");
	sb->Append("WHERE id_Personnel = @PersonnelIdToUpdate;\n");

	// Retournez la chaîne SQL générée
	return sb->ToString();
}

System::String^ NS_Comp_MappageUtilisateur::utilisateur::SelectHumain(void)
{
	return "SELECT * FROM [projetPOO].[dbo].[CLIENTS] JOIN [projetPOO].[dbo].[AVOIR] ON CLIENTS.id_utilisateur = AVOIR.id_utilisateur JOIN [projetPOO].[dbo].[UTILISATEUR] ON AVOIR.id_utilisateur = UTILISATEUR.id_utilisateur JOIN [projetPOO].[dbo].[ADRESSE] ON AVOIR.id_adresse = ADRESSE.id_adresse;";
}

System::String^ NS_Comp_MappageUtilisateur::utilisateur::Insert(void)
{
	System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

	sb->Append("DECLARE @NewUserId INT;\n");
	sb->Append("DECLARE @NewAddressId INT;\n");
	sb->Append("DECLARE @NewClientId INT;\n");

	sb->Append("INSERT INTO ADRESSE (adr_num, adr_rue, adr_postalcode, adr_ville, adr_region, adr_pays, adr_type)\n");
	sb->Append("VALUES ('" + this->adr_num + "', '" + this->adr_rue + "', '" + this->adr_postalcode + "', '" + this->cit_nom + "', '" + this->reg_nom + "', '" + this->pay_nom + "', 'adresse');\n");
	sb->Append("SET @NewAddressId = SCOPE_IDENTITY();\n");

	sb->Append("INSERT INTO UTILISATEUR (uti_nom, uti_prenom, uti_dateNaissance)\n");
	sb->Append("VALUES ('" + this->uti_nom + "', '" + this->uti_prenom + "', '" + this->uti_dateNaissance + "');\n");
	sb->Append("SET @NewUserId = SCOPE_IDENTITY();\n");

	sb->Append("INSERT INTO CLIENTS (id_utilisateur)\n");
	sb->Append("VALUES (@NewUserId);\n");
	sb->Append("SET @NewClientId = SCOPE_IDENTITY();\n");

	sb->Append("INSERT INTO AVOIR (id_utilisateur, id_adresse)\n");
	sb->Append("VALUES (@NewUserId, @NewAddressId);\n");

	return sb->ToString();

}
	

System::String^ NS_Comp_MappageUtilisateur::utilisateur::Delete(void)
{
	

	return "DECLARE @Id_ClientToDelete INT = ' " + this->Id_Client + "' ;"
		+ "DELETE FROM CONTENIR WHERE Id_Commande IN(SELECT Id_Commande FROM COMMANDES WHERE Id_Client = @Id_ClientToDelete);"
		+ "DELETE FROM COMMANDES WHERE Id_Client = @Id_ClientToDelete;"
		+ "DELETE FROM CLIENTS WHERE Id_Client = @Id_ClientToDelete;";
		
		
}

System::String^ NS_Comp_MappageUtilisateur::utilisateur::Update(void)
{
	System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

	sb->Append("DECLARE @ClientIdToUpdate INT = " + this->Id_Client + " ;");
	sb->Append("UPDATE ADRESSE ");
	sb->Append("SET ");
	sb->Append("adr_num = '" + this->adr_num + "', ");
	sb->Append("adr_rue = '" + this->adr_rue + "', ");
	sb->Append("adr_postalcode = '" + this->adr_postalcode + "', ");
	sb->Append("adr_ville = '" + this->cit_nom + "', ");
	sb->Append("adr_region = '" + this->reg_nom + "', ");
	sb->Append("adr_pays = '" + this->pay_nom + "', ");
	sb->Append("adr_type = 'adresse' ");
	sb->Append("WHERE id_adresse = (SELECT id_adresse FROM AVOIR WHERE id_utilisateur IN (SELECT id_utilisateur FROM CLIENTS WHERE id_client = @ClientIdToUpdate)); ");
	sb->Append("UPDATE UTILISATEUR ");
	sb->Append("SET ");
	sb->Append("uti_nom = '" + this->uti_nom + "', ");
	sb->Append("uti_prenom = '" + this->uti_prenom + "', ");
	sb->Append("uti_dateNaissance = '" + this->uti_dateNaissance + "' ");
	sb->Append("WHERE id_utilisateur IN (SELECT id_utilisateur FROM CLIENTS WHERE Id_Client = @ClientIdToUpdate); ");

	return sb->ToString();
}


//get
System::String^ NS_Comp_MappageUtilisateur::utilisateur::get_pay_nom(void){
	return this->pay_nom;
}
System::String^ NS_Comp_MappageUtilisateur::utilisateur::get_uti_dateNaissance(void){
	return this->uti_dateNaissance;
}
System::String^ NS_Comp_MappageUtilisateur::utilisateur::get_uti_prenom(void){
	return this->uti_prenom;
}
System::String^ NS_Comp_MappageUtilisateur::utilisateur::get_uti_nom(void){
	return this->uti_nom;
}
System::String^ NS_Comp_MappageUtilisateur::utilisateur::get_adr_postalcode(void){
	return this->adr_postalcode;
}
System::String^ NS_Comp_MappageUtilisateur::utilisateur::get_adr_num(void){
	return this->adr_num;
}
System::String^ NS_Comp_MappageUtilisateur::utilisateur::get_adr_rue(void){
	return this->adr_rue;
}
System::String^ NS_Comp_MappageUtilisateur::utilisateur::get_adr_type(void) {
	return this->adr_type;
}
System::String^ NS_Comp_MappageUtilisateur::utilisateur::get_reg_nom(void){
	return this->reg_nom;
}
System::String^ NS_Comp_MappageUtilisateur::utilisateur::get_cit_nom(void){
	return this->cit_nom;
}
int NS_Comp_MappageUtilisateur::utilisateur::get_Id_Client(void){
	return this->Id_Client;
}
System::String^ NS_Comp_MappageUtilisateur::utilisateur::get_per_supHierarchique(void){
	return this->per_supHierarchique;
}
System::String^ NS_Comp_MappageUtilisateur::utilisateur::get_per_dateEmbauche(void){
	return this->per_dateEmbauche;
}
int NS_Comp_MappageUtilisateur::utilisateur::get_id_Personnel(void){
	return this->id_Personnel;
}

//set
void NS_Comp_MappageUtilisateur::utilisateur::set_pay_nom(System::String^ pays){
	this->pay_nom = pays;
}
void NS_Comp_MappageUtilisateur::utilisateur::set_uti_dateNaissance(System::String^ date){
	this->uti_dateNaissance = date;
}
void NS_Comp_MappageUtilisateur::utilisateur::set_uti_prenom(System::String^ prenom){
	this->uti_prenom = prenom;
}
void NS_Comp_MappageUtilisateur::utilisateur::set_uti_nom(System::String^ nom){
	this->uti_nom = nom;
}
void NS_Comp_MappageUtilisateur::utilisateur::set_adr_postalcode(System::String^ code){
	this->adr_postalcode = code;
}
void NS_Comp_MappageUtilisateur::utilisateur::set_adr_num(System::String^ num){
	this->adr_num = num;
}
void NS_Comp_MappageUtilisateur::utilisateur::set_adr_rue(System::String^ rue){
	this->adr_rue = rue;
}
void NS_Comp_MappageUtilisateur::utilisateur::set_adr_type(System::String^ type) {
	this->adr_type = type;
}
void NS_Comp_MappageUtilisateur::utilisateur::set_reg_nom(System::String^ region){
	this->reg_nom = region;
}
void NS_Comp_MappageUtilisateur::utilisateur::set_cit_nom(System::String^ ville){
	this->cit_nom = ville;
}
void NS_Comp_MappageUtilisateur::utilisateur::set_Id_Client(int id){
	this->Id_Client = id;
}
void NS_Comp_MappageUtilisateur::utilisateur::set_per_supHierarchique(System::String^ id){
	this->per_supHierarchique = id;
}
void NS_Comp_MappageUtilisateur::utilisateur::set_per_niveauHierarchique(System::String^ id)
{
	this->per_NiveauHierarchique = id;
}
void NS_Comp_MappageUtilisateur::utilisateur::set_per_dateEmbauche(System::String^ date){
	this->per_dateEmbauche = date;
}
void NS_Comp_MappageUtilisateur::utilisateur::set_id_Personnel(int id){
	this->id_Personnel = id; 
}

