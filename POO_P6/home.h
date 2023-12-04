#pragma once
#include "MyForm.h"
#include "MyFormGestionClient.h"
#include "MyFormGestionPersonnel.h"
#include "MyFormGestionCommandes.h"
#include "MyFormGestionStock.h"
#include "MyFormGestionStatistique.h"
namespace POOP6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de home
	/// </summary>
	public ref class home : public System::Windows::Forms::Form
	{
	public:
		home(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~home()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(524, 356);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(196, 75);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Gestion du personnel";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &home::gestionPersonnel_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(524, 32);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(196, 75);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Gestion des clients";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &home::gestionClient_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(524, 113);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(196, 75);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Gestion des commandes";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &home::gestionCommandes_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(524, 194);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(196, 75);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Gestion du stock";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &home::gestionStock_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(524, 275);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(196, 75);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Gestion des statistiques";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &home::gestionStatistique_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(793, 434);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(104, 42);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Quitter";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &home::quit_click);
			// 
			// home
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(909, 488);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"home";
			this->Text = L"home";
			this->Load += gcnew System::EventHandler(this, &home::home_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void gestionPersonnel_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm^ myForm = gcnew MyForm();  // Instantiate home
		myForm->Show();  // Show home
	}
	private: System::Void home_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void gestionClient_Click(System::Object^ sender, System::EventArgs^ e) {
		MyFormGestionClient^ myForm_GestionClient = gcnew MyFormGestionClient();
		myForm_GestionClient->Show();
	}
	private: System::Void gestionCommandes_Click(System::Object^ sender, System::EventArgs^ e) {
		MyFormGestionCommandes^ myForm_GestionCommandes = gcnew MyFormGestionCommandes();
		myForm_GestionCommandes->Show();
	}
	private: System::Void gestionStock_Click(System::Object^ sender, System::EventArgs^ e) {
		MyFormGestionStock^ myForm_GestionStock = gcnew MyFormGestionStock();
		myForm_GestionStock->Show();
	}
	private: System::Void gestionStatistique_Click(System::Object^ sender, System::EventArgs^ e) {
		MyFormGestionStatistique^ myForm_GestionStatistique = gcnew MyFormGestionStatistique();
		myForm_GestionStatistique->Show();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void quit_click(System::Object^ sender, System::EventArgs^ e) {
	}

};
}
