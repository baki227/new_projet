#pragma once
#include <string.h>

namespace NS_Comp_MappageStatistiques
{
	ref class statistiques {
	private:
		System::String^ tva;
		System::String^ marge;
		System::String^ remise;
		System::String^ demarcheInconnue;
		int Id_Client;
		System::String^ com_datePaiement;
		int id_stock;
	public:
		
		System::String^ calculerpaniermoyen(void);
		System::String^ produitsSousSueilReaprovisionnement(void);
		System::String^ articlePlusVendus(void);
		System::String^ articleMoinssVendus(void);
		System::String^ chiffreAffairesurUnMois(void);
		System::String^ totalAchatClient(void);
		System::String^ totalValeurAchatStock(void);
		System::String^ totalValeurCommercialeStock(void);
		System::String^ SimulerVariationValeurCommercialeStock(void);
		//get
		int get_Id_Client(void);
		System::String^ get_com_datePaiement(void);
		int get_id_stock(void);
		//set
		
		void set_tva(System::String^);
		void set_marge(System::String^);
		void set_remise(System::String^);
		void set_demarcheInconnue(System::String^);

		void set_Id_Client(int);
	
		void set_com_datePaiement(System::String^);

		void set_Id_stock(int);
		
	};
}