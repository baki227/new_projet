#include "CLmap_utilisateur.h"
#include <vcclr.h> // Pour gcnew
#include <iostream>
#include <string.h>

System::String^ NS_Comp_MappageUtilisateur::utilisateur::SelectHumain(void)
{
return "SELECT UTILISATEUR.id_utilisateur AS id_client_utilisateur, UTILISATEUR.uti_nom AS client_nom, UTILISATEUR.uti_prenom AS client_prenom, UTILISATEUR.uti_dateNaissance AS client_dateNaissance, ADRESSE.adr_num, ADRESSE.adr_rue, ADRESSE.adr_postalcode, ADRESSE.adr_type, VILLE.cit_nom AS ville_nom, REGION.reg_name AS region_nom, PAYS.pay_nom AS pays_nom FROM [DB_P6].[dbo].[CLIENTS] JOIN [DB_P6].[dbo].[UTILISATEUR] ON CLIENTS.id_utilisateur = UTILISATEUR.id_utilisateur JOIN [DB_P6].[dbo].[ADRESSE] ON UTILISATEUR.id_utilisateur = ADRESSE.id_ville JOIN [DB_P6].[dbo].[VILLE] ON ADRESSE.id_ville = VILLE.id_ville JOIN [DB_P6].[dbo].[REGION] ON VILLE.ID_REGION = REGION.ID_REGION JOIN [DB_P6].[dbo].[PAYS] ON REGION.ID_PAYS = PAYS.ID_PAYS;";

}

System::String^ NS_Comp_MappageUtilisateur::utilisateur::Insert(void)
{

	return "INSERT INTO [DB_P6].[dbo].[UTILISATEUR] (uti_nom, uti_prenom, uti_dateNaissance) VALUES ('" + this->uti_nom + "', '" + this->uti_prenom + "', '" + System::DateTime::ParseExact(this->uti_dateNaissance, "dd-MM-yyyy", System::Globalization::CultureInfo::InvariantCulture).ToString("yyyy-MM-dd") + "');\n"
		+ "INSERT INTO [DB_P6].[dbo].[ADRESSE] (adr_num, adr_rue, adr_postalcode, adr_type, id_ville) VALUES ('" + this->adr_num + "', '" + this->adr_rue + "', '" + this->adr_postalcode + "', '" + this->adr_type + "', 1);\n"
		+ "INSERT INTO [DB_P6].[dbo].[VILLE] (cit_nom, ID_REGION) VALUES ('" + this->cit_nom + "', 1);\n"
		+ "INSERT INTO [DB_P6].[dbo].[REGION] (reg_name, ID_PAYS) VALUES ('" + this->reg_nom + "', 1);\n"
		+ "INSERT INTO [DB_P6].[dbo].[PAYS] (pay_nom) VALUES ('" + this->pay_nom + "');\n";


}
	

System::String^ NS_Comp_MappageUtilisateur::utilisateur::Delete(void)
{
	return "DELETE FROM [DB_P6].[dbo].[CLIENTS] WHERE Id_Client = " + this->Id_Client + ";";
}

System::String^ NS_Comp_MappageUtilisateur::utilisateur::Update(void)
{
	throw gcnew System::NotImplementedException();
	// TODO: insérer une instruction return ici
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

