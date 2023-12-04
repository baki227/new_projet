

#include "CLmapTB.h"
#include "CLcad.h"
#pragma once
ref class commandes {
	private:
		int Id_Commande;
		System::String^ com_reference;
		System::String^ com_dateLivraison;
		System::String^ com_datEmission;
		System::String^ com_datePaiement;
		System::String^ com_moyenPaiement;
	public:
		//get
		int get_Id_Commande(void);
		System::String^ get_com_reference(void);
		System::String^ get_com_dateLivraison(void);
		System::String^ get_com_datEmission(void);
		System::String^ get_com_datePaiement(void);
		System::String^ get_com_moyenPaiement(void);
		//set
		void set_Id_Commande(int);
		void set_com_reference(System::String^);
		void set_com_dateLivraison(System::String^);
		void set_com_datEmission(System::String^);
		void set_com_datePaiement(System::String^);
		void set_com_moyenPaiement(System::String^);
};