#include "MyForm1.h"


using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int __clrcall main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	POOP6::MyForm1 monFormulaire;
	Application::Run(% monFormulaire);
}
