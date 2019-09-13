#pragma once
#include "stdio.h"
#include <iostream>
#include "stdlib.h"
#include <sstream>
#include "Header.h"

namespace Matrix {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::DataGridView^  dataGridView3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  button10;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::LightSteelBlue;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Location = System::Drawing::Point(10, 109);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(264, 265);
			this->dataGridView1->TabIndex = 0;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->AllowUserToResizeRows = false;
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView2->BackgroundColor = System::Drawing::Color::LightSteelBlue;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->ColumnHeadersVisible = false;
			this->dataGridView2->Location = System::Drawing::Point(409, 109);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(265, 265);
			this->dataGridView2->TabIndex = 1;
			// 
			// dataGridView3
			// 
			this->dataGridView3->AllowUserToAddRows = false;
			this->dataGridView3->AllowUserToDeleteRows = false;
			this->dataGridView3->AllowUserToResizeColumns = false;
			this->dataGridView3->AllowUserToResizeRows = false;
			this->dataGridView3->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView3->BackgroundColor = System::Drawing::Color::LightSteelBlue;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->ColumnHeadersVisible = false;
			this->dataGridView3->Location = System::Drawing::Point(798, 109);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->ReadOnly = true;
			this->dataGridView3->RowHeadersVisible = false;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(265, 265);
			this->dataGridView3->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(186, 34);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 43);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Задать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(318, 109);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(52, 61);
			this->button2->TabIndex = 4;
			this->button2->Text = L"+";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(318, 207);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(52, 61);
			this->button3->TabIndex = 5;
			this->button3->Text = L"-";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(312, 307);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(57, 67);
			this->button4->TabIndex = 6;
			this->button4->Text = L"*";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(10, 43);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(56, 25);
			this->textBox1->TabIndex = 7;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(102, 43);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(53, 25);
			this->textBox2->TabIndex = 8;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(10, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 21);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Строки";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(102, 20);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 21);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Столбцы";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(499, 20);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(72, 21);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Столбцы";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(405, 20);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(61, 21);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Строки";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(409, 43);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(56, 25);
			this->textBox3->TabIndex = 14;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(501, 43);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(56, 25);
			this->textBox4->TabIndex = 15;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(584, 34);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(90, 43);
			this->button5->TabIndex = 16;
			this->button5->Text = L"Задать";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(10, 425);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(88, 25);
			this->textBox5->TabIndex = 17;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(408, 425);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(88, 25);
			this->textBox6->TabIndex = 18;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(130, 417);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(144, 39);
			this->button6->TabIndex = 19;
			this->button6->Text = L"Умножить на число";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(530, 417);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(144, 39);
			this->button7->TabIndex = 20;
			this->button7->Text = L"Умножить на число";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Heavy", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(863, 73);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(136, 30);
			this->label3->TabIndex = 21;
			this->label3->Text = L"РЕЗУЛЬТАТ";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(10, 479);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(262, 73);
			this->button8->TabIndex = 22;
			this->button8->Text = L"Транспонировать";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(408, 479);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(262, 73);
			this->button9->TabIndex = 23;
			this->button9->Text = L"Транспонировать";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(10, 393);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(228, 21);
			this->label6->TabIndex = 24;
			this->label6->Text = L"Операции для одной матрицы";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(410, 393);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(228, 21);
			this->label7->TabIndex = 25;
			this->label7->Text = L"Операции для одной матрицы";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(260, 80);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(204, 21);
			this->label8->TabIndex = 26;
			this->label8->Text = L"Операции для двух матриц";
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(798, 417);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(265, 68);
			this->button10->TabIndex = 27;
			this->button10->Text = L"Использовать матрицу  для вычислений";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AliceBlue;
			this->ClientSize = System::Drawing::Size(1099, 603);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Demi", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	int n1 = Convert::ToInt32(textBox1->Text);
	int m1 = Convert::ToInt32(textBox2->Text);
	dataGridView1->RowCount = n1;
	dataGridView1->ColumnCount = m1;
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	int n2 = Convert::ToInt32(textBox3->Text);
	int m2 = Convert::ToInt32(textBox4->Text);
	dataGridView2->RowCount = n2;
	dataGridView2->ColumnCount = m2;
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^numberS = System::Convert::ToString(textBox1->Text);
	
	int n1 = Convert::ToInt32(textBox1->Text);
	numberS = System::Convert::ToString(textBox1->Text);
	int r = numberS->Length;
	int m1 = Convert::ToInt32(textBox2->Text);
	numberS = System::Convert::ToString(textBox2->Text);
	r = numberS->Length;


	int number = Convert::ToInt32(textBox5->Text);
	dataGridView1->RowCount = n1;
	dataGridView1->ColumnCount = m1;
	dataGridView3->RowCount = n1;
	dataGridView3->ColumnCount = m1;
	int** B = (int**)malloc(n1 * sizeof(int));
	for (int i = 0; i < n1; i++) {
		B[i] = (int*)malloc(m1 * sizeof(int));
		for (int k = 0; k < m1; k++) {
			B[i][k] = Convert::ToInt32(dataGridView1[i, k]->Value);	
			B[i][k] *= number;
		}
	}
	for (int i = 0; i < n1; i++) {
		for (int k = 0; k < m1; k++) {
			dataGridView3[i, k]->Value = B[i][k];
		}
	}
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	int n2 = Convert::ToInt32(textBox3->Text);
	int m2 = Convert::ToInt32(textBox4->Text);
	int number = Convert::ToInt32(textBox6->Text);
	dataGridView2->RowCount = n2;
	dataGridView2->ColumnCount = m2;
	dataGridView3->RowCount = n2;
	dataGridView3->ColumnCount = m2;
	int** C = (int**)malloc(n2 * sizeof(int));
	for (int i = 0; i < n2; i++) {
		C[i] = (int*)malloc(m2 * sizeof(int));
		for (int k = 0; k < n2; k++) {
			C[i][k] = Convert::ToInt32(dataGridView2[i, k]->Value);
			C[i][k] *= number;
		}
	}
	for (int i = 0; i < n2; i++) {
		for (int k = 0; k < n2; k++) {
			dataGridView3[i, k]->Value = C[i][k];
		}
	}
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	int n1 = Convert::ToInt32(textBox1->Text);
	int m1 = Convert::ToInt32(textBox2->Text);
	dataGridView1->RowCount = n1;
	dataGridView1->ColumnCount = m1;
	dataGridView3->RowCount = n1;
	dataGridView3->ColumnCount = m1;
	int** B = (int**)malloc(n1 * sizeof(int));
	for (int i = 0; i < n1; i++) {
		B[i] = (int*)malloc(m1 * sizeof(int));
		for (int k = 0; k < m1; k++) {
			B[i][k] = Convert::ToInt32(dataGridView1[i, k]->Value);
		}
	}
	for (int i = 0; i < n1; i++) {
		for (int j = 0; j < i; j++) {
			int tn = B[i][j];
			B[i][j] = B[j][i];
			B[j][i] = tn;
		}
	}
	for (int i = 0; i < n1; i++) {
		for (int k = 0; k < n1; k++) {
			dataGridView3[i, k]->Value = B[i][k];
		}
	}
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	int n2 = Convert::ToInt32(textBox3->Text);
	int m2 = Convert::ToInt32(textBox4->Text);
	dataGridView2->RowCount = n2;
	dataGridView2->ColumnCount = m2;
	dataGridView3->RowCount = n2;
	dataGridView3->ColumnCount = m2;
	int** B = (int**)malloc(n2 * sizeof(int));
	for (int i = 0; i < n2; i++) {
		B[i] = (int*)malloc(m2 * sizeof(int));
		for (int k = 0; k < m2; k++) {
			B[i][k] = Convert::ToInt32(dataGridView2[i, k]->Value);
		}
	}
	for (int i = 0; i < n2; i++) {
		for (int j = 0; j < i; j++) {
			int tn = B[i][j];
			B[i][j] = B[j][i];
			B[j][i] = tn;
		}
	}
	for (int i = 0; i < n2; i++) {
		for (int k = 0; k < n2; k++) {
			dataGridView3[i, k]->Value = B[i][k];
		}
	}
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	int n1 = Convert::ToInt32(textBox1->Text);
	int m1 = Convert::ToInt32(textBox2->Text);
	dataGridView1->RowCount = n1;
	dataGridView1->ColumnCount = m1;
	int n2 = Convert::ToInt32(textBox3->Text);
	int m2 = Convert::ToInt32(textBox4->Text);
	dataGridView2->RowCount = n2;
	dataGridView2->ColumnCount = m2;
	dataGridView3->RowCount = n2;
	dataGridView3->ColumnCount = m2;
	int** B = (int**)malloc(n1 * sizeof(int));
	for (int i = 0; i < n1; i++) {
		B[i] = (int*)malloc(m1 * sizeof(int));
		for (int k = 0; k < m1; k++) {
			B[i][k] = Convert::ToInt32(dataGridView1[i, k]->Value);
		}
	}
	int** C = (int**)malloc(n2 * sizeof(int));
	for (int i = 0; i < n2; i++) {
		C[i] = (int*)malloc(m2 * sizeof(int));
		for (int k = 0; k < n2; k++) {
			C[i][k] = Convert::ToInt32(dataGridView2[i, k]->Value);
		}
	}
	int** D = (int**)malloc(n2 * sizeof(int));
	/*for (int i = 0; i < n1; i++) {
		D[i] = (int*)malloc(m1 * sizeof(int));
		for (int k = 0; k < m1; k++) {
			D[i][k] = C[i][k] + B[i][k];
		}
	}*/
	plusM(B, C,  n1, m1);
	for (int i = 0; i < n2; i++) {
		for (int k = 0; k < n2; k++) {
			dataGridView3[i, k]->Value = D[i][k];
		}
	}
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	int n1 = Convert::ToInt32(textBox1->Text);
	int m1 = Convert::ToInt32(textBox2->Text);
	dataGridView1->RowCount = n1;
	dataGridView1->ColumnCount = m1;
	int n2 = Convert::ToInt32(textBox3->Text);
	int m2 = Convert::ToInt32(textBox4->Text);
	dataGridView2->RowCount = n2;
	dataGridView2->ColumnCount = m2;
	dataGridView3->RowCount = n2;
	dataGridView3->ColumnCount = m2;
	int** B = (int**)malloc(n1 * sizeof(int));
	for (int i = 0; i < n1; i++) {
		B[i] = (int*)malloc(m1 * sizeof(int));
		for (int k = 0; k < m1; k++) {
			B[i][k] = Convert::ToInt32(dataGridView1[i, k]->Value);
		}
	}
	int** C = (int**)malloc(n2 * sizeof(int));
	for (int i = 0; i < n2; i++) {
		C[i] = (int*)malloc(m2 * sizeof(int));
		for (int k = 0; k < n2; k++) {
			C[i][k] = Convert::ToInt32(dataGridView2[i, k]->Value);
		}
	}
	int** D = (int**)malloc(n2 * sizeof(int));
	/*
	for (int i = 0; i < n1; i++) {
		D[i] = (int*)malloc(m1 * sizeof(int));
		for (int k = 0; k < m1; k++) {
			D[i][k] = C[i][k] - B[i][k];
		}
	}*/
	minusM(B, C, n1, m1);
	for (int i = 0; i < n2; i++) {
		for (int k = 0; k < n2; k++) {
			dataGridView3[i, k]->Value = D[i][k];
		}
	}
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {

}
};
}
