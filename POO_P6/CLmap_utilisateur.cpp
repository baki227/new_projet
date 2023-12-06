#include "CLmap_utilisateur.h"
#include <vcclr.h> // Pour gcnew
#include <iostream>
#include <string.h>

System::String^ NS_Comp_MappageUtilisateur::utilisateur::SelectHumain(void)
{
	return "SELECT * FROM [DB_P6].[dbo].[CLIENTS] JOIN [DB_P6].[dbo].[AVOIR] ON CLIENTS.id_utilisateur = AVOIR.id_utilisateur JOIN [DB_P6].[dbo].[UTILISATEUR] ON AVOIR.id_utilisateur = UTILISATEUR.id_utilisateur JOIN [DB_P6].[dbo].[ADRESSE] ON AVOIR.id_adresse = ADRESSE.id_adresse;";
}

System::String^ NS_Comp_MappageUtilisateur::utilisateur::Insert(void)
{
	System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

	sb->Append("DECLARE @NewUserId INT;\n");
	sb->Append("DECLARE @NewAddressId INT;\n");
	sb->Append("DECLARE @NewClientId INT;\n");

	sb->Append("INSERT INTO ADRESSE (adr_num, adr_rue, adr_postalcode, adr_ville, adr_region, adr_pays, adr_type, id_ville)\n");
	sb->Append("VALUES ('" + this->adr_num + "', '" + this->adr_rue + "', '" + this->adr_postalcode + "', '" + this->cit_nom + "', '" + this->reg_nom + "', '" + this->pay_nom + "', 'adresse', '1');\n");
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
	return "DELETE FROM [DB_P6].[dbo].[CLIENTS] WHERE Id_Client = " + this->Id_Client + ";";
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
	sb->Append("adr_type = 'adresse', ");
	sb->Append("id_ville = '1' ");
	sb->Append("WHERE id_adresse = (SELECT id_adresse FROM AVOIR WHERE id_utilisateur IN (SELECT id_utilisateur FROM CLIENTS WHERE id_client = @ClientIdToUpdate)); ");
	sb->Append("UPDATE UTILISATEUR ");
	sb->Append("SET ");
	sb->Append("uti_nom = '" + this->uti_nom + "', ");
	sb->Append("uti_prenom = '" + this->uti_prenom + "', ");
	sb->Append("uti_dateNaissance = '" + this->uti_dateNaissance + "' ");
	sb->Append("WHERE id_utilisateur IN (SELECT id_utilisateur FROM CLIENTS WHERE id_client = @ClientIdToUpdate); ");

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
int NS_Comp_MappageUtilisateur::utilisateur::get_per_supHerarchique(void){
	return this->per_supHerarchique;
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
void NS_Comp_MappageUtilisateur::utilisateur::set_per_supHerarchique(int id){
	this->per_supHerarchique = id;
}
void NS_Comp_MappageUtilisateur::utilisateur::set_per_dateEmbauche(System::String^ date){
	this->per_dateEmbauche = date;
}
void NS_Comp_MappageUtilisateur::utilisateur::set_id_Personnel(int id){
	this->id_Personnel = id; 
}

