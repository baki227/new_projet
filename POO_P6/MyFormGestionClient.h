#pragma once
#include "CLservices.h"
#include "MyFormUser.h"
namespace POOP6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyFormGestionClient
	/// </summary>
	public ref class MyFormGestionClient : public System::Windows::Forms::Form
	{
	public:
		MyFormGestionClient(void)
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
		~MyFormGestionClient()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: NS_Comp_Svc::CLservices_Client^ oSvc; //oublie pas ------------------------------------
	private: System::Data::DataSet^ oDs;////oublie pas ------------------------------------

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox4;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
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
			this->dataGridView1->Size = System::Drawing::Size(944, 247);
			this->dataGridView1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(31, 302);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(200, 218);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Load Database";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyFormGestionClient::Load_database_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(237, 302);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(136, 38);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Delete Client";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyFormGestionClient::btn_delete_click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(419, 351);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(85, 26);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyFormGestionClient::textBox1_TextChanged);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(237, 346);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(128, 36);
			this->button3->TabIndex = 4;
			this->button3->Text = L"insérer";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyFormGestionClient::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(237, 391);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(128, 33);
			this->button4->TabIndex = 5;
			this->button4->Text = L"modifier";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyFormGestionClient::modifier_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(331, 430);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(10, 8);
			this->button5->TabIndex = 6;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"dd-MM-yyyy";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(629, 325);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(279, 26);
			this->dateTimePicker1->TabIndex = 27;
			this->dateTimePicker1->Value = System::DateTime(2023, 12, 14, 0, 0, 0, 0);
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &MyFormGestionClient::dateTimePicker1_ValueChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(440, 320);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 20);
			this->label1->TabIndex = 28;
			this->label1->Text = L"nom";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(658, 302);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(142, 20);
			this->label3->TabIndex = 29;
			this->label3->Text = L"Date de naissance";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(522, 320);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 20);
			this->label2->TabIndex = 31;
			this->label2->Text = L"prenom";
			this->label2->Click += gcnew System::EventHandler(this, &MyFormGestionClient::label2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(526, 351);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(85, 26);
			this->textBox2->TabIndex = 30;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(404, 412);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 26);
			this->textBox7->TabIndex = 32;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(417, 380);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(63, 20);
			this->label5->TabIndex = 33;
			this->label5->Text = L"numéro";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(537, 421);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 26);
			this->textBox3->TabIndex = 34;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(533, 391);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(32, 20);
			this->label6->TabIndex = 35;
			this->label6->Text = L"rue";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(365, 492);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(186, 28);
			this->comboBox2->TabIndex = 36;
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->ForeColor = System::Drawing::SystemColors::WindowText;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(13) {
				L"Auvergne-Rhône-Alpes", L"Bourgogne-Franche-Comté",
					L"Bretagne", L"Centre-Val de Loire", L"Corse", L"Grand Est", L"Hauts-de-France", L"Île-de-France", L"Normandie", L"Nouvelle-Aquitaine",
					L"Occitanie", L"Pays de la Loire", L"Provence-Alpes-Côte d\'Azur"
			});
			this->comboBox1->Location = System::Drawing::Point(629, 492);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(150, 28);
			this->comboBox1->TabIndex = 37;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(429, 469);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(34, 20);
			this->label9->TabIndex = 38;
			this->label9->Text = L"ville";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(667, 469);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(53, 20);
			this->label10->TabIndex = 39;
			this->label10->Text = L"région";
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"France" });
			this->comboBox4->Location = System::Drawing::Point(811, 492);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(97, 28);
			this->comboBox4->TabIndex = 40;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(1) {
				L"France"
			});
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(824, 460);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(42, 20);
			this->label11->TabIndex = 41;
			this->label11->Text = L"pays";
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(845, 419);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(87, 28);
			this->comboBox3->TabIndex = 42;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(841, 391);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(91, 20);
			this->label8->TabIndex = 43;
			this->label8->Text = L"code postal";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(434, 276);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 26);
			this->textBox5->TabIndex = 44;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(387, 276);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(26, 20);
			this->label12->TabIndex = 45;
			this->label12->Text = L"ID";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::White;
			this->textBox4->Location = System::Drawing::Point(86, 526);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(53, 26);
			this->textBox4->TabIndex = 46;
			this->textBox4->Visible = false;

			// 
			// MyFormGestionClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(968, 579);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyFormGestionClient";
			this->Text = L"MyFormGestionClient";
			this->Load += gcnew System::EventHandler(this, &MyFormGestionClient::MyFormGestionClient_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyFormGestionClient_Load(System::Object^ sender, System::EventArgs^ e) {

		this->oSvc = gcnew NS_Comp_Svc::CLservices_Client();
		// Spécifiez le chemin complet de votre fichier texte
		String^ filePath = "C:\\Users\\WC272\\source\\repos\\POO_P6\\POO_P6\\cities.csv";
		String^ filePath2 = "C:\\Users\\WC272\\source\\repos\\POO_P6\\POO_P6\\sql-pays.csv";

		try {
			// Vérifiez que le fichier existe avant de tenter de le lire
			if (System::IO::File::Exists(filePath)) {
				// Initialisez la ComboBox
				comboBox2->Items->Clear();
				comboBox3->Items->Clear();
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
					comboBox2->Items->Add(fields[1]);
					comboBox3->Items->Add(fields[0]);


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
	private: System::Void Load_database_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView1->Refresh();
		this->oDs = this->oSvc->selectionnerTousLesClients("Rsl");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl";
	}
	
	private: System::Void btn_delete_click(System::Object^ sender, System::EventArgs^ e) {
		int id = Convert::ToInt32(this->textBox1->Text);
		this->oSvc->deleteUnClient(id);
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc->insererUnClient(textBox1->Text, textBox2->Text, dateTimePicker1->Text, textBox7->Text, textBox3->Text, comboBox3->Text, textBox4->Text, comboBox2->Text, comboBox1->Text, comboBox4->Text);
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void modifier_Click(System::Object^ sender, System::EventArgs^ e) {
	int id = Convert::ToInt32(textBox5->Text);
	this->oSvc->modifierUnClient(id, textBox1->Text, textBox2->Text, dateTimePicker1->Text, textBox7->Text, textBox3->Text, comboBox3->Text, textBox4->Text, comboBox2->Text, comboBox1->Text, comboBox4->Text);
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}

};
}
