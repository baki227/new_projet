//CLservice.h********************************************************************************
#pragma once
#include "CLmapTB.h"
#include "CLcad.h"
#include "CLmap_utilisateur.h"
#include "CLmap_articles.h"
#include "CLmap_commandes.h"
namespace NS_Comp_Svc
{
	ref class CLservices
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::CLmapTB^ oMappTB;
	public:
		CLservices(void);
		System::Data::DataSet^ selectionnerToutesLesPersonnes(System::String^);
		void ajouterUnePersonne(System::String^, System::String^);
		void modifierUnePersonne(System::String^, System::String^, int);
		void deleteUnePersonne(int);
	};

	//------------------------------------CLIENTS----------------------------------------
	ref class CLservices_Client
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_MappageUtilisateur::utilisateur^ oMappUtilisateur;

	public:
		CLservices_Client(void);
		System::Data::DataSet^ selectionnerTousLesClients(System::String^);
		void deleteUnClient(int);
		void insererUnClient(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
		void modifierUnClient(int, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
	};

	//------------------------------------personnel----------------------------------------
	ref class CLservices_Personnel
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_MappageUtilisateur::utilisateur^ oMappPersonnel;

	public:
		CLservices_Personnel(void);
		System::Data::DataSet^ selectionnerTousLePersonnel(System::String^);
		void deleteUnPersonnel(int);
		void insererUnPersonnel(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
		void modifierUnPersonnel(int, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
	};


}