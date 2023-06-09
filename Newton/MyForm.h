#pragma once
#include <string>
#include "Method.h"
namespace Newton {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(84, 66);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(50, 22);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(164, 66);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(50, 22);
			this->textBox2->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(81, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"gamma";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(177, 47);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"delta";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(252, 66);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(53, 22);
			this->textBox3->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(275, 47);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(10, 16);
			this->label3->TabIndex = 5;
			this->label3->Text = L"l";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(24, 200);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(223, 42);
			this->button1->TabIndex = 6;
			this->button1->Text = L"tg(h*l)=(gamma/delta)h";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(278, 200);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(248, 42);
			this->button2->TabIndex = 7;
			this->button2->Text = L"tg(h*l)=(gammma/delta)/h";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(108, 147);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(703, 22);
			this->textBox4->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(175, 119);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(318, 25);
			this->label4->TabIndex = 9;
			this->label4->Text = L"������ ���� ����������� �����";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1090, 671);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"������� ���������������� ��������� ������� �������";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double l = System::Convert::ToDouble(textBox3->Text);
		double delta = System::Convert::ToDouble(textBox2->Text);
		double gamma= System::Convert::ToDouble(textBox1->Text);
		String^ S="";
		for (int i=0; i<5;i++){
		double s = newton(f1,1.58+i*3.14,l,delta,gamma);
		S += System::Convert::ToString(s) + ";" + "  ";}
		textBox4->Text=gcnew String(S);
	}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	//double l = System::Convert::ToDouble(textBox3->Text);
	//double delta = System::Convert::ToDouble(textBox2->Text);
	//double gamma = System::Convert::ToDouble(textBox1->Text);
	double l = Convert::ToDouble(textBox3->Text);
	double delta = Convert::ToDouble(textBox2->Text);
	double gamma = Convert::ToDouble(textBox1->Text);
	String^ S = "";
	for (int i = 0; i < 5; i++) {
		double s = newton(f2, 1.58 + i * 3.14, l, delta, gamma);
		S += System::Convert::ToString(s) + ";" + "  ";
	}
	textBox4->Text = gcnew String(S);
}
};
}
