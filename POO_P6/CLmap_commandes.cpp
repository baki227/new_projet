#include "CLmap_commandes.h"
//get
int commandes::get_Id_Commande(void){
	return this->Id_Commande;
}
System::String^ commandes::get_com_reference(void){
	return this->com_reference;
}
System::String^ commandes::get_com_dateLivraison(void){
	return this->com_dateLivraison;
}
System::String^ commandes::get_com_datEmission(void){
	return this->com_datEmission;
}
System::String^ commandes::get_com_datePaiement(void){
	return this->com_datePaiement;
}
System::String^ commandes::get_com_moyenPaiement(void){
	return this->com_moyenPaiement;
}

//set
void commandes::set_Id_Commande(int N){
	this->Id_Commande = N;
}
void commandes::set_com_reference(System::String^ ref){
	this->com_reference = ref;
}
void commandes::set_com_dateLivraison(System::String^ date){
	this->com_dateLivraison = date;
}
void commandes::set_com_datEmission(System::String^ date){
	this->com_datEmission = date; 
}
void commandes::set_com_datePaiement(System::String^ date){
	this->com_datePaiement = date;
}
void commandes::set_com_moyenPaiement(System::String^ moyen){
	this->com_moyenPaiement = moyen;
}