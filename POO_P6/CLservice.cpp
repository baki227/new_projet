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

void NS_Comp_Svc::CLservices_Client::deleteUnClient(int id)
{
	System::String^ sql;
	this->oMappUtilisateur->set_Id_Client(id);
	sql = this->oMappUtilisateur->Delete();
	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices_Client::insererUnClient(System::String^ nom, System::String^ prenom, System::String^ dateNaissance , System::String^ numAdresse, System::String^ rueAdresse, System::String^ code_postal, System::String^ typeArdresse, System::String^ ville, System::String^ region, System::String^ pays)
{
	System::String^ sql;
	this->oMappUtilisateur->set_uti_nom(nom);
	this->oMappUtilisateur->set_uti_prenom(prenom);
	this->oMappUtilisateur->set_uti_dateNaissance(dateNaissance);
	this->oMappUtilisateur->set_adr_num(numAdresse);
	this->oMappUtilisateur->set_adr_rue(rueAdresse);
	this->oMappUtilisateur->set_adr_postalcode(code_postal);
	this->oMappUtilisateur->set_adr_type(typeArdresse);
	this->oMappUtilisateur->set_cit_nom(ville);
	this->oMappUtilisateur->set_reg_nom(region);
	this->oMappUtilisateur->set_pay_nom(pays);
	sql = this->oMappUtilisateur->Insert();
	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices_Client::modifierUnClient(int id_client, System::String^ nom, System::String^ prenom, System::String^ dateNaissance, System::String^ numAdresse, System::String^ rueAdresse, System::String^ code_postal, System::String^ typeArdresse, System::String^ ville, System::String^ region, System::String^ pays)
{
	System::String^ sql;
	this->oMappUtilisateur->set_Id_Client(id_client);
	this->oMappUtilisateur->set_uti_nom(nom);
	this->oMappUtilisateur->set_uti_prenom(prenom);
	this->oMappUtilisateur->set_uti_dateNaissance(dateNaissance);
	this->oMappUtilisateur->set_adr_num(numAdresse);
	this->oMappUtilisateur->set_adr_rue(rueAdresse);
	this->oMappUtilisateur->set_adr_postalcode(code_postal);
	this->oMappUtilisateur->set_adr_type(typeArdresse);
	this->oMappUtilisateur->set_cit_nom(ville);
	this->oMappUtilisateur->set_reg_nom(region);
	this->oMappUtilisateur->set_pay_nom(pays);
	sql = this->oMappUtilisateur->Update();
	this->oCad->actionRows(sql);
}
