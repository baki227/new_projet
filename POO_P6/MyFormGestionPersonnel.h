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
	/// Description résumée de MyFormGestionPersonnel
	/// </summary>
	public ref class MyFormGestionPersonnel : public System::Windows::Forms::Form
	{
	public:
		MyFormGestionPersonnel(void)
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
		~MyFormGestionPersonnel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: NS_Comp_Svc::CLservices_Personnel^ oSvc; //oublie pas ------------------------------------
	private: System::Data::DataSet^ oDs;////oublie pas ------------------------------------
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;

	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker3;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label14;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker3 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
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
			this->dataGridView1->Size = System::Drawing::Size(784, 302);
			this->dataGridView1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 357);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(141, 112);
			this->button1->TabIndex = 1;
			this->button1->Text = L"load database";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyFormGestionPersonnel::Load_database_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(283, 376);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 26);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(430, 376);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 26);
			this->textBox2->TabIndex = 3;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(283, 454);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 26);
			this->textBox3->TabIndex = 4;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(442, 457);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 26);
			this->textBox4->TabIndex = 5;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(169, 379);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"inserer";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyFormGestionPersonnel::inserer_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(169, 457);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 7;
			this->button3->Text = L"delete";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyFormGestionPersonnel::delete_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(169, 541);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 8;
			this->button4->Text = L"modifier";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyFormGestionPersonnel::modifier_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(283, 330);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 26);
			this->textBox5->TabIndex = 10;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(645, 457);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 28);
			this->comboBox1->TabIndex = 11;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"France" });
			this->comboBox2->Location = System::Drawing::Point(575, 605);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 28);
			this->comboBox2->TabIndex = 12;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(13) {
				L"Auvergne-Rhône-Alpes", L"Bourgogne-Franche-Comté",
					L"Bretagne", L"Centre-Val de Loire", L"Corse", L"Grand Est", L"Hauts-de-France", L"Île-de-France", L"Normandie", L"Nouvelle-Aquitaine",
					L"Occitanie", L"Pays de la Loire", L"Provence-Alpes-Côte d\'Azur"
			});
			this->comboBox3->Location = System::Drawing::Point(430, 605);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 28);
			this->comboBox3->TabIndex = 13;
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(277, 605);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(121, 28);
			this->comboBox4->TabIndex = 14;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(215, 336);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(21, 20);
			this->label1->TabIndex = 15;
			this->label1->Text = L"id";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(309, 359);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 20);
			this->label2->TabIndex = 16;
			this->label2->Text = L"nom";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(459, 353);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(63, 20);
			this->label3->TabIndex = 17;
			this->label3->Text = L"prenom";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(309, 434);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 20);
			this->label4->TabIndex = 18;
			this->label4->Text = L"num";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(459, 443);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(32, 20);
			this->label5->TabIndex = 19;
			this->label5->Text = L"rue";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(668, 434);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(91, 20);
			this->label6->TabIndex = 20;
			this->label6->Text = L"code postal";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(294, 582);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(34, 20);
			this->label7->TabIndex = 21;
			this->label7->Text = L"ville";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(471, 582);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(53, 20);
			this->label8->TabIndex = 22;
			this->label8->Text = L"région";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(604, 582);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(42, 20);
			this->label9->TabIndex = 23;
			this->label9->Text = L"pays";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(298, 528);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 26);
			this->textBox6->TabIndex = 24;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(442, 528);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 26);
			this->textBox7->TabIndex = 25;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(273, 505);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(138, 20);
			this->label10->TabIndex = 27;
			this->label10->Text = L"id suphierarchique";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(447, 505);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(104, 20);
			this->label11->TabIndex = 28;
			this->label11->Text = L"niveau hirerar";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(48, 595);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(84, 20);
			this->label12->TabIndex = 29;
			this->label12->Text = L"date today";
			// 
			// dateTimePicker3
			// 
			this->dateTimePicker3->CustomFormat = L"dd-MM-yyyy";
			this->dateTimePicker3->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker3->Location = System::Drawing::Point(549, 374);
			this->dateTimePicker3->Name = L"dateTimePicker3";
			this->dateTimePicker3->Size = System::Drawing::Size(279, 26);
			this->dateTimePicker3->TabIndex = 30;
			this->dateTimePicker3->Value = System::DateTime(2023, 12, 6, 0, 0, 0, 0);
			this->dateTimePicker3->ValueChanged += gcnew System::EventHandler(this, &MyFormGestionPersonnel::dateTimePicker3_ValueChanged);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"dd-MM-yyyy";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(-13, 642);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(279, 26);
			this->dateTimePicker1->TabIndex = 31;
			this->dateTimePicker1->Value = System::DateTime(2023, 12, 6, 0, 0, 0, 0);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(614, 349);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(117, 20);
			this->label13->TabIndex = 32;
			this->label13->Text = L"date naissance";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(712, 644);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(68, 26);
			this->textBox8->TabIndex = 33;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(720, 613);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(87, 20);
			this->label14->TabIndex = 34;
			this->label14->Text = L"typearesse";
			this->label14->Click += gcnew System::EventHandler(this, &MyFormGestionPersonnel::label14_Click);
			// 
			// MyFormGestionPersonnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(808, 699);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->dateTimePicker3);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyFormGestionPersonnel";
			this->Text = L"MyFormGestionPersonnel";
			this->Load += gcnew System::EventHandler(this, &MyFormGestionPersonnel::MyFormGestionPersonnel_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyFormGestionPersonnel_Load(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc = gcnew NS_Comp_Svc::CLservices_Personnel();

		// Spécifiez le chemin complet de votre fichier texte
		String^ filePath = "C:\\Users\\WC272\\source\\repos\\POO_P6\\POO_P6\\cities.csv";
		String^ filePath2 = "C:\\Users\\WC272\\source\\repos\\POO_P6\\POO_P6\\sql-pays.csv";

		try {
			// Vérifiez que le fichier existe avant de tenter de le lire
			if (System::IO::File::Exists(filePath)) {
				// Initialisez la ComboBox
				comboBox1->Items->Clear();
				comboBox4->Items->Clear();
				// Initialisez le StreamReader pour lire le fichier texte
				System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(filePath);

				// Lisez le fichier ligne par ligne
				while (!reader->EndOfStream) {
					System::String^ line = reader->ReadLine();

					// Divisez la ligne en champs en utilisant la virgule comme délimiteur
					array<System::String^>^ fields = line->Split(',');

					// Assurez-vous qu'il y a au moins deux champs avant d'essayer d'accéder au deuxième champ

						// Ajoutez le deuxième champ (nom de la ville) à la ComboBox
					comboBox4->Items->Add(fields[1]);
					comboBox1->Items->Add(fields[0]);


				}

				// Fermez le StreamReader
				reader->Close();
			}
			else {
				// Affichez un message d'erreur si le fichier n'existe pas
				System::Windows::Forms::MessageBox::Show("Le fichier texte n'existe pas.");
			}
		}
		catch (System::Exception^ ex) {
			// Gérez les exceptions appropriées
			System::Windows::Forms::MessageBox::Show("Erreur : " + ex->Message);
		}
	}
		   bool AreTextBoxesNotEmpty() {
			   return !String::IsNullOrWhiteSpace(textBox1->Text) &&
				   !String::IsNullOrWhiteSpace(textBox2->Text) &&
				   !String::IsNullOrWhiteSpace(dateTimePicker3->Text) &&
				   !String::IsNullOrWhiteSpace(textBox3->Text) &&
				   !String::IsNullOrWhiteSpace(textBox4->Text) &&
				   !String::IsNullOrWhiteSpace(comboBox1->Text) &&
				   !String::IsNullOrWhiteSpace(comboBox4->Text) &&
				   !String::IsNullOrWhiteSpace(comboBox3->Text) &&
				   !String::IsNullOrWhiteSpace(comboBox2->Text) &&
				   !String::IsNullOrWhiteSpace(textBox6->Text) &&
				   !String::IsNullOrWhiteSpace(textBox7->Text) &&
				   !String::IsNullOrWhiteSpace(dateTimePicker1->Text);
		   }
	private: System::Void Load_database_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView1->Refresh();
		this->oDs = this->oSvc->selectionnerTousLePersonnel("Rsl");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl";
	}
	private: System::Void dateTimePicker3_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void inserer_Click(System::Object^ sender, System::EventArgs^ e) {
	if (AreTextBoxesNotEmpty()) {
		Int32 entierTextBox6;
		Int32 entierTextBox7;

		if (Int32::TryParse(textBox6->Text, entierTextBox6) && Int32::TryParse(textBox7->Text, entierTextBox7)) {
			this->oSvc->insererUnPersonnel(textBox1->Text, textBox2->Text, dateTimePicker3->Text, textBox3->Text, textBox4->Text, comboBox1->Text, textBox8->Text, comboBox4->Text, comboBox3->Text, comboBox2->Text, entierTextBox6.ToString(), entierTextBox7.ToString(), dateTimePicker1->Text);
		}
		else {
			MessageBox::Show("Les valeurs dans id_supérieur hiérarchique et/ou nivreau hiérarchique ne sont pas des entiers valides.", "Erreur de conversion", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	else {
		MessageBox::Show("Veuillez remplir tous les champs.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void modifier_Click(System::Object^ sender, System::EventArgs^ e) {
	if (AreTextBoxesNotEmpty()) {
		Int32 id;
		if (Int32::TryParse(textBox5->Text, id)) {

			Int32 entierTextBox6;
			Int32 entierTextBox7;

			if (Int32::TryParse(textBox6->Text, entierTextBox6) && Int32::TryParse(textBox7->Text, entierTextBox7)) {
				this->oSvc->modifierUnPersonnel(id, textBox1->Text, textBox2->Text, dateTimePicker3->Text, textBox3->Text, textBox4->Text, comboBox1->Text, textBox8->Text, comboBox4->Text, comboBox3->Text, comboBox2->Text, entierTextBox6.ToString(), entierTextBox7.ToString(), dateTimePicker1->Text);
			}
			else {
				MessageBox::Show("Les valeurs dans id_supérieur hiérarchique et/ou nivreau hiérarchique ne sont pas des entiers valides.", "Erreur de conversion", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else {
			MessageBox::Show("La valeur dans id_personnel n'est pas un entier valide.", "Erreur de conversion", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	else {
		MessageBox::Show("Veuillez remplir tous les champs.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void delete_Click(System::Object^ sender, System::EventArgs^ e) {
	Int32 id;
	if (Int32::TryParse(textBox5->Text, id)) {
		this->oSvc->deleteUnPersonnel(id);
	}
	else {
		MessageBox::Show("La valeur dans id_personnel n'est pas un entier valide.", "Erreur de conversion", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
