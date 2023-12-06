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
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label2;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(home::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Goldenrod;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 9));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(285, 518);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(196, 79);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Gestion du personnel";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &home::gestionPersonnel_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Goldenrod;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(81, 216);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(196, 79);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Gestion des clients";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &home::gestionClient_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Goldenrod;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(488, 364);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(196, 79);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Gestion des commandes";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &home::gestionCommandes_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Goldenrod;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(81, 364);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(196, 79);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Gestion du stock";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &home::gestionStock_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Goldenrod;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(488, 216);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(196, 79);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Gestion des statistiques";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &home::gestionStatistique_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Goldenrod;
			this->button6->Cursor = System::Windows::Forms::Cursors::Default;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(666, 613);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(104, 44);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Quitter";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &home::quit_click);
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Location = System::Drawing::Point(0, -2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(401, 715);
			this->panel1->TabIndex = 6;
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->button6);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Location = System::Drawing::Point(400, -2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(782, 670);
			this->panel2->TabIndex = 7;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->Location = System::Drawing::Point(29, 168);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(354, 114);
			this->panel3->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Small", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(136, 285);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(128, 30);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Yes We Are";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(111, 73);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(563, 27);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Welcome to the menu dedicated to our customer service team.";
			// 
			// home
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1182, 667);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"home";
			this->Text = L"home";
			this->Load += gcnew System::EventHandler(this, &home::home_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
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
