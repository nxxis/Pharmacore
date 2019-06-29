#pragma once

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}



	private: System::Windows::Forms::TextBox^ username_txt;

	protected:

	protected:



	private: System::Windows::Forms::Button^ login_btn;
	private: System::Windows::Forms::Button^ register_btn;



	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ pwd_txt;




	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->username_txt = (gcnew System::Windows::Forms::TextBox());
			this->pwd_txt = (gcnew System::Windows::Forms::TextBox());
			this->login_btn = (gcnew System::Windows::Forms::Button());
			this->register_btn = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// username_txt
			// 
			this->username_txt->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username_txt->Location = System::Drawing::Point(44, 157);
			this->username_txt->Name = L"username_txt";
			this->username_txt->Size = System::Drawing::Size(222, 26);
			this->username_txt->TabIndex = 2;
			this->username_txt->Text = L"User ID";
			this->username_txt->TextChanged += gcnew System::EventHandler(this, &Form1::Username_txt_TextChanged);
			// 
			// pwd_txt
			// 
			this->pwd_txt->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pwd_txt->Location = System::Drawing::Point(44, 206);
			this->pwd_txt->Name = L"pwd_txt";
			this->pwd_txt->PasswordChar = '*';
			this->pwd_txt->Size = System::Drawing::Size(222, 26);
			this->pwd_txt->TabIndex = 3;
			this->pwd_txt->Text = L"Password";
			this->pwd_txt->UseSystemPasswordChar = true;
			this->pwd_txt->TextChanged += gcnew System::EventHandler(this, &Form1::Pwd_txt_TextChanged);
			// 
			// login_btn
			// 
			this->login_btn->BackColor = System::Drawing::Color::Gainsboro;
			this->login_btn->Location = System::Drawing::Point(68, 268);
			this->login_btn->Name = L"login_btn";
			this->login_btn->Size = System::Drawing::Size(173, 31);
			this->login_btn->TabIndex = 4;
			this->login_btn->Text = L"Login";
			this->login_btn->UseVisualStyleBackColor = false;
			this->login_btn->Click += gcnew System::EventHandler(this, &Form1::Login_btn_Click);
			// 
			// register_btn
			// 
			this->register_btn->BackColor = System::Drawing::Color::Gainsboro;
			this->register_btn->Location = System::Drawing::Point(68, 315);
			this->register_btn->Name = L"register_btn";
			this->register_btn->Size = System::Drawing::Size(173, 29);
			this->register_btn->TabIndex = 5;
			this->register_btn->Text = L"Register";
			this->register_btn->UseVisualStyleBackColor = false;
			this->register_btn->Click += gcnew System::EventHandler(this, &Form1::Register_btn_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->register_btn);
			this->panel1->Controls->Add(this->login_btn);
			this->panel1->Controls->Add(this->username_txt);
			this->panel1->Controls->Add(this->pwd_txt);
			this->panel1->Location = System::Drawing::Point(329, 67);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(301, 369);
			this->panel1->TabIndex = 9;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox1->Location = System::Drawing::Point(77, 20);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(141, 121);
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Form1::PictureBox1_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(879, 534);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"PharmaCore";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	
private: System::Void Register_btn_Click(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void Login_btn_Click(System::Object^ sender, System::EventArgs^ e) {

	}

private: System::Void Username_txt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Pwd_txt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label1_Click_2(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void PictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
