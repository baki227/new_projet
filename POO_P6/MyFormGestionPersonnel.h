#pragma once

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
			this->SuspendLayout();
			// 
			// MyFormGestionPersonnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(278, 244);
			this->Name = L"MyFormGestionPersonnel";
			this->Text = L"MyFormGestionPersonnel";
			this->Load += gcnew System::EventHandler(this, &MyFormGestionPersonnel::MyFormGestionPersonnel_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyFormGestionPersonnel_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
