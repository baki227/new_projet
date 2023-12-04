#include "utilisateur.h"


//get
System::String^ utilisateur::get_pay_nom(void){
	return this->pay_nom;
}
System::String^ utilisateur::get_uti_dateNaissance(void){
	return this->uti_dateNaissance;
}
System::String^ utilisateur::get_uti_prenom(void){
	return this->uti_prenom;
}
System::String^ utilisateur::get_uti_nom(void){
	return this->uti_nom;
}
System::String^ utilisateur::get_adr_postalcode(void){
	return this->adr_postalcode;
}
System::String^ utilisateur::get_adr_num(void){
	return this->adr_num;
}
System::String^ utilisateur::get_adr_rue(void){
	return this->adr_rue;
}
System::String^ utilisateur::get_reg_nom(void){
	return this->reg_nom;
}
System::String^ utilisateur::get_cit_nom(void){
	return this->cit_nom;
}
int utilisateur::get_Id_Client(void){
	return this->Id_Client;
}
int utilisateur::get_per_supHerarchique(void){
	return this->per_supHerarchique;
}
System::String^ utilisateur::get_per_dateEmbauche(void){
	return this->per_dateEmbauche;
}
int utilisateur::get_id_Personnel(void){
	return this->id_Personnel;
}

//set
void utilisateur::set_pay_nom(System::String^ pays){
	this->pay_nom = pays;
}
void utilisateur::set_uti_dateNaissance(System::String^ date){
	this->uti_dateNaissance = date;
}
void utilisateur::set_uti_prenom(System::String^ prenom){
	this->uti_prenom = prenom;
}
void utilisateur::set_uti_nom(System::String^ nom){
	this->uti_nom = nom;
}
void utilisateur::set_adr_postalcode(System::String^ code){
	this->adr_postalcode = code;
}
void utilisateur::set_adr_num(System::String^ num){
	this->adr_num = num;
}
void utilisateur::set_adr_rue(System::String^ rue){
	this->adr_rue = rue;
}
void utilisateur::set_reg_nom(System::String^ region){
	this->reg_nom = region;
}
void utilisateur::set_cit_nom(System::String^ ville){
	this->cit_nom = ville;
}
void utilisateur::set_Id_Client(int id){
	this->Id_Client = id;
}
void utilisateur::set_per_supHerarchique(int id){
	this->per_supHerarchique = id;
}
void utilisateur::set_per_dateEmbauche(System::String^ date){
	this->per_dateEmbauche = date;
}
void utilisateur::set_id_Personnel(int id){
	this->id_Personnel = id; 
}