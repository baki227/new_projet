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

	ref class CLservices_Client
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_MappageUtilisateur::utilisateur^ oMappUtilisateur;

	public:
		CLservices_Client(void);
		System::Data::DataSet^ selectionnerTousLesClients(System::String^);
		void deleteUnClient(int);
	};

}