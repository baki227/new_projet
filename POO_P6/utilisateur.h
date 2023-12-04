#pragma once
#include <string.h>
ref class utilisateur{
	private:
		System::String^ pay_nom;
		System::String^ uti_dateNaissance;
		System::String^ uti_prenom;
		System::String^ uti_nom;
		System::String^ adr_postalcode;
		System::String^ adr_num;
		System::String^ adr_rue;
		System::String^ reg_nom;
		System::String^ cit_nom;
		int Id_Client;
		int per_supHerarchique;
		System::String^ per_dateEmbauche;
		int id_Personnel;
	public:
		//get
		System::String^ get_pay_nom(void);
		System::String^ get_uti_dateNaissance(void);
		System::String^ get_uti_prenom(void);
		System::String^ get_uti_nom(void);
		System::String^ get_adr_postalcode(void);
		System::String^ get_adr_num(void);
		System::String^ get_adr_rue(void);
		System::String^ get_reg_nom(void);
		System::String^ get_cit_nom(void);
		int get_Id_Client(void);
		int get_per_supHerarchique(void);
		System::String^ get_per_dateEmbauche(void);
		int get_id_Personnel(void);
		//set
		void set_pay_nom(System::String^);
		void set_uti_dateNaissance(System::String^);
		void set_uti_prenom(System::String^);
		void set_uti_nom(System::String^);
		void set_adr_postalcode(System::String^);
		void set_adr_num(System::String^);
		void set_adr_rue(System::String^);
		void set_reg_nom(System::String^);
		void set_cit_nom(System::String^);
		void set_Id_Client(int);
		void set_per_supHerarchique(int);
		void set_per_dateEmbauche(System::String^);
		void set_id_Personnel(int);
};