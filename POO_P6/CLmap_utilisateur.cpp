#include "CLmap_utilisateur.h"


System::String^ NS_Comp_MappageUtilisateur::utilisateur::SelectHumain(void)
{
return "SELECT [id_humain], [hum_nom], [hum_prenom] FROM [DB_P6].[dbo].[HUMAIN]";

}

System::String^ NS_Comp_MappageUtilisateur::utilisateur::Insert(void)
{
	throw gcnew System::NotImplementedException();
	// TODO: insérer une instruction return ici
}

System::String^ NS_Comp_MappageUtilisateur::utilisateur::Delete(void)
{
	throw gcnew System::NotImplementedException();
	// TODO: insérer une instruction return ici
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