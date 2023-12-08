#pragma once
#include "CLservices.h"
namespace POOP6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyFormGestionStatistique
	/// </summary>
	public ref class MyFormGestionStatistique : public System::Windows::Forms::Form
	{
	public:
		MyFormGestionStatistique(void)
		{
			InitializeComponent();
			this->oSvc = gcnew NS_Comp_Svc::CLservices_Statistiques();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
	private: NS_Comp_Svc::CLservices_Statistiques^ oSvc; //oublie pas ------------------------------------

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::RadioButton^ radioButton7;
	private: System::Windows::Forms::RadioButton^ radioButton8;
	private: System::Windows::Forms::RadioButton^ radioButton9;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::RadioButton^ radioButton10;
	private: System::Windows::Forms::RadioButton^ radioButton11;
	private: System::Windows::Forms::RadioButton^ radioButton12;
	private: System::Data::DataSet^ oDs;////oublie pas ------------------------------------
	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyFormGestionStatistique()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button9;
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker3 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton11 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton12 = (gcnew System::Windows::Forms::RadioButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(1539, 269);
			this->dataGridView1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(33, 303);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(327, 202);
			this->button1->TabIndex = 1;
			this->button1->Text = L"calculer panier moyen";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyFormGestionStatistique::CalculpanierMoyen_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(600, 309);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(238, 196);
			this->button2->TabIndex = 2;
			this->button2->Text = L"calculer chiffre d\'affaire sur un mois";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyFormGestionStatistique::chiffreAffaireUnMois_Click);
			// 
			// dateTimePicker3
			// 
			this->dateTimePicker3->CustomFormat = L"yyyy-MM-dd";
			this->dateTimePicker3->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker3->Location = System::Drawing::Point(859, 309);
			this->dateTimePicker3->Name = L"dateTimePicker3";
			this->dateTimePicker3->Size = System::Drawing::Size(279, 26);
			this->dateTimePicker3->TabIndex = 31;
			this->dateTimePicker3->Value = System::DateTime(2023, 12, 6, 0, 0, 0, 0);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(50, 556);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(327, 175);
			this->button3->TabIndex = 32;
			this->button3->Text = L"identifier produits sous seuil de reaprovisionnement";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyFormGestionStatistique::produitsSouseuil_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(619, 556);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(204, 144);
			this->button4->TabIndex = 33;
			this->button4->Text = L"o\tCalculer le montant total des achats pour un client";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyFormGestionStatistique::totalAchatClient_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(888, 593);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(269, 26);
			this->textBox1->TabIndex = 34;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(898, 569);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(67, 20);
			this->label1->TabIndex = 35;
			this->label1->Text = L"id_client";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(33, 774);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(327, 81);
			this->button5->TabIndex = 36;
			this->button5->Text = L"o\tIdentifier les 10 articles les plus vendus";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyFormGestionStatistique::plusVendus_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(33, 872);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(344, 85);
			this->button6->TabIndex = 37;
			this->button6->Text = L"o\tIdentifier les 10 articles les moins vendus";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyFormGestionStatistique::moinsVendus_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(619, 729);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(230, 79);
			this->button7->TabIndex = 38;
			this->button7->Text = L"o\tCalculer la valeur commerciale du stock";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyFormGestionStatistique::TotalValeurAchatStock_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(518, 850);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(305, 77);
			this->button8->TabIndex = 39;
			this->button8->Text = L"o\tCalculer la valeur d’achat du stock";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyFormGestionStatistique::totalValeurCommercialeStock_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(926, 705);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 26);
			this->textBox2->TabIndex = 40;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(922, 680);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 20);
			this->label2->TabIndex = 41;
			this->label2->Text = L"id_stock";
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(1186, 324);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(147, 102);
			this->button9->TabIndex = 42;
			this->button9->Text = L"o\tSimuler des variations de valeurs commerciales pour en déduire la valeur du sto"
				L"ck";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->radioButton3);
			this->panel1->Controls->Add(this->radioButton2);
			this->panel1->Controls->Add(this->radioButton1);
			this->panel1->Location = System::Drawing::Point(1093, 705);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(425, 51);
			this->panel1->TabIndex = 44;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(17, 10);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(126, 24);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"radioButton1";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyFormGestionStatistique::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(149, 10);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(126, 24);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"radioButton2";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(281, 10);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(126, 24);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"radioButton3";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->radioButton4);
			this->panel2->Controls->Add(this->radioButton5);
			this->panel2->Controls->Add(this->radioButton6);
			this->panel2->Location = System::Drawing::Point(1093, 762);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(425, 51);
			this->panel2->TabIndex = 45;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(281, 10);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(126, 24);
			this->radioButton4->TabIndex = 2;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"radioButton4";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(149, 10);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(126, 24);
			this->radioButton5->TabIndex = 1;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"radioButton5";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(17, 10);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(126, 24);
			this->radioButton6->TabIndex = 0;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"radioButton6";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->radioButton7);
			this->panel3->Controls->Add(this->radioButton8);
			this->panel3->Controls->Add(this->radioButton9);
			this->panel3->Location = System::Drawing::Point(1093, 819);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(425, 51);
			this->panel3->TabIndex = 46;
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Location = System::Drawing::Point(281, 10);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(126, 24);
			this->radioButton7->TabIndex = 2;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"radioButton7";
			this->radioButton7->UseVisualStyleBackColor = true;
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Location = System::Drawing::Point(149, 10);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(126, 24);
			this->radioButton8->TabIndex = 1;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"radioButton8";
			this->radioButton8->UseVisualStyleBackColor = true;
			// 
			// radioButton9
			// 
			this->radioButton9->AutoSize = true;
			this->radioButton9->Location = System::Drawing::Point(17, 10);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(126, 24);
			this->radioButton9->TabIndex = 0;
			this->radioButton9->TabStop = true;
			this->radioButton9->Text = L"radioButton9";
			this->radioButton9->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(1036, 719);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 20);
			this->label3->TabIndex = 47;
			this->label3->Text = L"TVA";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(931, 774);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(147, 20);
			this->label4->TabIndex = 48;
			this->label4->Text = L"marge commerciale";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(929, 831);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(149, 20);
			this->label5->TabIndex = 49;
			this->label5->Text = L"remise commericale";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(937, 886);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(150, 20);
			this->label6->TabIndex = 50;
			this->label6->Text = L"démarque inconnue";
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->radioButton10);
			this->panel4->Controls->Add(this->radioButton11);
			this->panel4->Controls->Add(this->radioButton12);
			this->panel4->Location = System::Drawing::Point(1093, 876);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(425, 51);
			this->panel4->TabIndex = 47;
			// 
			// radioButton10
			// 
			this->radioButton10->AutoSize = true;
			this->radioButton10->Location = System::Drawing::Point(281, 10);
			this->radioButton10->Name = L"radioButton10";
			this->radioButton10->Size = System::Drawing::Size(135, 24);
			this->radioButton10->TabIndex = 2;
			this->radioButton10->TabStop = true;
			this->radioButton10->Text = L"radioButton10";
			this->radioButton10->UseVisualStyleBackColor = true;
			// 
			// radioButton11
			// 
			this->radioButton11->AutoSize = true;
			this->radioButton11->Location = System::Drawing::Point(149, 10);
			this->radioButton11->Name = L"radioButton11";
			this->radioButton11->Size = System::Drawing::Size(135, 24);
			this->radioButton11->TabIndex = 1;
			this->radioButton11->TabStop = true;
			this->radioButton11->Text = L"radioButton11";
			this->radioButton11->UseVisualStyleBackColor = true;
			// 
			// radioButton12
			// 
			this->radioButton12->AutoSize = true;
			this->radioButton12->Location = System::Drawing::Point(17, 10);
			this->radioButton12->Name = L"radioButton12";
			this->radioButton12->Size = System::Drawing::Size(135, 24);
			this->radioButton12->TabIndex = 0;
			this->radioButton12->TabStop = true;
			this->radioButton12->Text = L"radioButton12";
			this->radioButton12->UseVisualStyleBackColor = true;
			// 
			// MyFormGestionStatistique
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1591, 969);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->dateTimePicker3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyFormGestionStatistique";
			this->Text = L"MyFormGestionStatistique";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void CalculpanierMoyen_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc = gcnew NS_Comp_Svc::CLservices_Statistiques();
		this->dataGridView1->Refresh();
		this->oDs = this->oSvc->Servicecalculerpaniermoyen("Rsl");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl";
	}

	
private: System::Void produitsSouseuil_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc = gcnew NS_Comp_Svc::CLservices_Statistiques();
	this->dataGridView1->Refresh();
	this->oDs = this->oSvc->ServiceproduitsSousSueilReaprovisionnement("Rsl");
	this->dataGridView1->DataSource = this->oDs;
	this->dataGridView1->DataMember = "Rsl";
}

private: System::Void plusVendus_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc = gcnew NS_Comp_Svc::CLservices_Statistiques();
	this->dataGridView1->Refresh();
	this->oDs = this->oSvc->ServicearticlePlusVendus("Rsl");
	this->dataGridView1->DataSource = this->oDs;
	this->dataGridView1->DataMember = "Rsl";
}
private: System::Void moinsVendus_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc = gcnew NS_Comp_Svc::CLservices_Statistiques();
	this->dataGridView1->Refresh();
	this->oDs = this->oSvc->ServicearticleMoinssVendus("Rsl");
	this->dataGridView1->DataSource = this->oDs;
	this->dataGridView1->DataMember = "Rsl";
}
private: System::Void chiffreAffaireUnMois_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc = gcnew NS_Comp_Svc::CLservices_Statistiques();
	this->dataGridView1->Refresh();

	

	this->oDs = this->oSvc->ServiceChiffreAffaireSurUnMois("Rsl", dateTimePicker3->Text);
	this->dataGridView1->DataSource = this->oDs;
	this->dataGridView1->DataMember = "Rsl";


}
private: System::Void totalAchatClient_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc = gcnew NS_Comp_Svc::CLservices_Statistiques();
	this->dataGridView1->Refresh();
	int id = Convert::ToInt16(textBox1->Text);
	this->oDs = this->oSvc->ServiceTotalAchatClient("Rsl", id);
	this->dataGridView1->DataSource = this->oDs;
	this->dataGridView1->DataMember = "Rsl";


}
private: System::Void TotalValeurAchatStock_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc = gcnew NS_Comp_Svc::CLservices_Statistiques();
	this->dataGridView1->Refresh();
	int id = Convert::ToInt16(textBox2->Text);
	this->oDs = this->oSvc->ServiceTotalValeurAchatStock("Rsl", id);
	this->dataGridView1->DataSource = this->oDs;
	this->dataGridView1->DataMember = "Rsl";
}
private: System::Void totalValeurCommercialeStock_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc = gcnew NS_Comp_Svc::CLservices_Statistiques();
	this->dataGridView1->Refresh();
	int id = Convert::ToInt16(textBox2->Text);
	this->oDs = this->oSvc->ServicetotalValeurCommercialeStock("Rsl", id);
	this->dataGridView1->DataSource = this->oDs;
	this->dataGridView1->DataMember = "Rsl";
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
