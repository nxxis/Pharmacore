#pragma once

namespace Pharmacore {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::Splitter^ splitter1;
	private: System::Windows::Forms::Splitter^ splitter2;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->splitter1 = (gcnew System::Windows::Forms::Splitter());
			this->splitter2 = (gcnew System::Windows::Forms::Splitter());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(754, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// splitter1
			// 
			this->splitter1->Location = System::Drawing::Point(0, 24);
			this->splitter1->Name = L"splitter1";
			this->splitter1->Size = System::Drawing::Size(3, 449);
			this->splitter1->TabIndex = 1;
			this->splitter1->TabStop = false;
			// 
			// splitter2
			// 
			this->splitter2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->splitter2->Location = System::Drawing::Point(3, 24);
			this->splitter2->Name = L"splitter2";
			this->splitter2->Size = System::Drawing::Size(384, 449);
			this->splitter2->TabIndex = 2;
			this->splitter2->TabStop = false;
			this->splitter2->SplitterMoved += gcnew System::Windows::Forms::SplitterEventHandler(this, &MyForm::Splitter2_SplitterMoved);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Leelawadee UI", 30, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label1->Location = System::Drawing::Point(12, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(315, 67);
			this->label1->TabIndex = 4;
			this->label1->Text = L"INVENTORY";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::Label1_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Leelawadee UI", 30, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label2->Location = System::Drawing::Point(433, 42);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(221, 67);
			this->label2->TabIndex = 5;
			this->label2->Text = L"BILLING";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::Label2_Click);
			// 
			// button1
			// 
			this->button1->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->button1->Location = System::Drawing::Point(26, 184);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(239, 45);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Supplier Info";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label3->Location = System::Drawing::Point(57, 138);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(167, 25);
			this->label3->TabIndex = 8;
			this->label3->Text = L"WHOLESALER ";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::Label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label4->Location = System::Drawing::Point(103, 266);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 29);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Stock";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::Label4_Click);
			// 
			// button3
			// 
			this->button3->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->button3->Location = System::Drawing::Point(178, 333);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(87, 32);
			this->button3->TabIndex = 10;
			this->button3->Text = L"order";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->ForeColor = System::Drawing::Color::SlateBlue;
			this->button4->Location = System::Drawing::Point(24, 333);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(84, 32);
			this->button4->TabIndex = 11;
			this->button4->Text = L"info";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(754, 473);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->splitter2);
			this->Controls->Add(this->splitter1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"DashBoard";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Splitter2_SplitterMoved(System::Object^ sender, System::Windows::Forms::SplitterEventArgs^ e) {
	}
	private: System::Void Splitter3_SplitterMoved(System::Object^ sender, System::Windows::Forms::SplitterEventArgs^ e) {
	}
private: System::Void Label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
