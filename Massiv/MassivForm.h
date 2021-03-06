
#pragma once
#include <msclr/marshal_cppstd.h>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <ctime>
namespace Massiv {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	/// <summary>
	/// Summary for MassivForm
	/// </summary>

	int maxDiap, minDiap, Num;
	vector <int> Array;
	int rb;


	public ref class MassivForm : public System::Windows::Forms::Form
	{
	public:
		MassivForm(void)
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
		~MassivForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  tbMaxDiap;

	private: System::Windows::Forms::TextBox^  tbMinDiap;

	private: System::Windows::Forms::TextBox^  tbNum;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  tbArr;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::RadioButton^  radioButton5;
	private: System::Windows::Forms::RadioButton^  radioButton6;
	private: System::Windows::Forms::RadioButton^  radioButton7;
	private: System::Windows::Forms::RadioButton^  radioButton8;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  tbResult;


	private: System::Windows::Forms::Button^  GenerateArr;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  Complete;

	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Button^  CloseBut;



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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->tbMaxDiap = (gcnew System::Windows::Forms::TextBox());
			this->tbMinDiap = (gcnew System::Windows::Forms::TextBox());
			this->tbNum = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbArr = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbResult = (gcnew System::Windows::Forms::TextBox());
			this->GenerateArr = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Complete = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->CloseBut = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->tbMaxDiap);
			this->groupBox1->Controls->Add(this->tbMinDiap);
			this->groupBox1->Controls->Add(this->tbNum);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->ForeColor = System::Drawing::SystemColors::Highlight;
			this->groupBox1->Location = System::Drawing::Point(12, 0);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(405, 118);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"�������� ������";
			// 
			// tbMaxDiap
			// 
			this->tbMaxDiap->Location = System::Drawing::Point(240, 87);
			this->tbMaxDiap->Name = L"tbMaxDiap";
			this->tbMaxDiap->Size = System::Drawing::Size(100, 20);
			this->tbMaxDiap->TabIndex = 5;
			this->tbMaxDiap->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MassivForm::BlockLetters);
			// 
			// tbMinDiap
			// 
			this->tbMinDiap->Location = System::Drawing::Point(240, 57);
			this->tbMinDiap->Name = L"tbMinDiap";
			this->tbMinDiap->Size = System::Drawing::Size(100, 20);
			this->tbMinDiap->TabIndex = 4;
			this->tbMinDiap->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MassivForm::BlockLetters);
			// 
			// tbNum
			// 
			this->tbNum->Location = System::Drawing::Point(240, 27);
			this->tbNum->Name = L"tbNum";
			this->tbNum->Size = System::Drawing::Size(100, 20);
			this->tbNum->TabIndex = 3;
			this->tbNum->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MassivForm::BlockLetters);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label3->Location = System::Drawing::Point(20, 90);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(194, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"������������ �������� ���������:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label2->Location = System::Drawing::Point(20, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(188, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"����������� �������� ���������:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label1->Location = System::Drawing::Point(20, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(174, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"���������� ��������� �������:";
			this->label1->Click += gcnew System::EventHandler(this, &MassivForm::label1_Click);
			// 
			// tbArr
			// 
			this->tbArr->Location = System::Drawing::Point(12, 159);
			this->tbArr->Name = L"tbArr";
			this->tbArr->Size = System::Drawing::Size(405, 20);
			this->tbArr->TabIndex = 6;
			this->tbArr->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MassivForm::tbArr_KeyPress);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label4->Location = System::Drawing::Point(9, 142);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(99, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"�������� ������";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton5);
			this->groupBox2->Controls->Add(this->radioButton6);
			this->groupBox2->Controls->Add(this->radioButton7);
			this->groupBox2->Controls->Add(this->radioButton8);
			this->groupBox2->Controls->Add(this->radioButton4);
			this->groupBox2->Controls->Add(this->radioButton3);
			this->groupBox2->Controls->Add(this->radioButton2);
			this->groupBox2->Controls->Add(this->radioButton1);
			this->groupBox2->ForeColor = System::Drawing::SystemColors::Highlight;
			this->groupBox2->Location = System::Drawing::Point(12, 202);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(405, 118);
			this->groupBox2->TabIndex = 6;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"�������� � ��������";
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->ForeColor = System::Drawing::SystemColors::Desktop;
			this->radioButton5->Location = System::Drawing::Point(199, 85);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(154, 17);
			this->radioButton5->TabIndex = 7;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"���������� �� ��������";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &MassivForm::radioButton5_CheckedChanged);
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->ForeColor = System::Drawing::SystemColors::Desktop;
			this->radioButton6->Location = System::Drawing::Point(199, 65);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(170, 17);
			this->radioButton6->TabIndex = 6;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"���������� �� �����������";
			this->radioButton6->UseVisualStyleBackColor = true;
			this->radioButton6->CheckedChanged += gcnew System::EventHandler(this, &MassivForm::radioButton6_CheckedChanged);
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->ForeColor = System::Drawing::SystemColors::Desktop;
			this->radioButton7->Location = System::Drawing::Point(199, 45);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(129, 17);
			this->radioButton7->TabIndex = 5;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"�������� ��������";
			this->radioButton7->UseVisualStyleBackColor = true;
			this->radioButton7->CheckedChanged += gcnew System::EventHandler(this, &MassivForm::radioButton7_CheckedChanged);
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->ForeColor = System::Drawing::SystemColors::Desktop;
			this->radioButton8->Location = System::Drawing::Point(199, 25);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(118, 17);
			this->radioButton8->TabIndex = 4;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"׸���� ��������";
			this->radioButton8->UseVisualStyleBackColor = true;
			this->radioButton8->CheckedChanged += gcnew System::EventHandler(this, &MassivForm::radioButton8_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->ForeColor = System::Drawing::SystemColors::Desktop;
			this->radioButton4->Location = System::Drawing::Point(5, 85);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(150, 17);
			this->radioButton4->TabIndex = 3;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"������������ �������";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &MassivForm::radioButton4_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->ForeColor = System::Drawing::SystemColors::Desktop;
			this->radioButton3->Location = System::Drawing::Point(5, 65);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(144, 17);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"����������� �������";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MassivForm::radioButton3_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->ForeColor = System::Drawing::SystemColors::Desktop;
			this->radioButton2->Location = System::Drawing::Point(5, 45);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(118, 17);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"������� ��������";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MassivForm::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->ForeColor = System::Drawing::SystemColors::Desktop;
			this->radioButton1->Location = System::Drawing::Point(5, 25);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(117, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"����� ���������";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MassivForm::radioButton1_CheckedChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label5->Location = System::Drawing::Point(9, 334);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(118, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"���������� ��������";
			// 
			// tbResult
			// 
			this->tbResult->BackColor = System::Drawing::Color::White;
			this->tbResult->Location = System::Drawing::Point(12, 351);
			this->tbResult->Name = L"tbResult";
			this->tbResult->ReadOnly = true;
			this->tbResult->Size = System::Drawing::Size(405, 20);
			this->tbResult->TabIndex = 8;
			// 
			// GenerateArr
			// 
			this->GenerateArr->Location = System::Drawing::Point(423, 12);
			this->GenerateArr->Name = L"GenerateArr";
			this->GenerateArr->Size = System::Drawing::Size(127, 23);
			this->GenerateArr->TabIndex = 9;
			this->GenerateArr->Text = L"��������� �������";
			this->GenerateArr->UseVisualStyleBackColor = true;
			this->GenerateArr->Click += gcnew System::EventHandler(this, &MassivForm::GenerateArr_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(423, 95);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(127, 23);
			this->button2->TabIndex = 10;
			this->button2->Text = L"���� �� �����";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// Complete
			// 
			this->Complete->Location = System::Drawing::Point(423, 211);
			this->Complete->Name = L"Complete";
			this->Complete->Size = System::Drawing::Size(127, 23);
			this->Complete->TabIndex = 11;
			this->Complete->Text = L"���������";
			this->Complete->UseVisualStyleBackColor = true;
			this->Complete->Click += gcnew System::EventHandler(this, &MassivForm::Complete_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(423, 297);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(127, 23);
			this->button4->TabIndex = 12;
			this->button4->Text = L"��������� � ����";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(423, 57);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(127, 20);
			this->textBox6->TabIndex = 6;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label6->Location = System::Drawing::Point(420, 40);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(100, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"��� ����� �����:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label7->Location = System::Drawing::Point(420, 246);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(108, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"��� ����� ������:";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(423, 263);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(127, 20);
			this->textBox7->TabIndex = 14;
			// 
			// CloseBut
			// 
			this->CloseBut->Location = System::Drawing::Point(423, 335);
			this->CloseBut->Name = L"CloseBut";
			this->CloseBut->Size = System::Drawing::Size(127, 23);
			this->CloseBut->TabIndex = 15;
			this->CloseBut->Text = L"�������";
			this->CloseBut->UseVisualStyleBackColor = true;
			this->CloseBut->Click += gcnew System::EventHandler(this, &MassivForm::Close_Click);
			// 
			// MassivForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(586, 401);
			this->Controls->Add(this->CloseBut);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->Complete);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->GenerateArr);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->tbResult);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->tbArr);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MassivForm";
			this->Text = L"MassivForm";
			this->Load += gcnew System::EventHandler(this, &MassivForm::MassivForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void MassivForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void GenerateArr_Click(System::Object^  sender, System::EventArgs^  e) {
	if (tbMinDiap->Text != "" && tbMaxDiap->Text != "" && tbNum->Text != "")
	{
		Array.clear();
		tbArr->Text = "";
		Num = Convert::ToInt16(tbNum->Text);
		minDiap = Convert::ToInt16(tbMinDiap->Text);
		maxDiap = Convert::ToInt16(tbMaxDiap->Text);
		srand(time(0));
		if (maxDiap > minDiap)
		{
			for (int i = 0; i < Num; i++)
			{
				Array.push_back(rand() % (maxDiap - minDiap + 1) + minDiap);
			}
			for (int i = 0; i < Array.size(); i++)
			{
				tbArr->Text += Convert::ToString(Array.at(i)) + " ";
			}
		}
		else 
		{
			MessageBox::Show("������������ �������� ������ ���� ������ ������������");
		}
	}
}
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	rb = 1;
}
private: System::Void Complete_Click(System::Object^  sender, System::EventArgs^  e) {
	Array.clear();
	double oper;
	int min, max;
	int buf,k =0;
	int push;
	String^ buffer = tbArr->Text;
	string b = msclr::interop::marshal_as< std::string >(tbArr->Text);
	istringstream iss(b);
	while (iss >> push)
	{
		if (k == 0)
		{
			max = min = push;
		}
		if (max < push)
		{
			max = push;
		}
		if (min > push)
		{
			min = push;
		}
		Array.push_back(push);
		k++;
	}
	switch (rb)
	{
	case 1:
		oper = 0;
		for (int i = 0; i < Array.size(); i++)
		{
			oper += Array.at(i);
		}
		tbResult->Text = "����� ���������: "+ oper.ToString();
		break;
	case 2:
		for (int i = 0; i < Array.size(); i++)
		{
			oper += Array.at(i);
		}
		tbResult->Text = "������� ��������: " + (oper/Array.size()).ToString("F3");
		break;
	case 3:
		for (int i = 0; i < Array.size(); i++)
		{
			if (min > Array[i])
			{
				min = Array[i];
			}
		}
		tbResult->Text = "����������� �������: " + min.ToString();
		break;
	case 4:
		for (int i = 0; i < Array.size(); i++)
		{
			if (max < Array[i])
			{
				max = Array[i];
			}
		}
		tbResult->Text = "������������ �������: " + max.ToString();
		break;
	case 5:
		tbResult->Text = "׸���� ��������: ";
		for (int i = 0; i < Array.size(); i++)
		{
			if (Array[i] % 2 == 0)
				tbResult->Text += Array[i] + " ";
		}
		break;
	case 6:
		tbResult->Text = "�������� ��������: ";
		for (int i = 0; i < Array.size(); i++)
		{
			if (Array[i] % 2 != 0)
				tbResult->Text += Array[i] + " ";
		}
		break;
	case 7:
		tbResult->Text = "���������� �� �����������: ";
		for (int i = 0; i < Array.size()-1; i++)
		{
			for (int j = i+1; j < Array.size(); j++)
			{
				if (Array[i] > Array[j])
				{
					buf = Array[j];
					Array[j] = Array[i];
					Array[i] = buf;
				}
			}
		}
		for (int i = 0; i < Array.size(); i++)
		{
			tbResult->Text += Convert::ToString(Array.at(i)) + " ";
		}
		break;
	case 8:
		tbResult->Text = "���������� �� ��������: ";
		for (int i = 0; i < Array.size() - 1; i++)
		{
			for (int j = i + 1; j < Array.size(); j++)
			{
				if (Array[i] < Array[j])
				{
					buf = Array[i];
					Array[i] = Array[j];
					Array[j] = buf;
				}
			}
		}
		for (int i = 0; i < Array.size(); i++)
		{
			tbResult->Text += Convert::ToString(Array.at(i)) + " ";
		}
		break;

	}
}
private: System::Void Close_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	rb = 2;
}
private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	rb = 3;
}
private: System::Void radioButton4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	rb = 4;
}
private: System::Void radioButton8_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	rb = 5;
}
private: System::Void radioButton7_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	rb = 6;
}
private: System::Void radioButton6_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	rb = 7;
}
private: System::Void radioButton5_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	rb = 8;
}
	private: System::Void BlockLetters(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		TextBox^ textbox = (TextBox^)sender;
		if (!Char::IsDigit(e->KeyChar))
		{
			// ������ �� ���� ����� ������ ����� ������.
			if (e->KeyChar != '-' || textbox->Text->IndexOf('-') != -1)
				// ���� ������� ������� �� �������� �������� BackSpace.
				if (e->KeyChar != (char)Keys::Back)
					e->Handled = true;          // ������ �����
		}
	}
private: System::Void tbArr_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (!Char::IsDigit(e->KeyChar))
	{
		// ������ �� ���� ����� ������ ����� ������.
		if (e->KeyChar != '-')
			// ���� ������� ������� �� �������� �������� BackSpace.
			if (e->KeyChar != (char)Keys::Back)
				if(e->KeyChar != (char)Keys::Space)
				e->Handled = true;          // ������ �����
	}
}
};
}
