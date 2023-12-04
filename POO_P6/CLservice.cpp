//CLservice.CPP***************************************************************************************
#include <iostream>
#include "CLservices.h"

NS_Comp_Svc::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappTB = gcnew NS_Comp_Mappage::CLmapTB();
}
System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerToutesLesPersonnes(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->Select();
	return this->oCad->getRows(sql, dataTableName);
}
void NS_Comp_Svc::CLservices::ajouterUnePersonne(System::String^ nom, System::String^ prenom)
{
	System::String^ sql;

	this->oMappTB->setNom(nom);
	this->oMappTB->setPrenom(prenom);
	sql = this->oMappTB->Insert();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::modifierUnePersonne(System::String^ nom, System::String^ prenom, int id)
{
	System::String^ sql;
	
	this->oMappTB->setId(id);
	this->oMappTB->setNom(nom);
	this->oMappTB->setPrenom(prenom);

	sql = this->oMappTB->Update();

	this->oCad->actionRows(sql);
}


void NS_Comp_Svc::CLservices::deleteUnePersonne(int id)
{
	System::String^ sql;
	this->oMappTB->setId(id);
    sql = this->oMappTB->Delete();
    this->oCad->actionRows(sql);
}



//------------------------------------CLIENTS----------------------------------------
NS_Comp_Svc::CLservices_Client::CLservices_Client(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappUtilisateur = gcnew NS_Comp_MappageUtilisateur::utilisateur();

}

System::Data::DataSet^ NS_Comp_Svc::CLservices_Client::selectionnerTousLesClients(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappUtilisateur->SelectHumain();
	return this->oCad->getRows(sql, dataTableName);

}
