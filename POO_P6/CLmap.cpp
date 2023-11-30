
//CLmap.CPP*****************************************************************************************

#include "CLmapTB.h"

System::String^ NS_Comp_Mappage::CLmapTB::Select(void)
{
	return "SELECT [id_tb2], [name], [surname] FROM [DB_P6].[dbo].[TB_2]";
}
System::String^ NS_Comp_Mappage::CLmapTB::Insert(void)
{
	return "INSERT INTO TB_P6 (nom, prenom) VALUES('" + this->nom + "','" + this->prenom + "');";
}
System::String^ NS_Comp_Mappage::CLmapTB::Delete(void)
{
	return "DELETE FROM TB_P6 WHERE id = " + this->Id + ";";
}
System::String^ NS_Comp_Mappage::CLmapTB::Update(void)
{
	return "UPDATE TB_P6 SET nom = '" + this->nom + "', prenom = '" + this->prenom + "' WHERE id = " + this->Id + ";";
}
void NS_Comp_Mappage::CLmapTB::setId(int id_tb2)
{
	this->Id = id_tb2;
}
void NS_Comp_Mappage::CLmapTB::setNom(System::String^ name)
{
	this->nom = name;
}
void NS_Comp_Mappage::CLmapTB::setPrenom(System::String^ surname)
{
	this->prenom = surname;
}
int NS_Comp_Mappage::CLmapTB::getId(void) { return this->Id; }
System::String^ NS_Comp_Mappage::CLmapTB::getNom(void) { return this->nom; }
System::String^ NS_Comp_Mappage::CLmapTB::getPrenom(void) { return this->prenom; }



