#pragma once

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
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
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
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(600, 309);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(238, 196);
			this->button2->TabIndex = 2;
			this->button2->Text = L"calculer chiffre d\'affaire sur un mois";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// dateTimePicker3
			// 
			this->dateTimePicker3->CustomFormat = L"dd-MM-yyyy";
			this->dateTimePicker3->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker3->Location = System::Drawing::Point(859, 309);
			this->dateTimePicker3->Name = L"dateTimePicker3";
			this->dateTimePicker3->Size = System::Drawing::Size(279, 26);
			this->dateTimePicker3->TabIndex = 31;
			this->dateTimePicker3->Value = System::DateTime(2023, 12, 6, 0, 0, 0, 0);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(33, 556);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(327, 175);
			this->button3->TabIndex = 32;
			this->button3->Text = L"identifier produits sous seuil de reaprovisionnement";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(619, 556);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(204, 144);
			this->button4->TabIndex = 33;
			this->button4->Text = L"o\tCalculer le montant total des achats pour un client";
			this->button4->UseVisualStyleBackColor = true;
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
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(33, 872);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(344, 85);
			this->button6->TabIndex = 37;
			this->button6->Text = L"o\tIdentifier les 10 articles les moins vendus";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(644, 732);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(230, 79);
			this->button7->TabIndex = 38;
			this->button7->Text = L"o\tCalculer la valeur commerciale du stock";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(644, 832);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(305, 77);
			this->button8->TabIndex = 39;
			this->button8->Text = L"o\tCalculer la valeur d’achat du stock";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(926, 747);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 26);
			this->textBox2->TabIndex = 40;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(927, 719);
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
			// MyFormGestionStatistique
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1591, 969);
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
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
