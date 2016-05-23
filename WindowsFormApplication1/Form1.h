#pragma once

namespace WindowsFormApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::GroupBox^  groupBox1;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;


	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(260, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"DATA";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->dateTimePicker1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->groupBox1->Location = System::Drawing::Point(17, 54);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(255, 195);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"USTAW BUDZIK";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->dateTimePicker1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->dateTimePicker1->Location = System::Drawing::Point(7, 67);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(242, 21);
			this->dateTimePicker1->TabIndex = 6;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &Form1::dateTimePicker1_ValueChanged);
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(7, 119);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(242, 15);
			this->label4->TabIndex = 5;
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(9, 94);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(156, 15);
			this->label3->TabIndex = 4;
			this->label3->Text = L"DO ALARMU ZOSTA£O:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(116, 15);
			this->label2->TabIndex = 3;
			this->label2->Text = L"PODAJ GODZINÊ";
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(144, 149);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(105, 40);
			this->button2->TabIndex = 1;
			this->button2->Text = L"WY£¥CZ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(7, 149);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 40);
			this->button1->TabIndex = 0;
			this->button1->Text = L"USTAW";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"ALARM CLOCK";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		public:
			DateTime data_uzytkownika;
			System::Media::SoundPlayer ^simpleSound = gcnew System::Media::SoundPlayer("c:\\windows\\media\\Alarm01.wav");
			bool zmienna = false;
			bool zmienna2 = true;

	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			label1->Text = DateTime::Now.ToString("dd-MMM-yyyy hh:mm:ss tt");
			if (DateTime::Now.Hour == data_uzytkownika.Hour&&DateTime::Now.Minute == data_uzytkownika.Minute&&DateTime::Now.Second == data_uzytkownika.Second) {
				simpleSound->PlayLooping();
				label4->Text = "POBUDKA !!!!!!!!!!!!!!!!!!!!!!!!!!!";
				zmienna2 = false;
			}
			else {
				try {
					if (zmienna) {
						if(DateTime::Now > data_uzytkownika && zmienna2)
						label4->Text = ((23-(DateTime::Now.Hour - data_uzytkownika.Hour)).ToString() + "H " + (59-(DateTime::Now.Minute - data_uzytkownika.Minute)).ToString() + "M " + (60-(DateTime::Now.Second - data_uzytkownika.Second)).ToString() + "S");
						else if(zmienna2){
							label4->Text= (((DateTime::Now.Hour - data_uzytkownika.Hour)).ToString() + "H " + ((DateTime::Now.Minute - data_uzytkownika.Minute)).ToString() + "M " + ((DateTime::Now.Second - data_uzytkownika.Second)).ToString() + "S");
						}
					}
				}
				catch (Exception^ ex) {
					MessageBox::Show("PROBLEM Z WYBRANA DATA!!");

				}
			}
		
			
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		button2->Enabled = false;
		button1->Enabled = true;
		simpleSound->Stop();
		zmienna = false;
		label4->Text = "";
		
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		button2->Enabled = true;
		button1->Enabled = false;
		data_uzytkownika = dateTimePicker1->Value;	
		zmienna = true;
		zmienna2 = true;
}
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) { 	
	dateTimePicker1->ShowUpDown = true;
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}

