#pragma once
#include "Task3.h"
#define PI 3.14159265
namespace Lab9 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Task2
	/// </summary>
	public ref class Task2 : public System::Windows::Forms::Form
	{
	public:
		Task2(void)
		{
			InitializeComponent();

			task3 = gcnew(Task3);
			task3->Owner = this;
			task3->Hide();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Task2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Task3^ task3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ A;
	private: System::Windows::Forms::TextBox^ B;
	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::TextBox^ H;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ T_min;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ T_max;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ color1;
	private: System::Windows::Forms::Button^ button3;
	protected:

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->A = (gcnew System::Windows::Forms::TextBox());
			this->B = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->H = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->T_min = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->T_max = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->color1 = (gcnew System::Windows::Forms::ComboBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->BeginInit();
			this->SuspendLayout();
			// 
			// chart
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart->ChartAreas->Add(chartArea2);
			this->chart->Location = System::Drawing::Point(12, 114);
			this->chart->Name = L"chart";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->LabelBorderWidth = 5;
			series2->Name = L"Series1";
			this->chart->Series->Add(series2);
			this->chart->Size = System::Drawing::Size(770, 383);
			this->chart->TabIndex = 0;
			this->chart->Text = L"chart1";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(12, 503);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(158, 73);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Предыдущее задание";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Task2::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(633, 514);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(149, 73);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Следующее задание";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Task2::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(24, 25);
			this->label1->TabIndex = 5;
			this->label1->Text = L"a";
			// 
			// A
			// 
			this->A->Location = System::Drawing::Point(42, 15);
			this->A->Name = L"A";
			this->A->Size = System::Drawing::Size(45, 20);
			this->A->TabIndex = 6;
			// 
			// B
			// 
			this->B->Location = System::Drawing::Point(146, 16);
			this->B->Name = L"B";
			this->B->Size = System::Drawing::Size(45, 20);
			this->B->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(116, 10);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(24, 25);
			this->label2->TabIndex = 7;
			this->label2->Text = L"b";
			// 
			// H
			// 
			this->H->Location = System::Drawing::Point(266, 15);
			this->H->Name = L"H";
			this->H->Size = System::Drawing::Size(45, 20);
			this->H->TabIndex = 12;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(211, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 25);
			this->label4->TabIndex = 11;
			this->label4->Text = L"шаг";
			// 
			// T_min
			// 
			this->T_min->Location = System::Drawing::Point(199, 75);
			this->T_min->Name = L"T_min";
			this->T_min->Size = System::Drawing::Size(50, 20);
			this->T_min->TabIndex = 14;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(12, 69);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(181, 25);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Диапозон (град.)";
			// 
			// T_max
			// 
			this->T_max->Location = System::Drawing::Point(281, 74);
			this->T_max->Name = L"T_max";
			this->T_max->Size = System::Drawing::Size(53, 20);
			this->T_max->TabIndex = 16;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(256, 69);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(19, 25);
			this->label6->TabIndex = 15;
			this->label6->Text = L"-";
			// 
			// color1
			// 
			this->color1->FormattingEnabled = true;
			this->color1->Location = System::Drawing::Point(365, 75);
			this->color1->Name = L"color1";
			this->color1->Size = System::Drawing::Size(111, 21);
			this->color1->TabIndex = 17;
			this->color1->Items->AddRange(Enum::GetNames(KnownColor::typeid));
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(650, 22);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(132, 73);
			this->button3->TabIndex = 18;
			this->button3->Text = L"Построить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Task2::button3_Click);
			// 
			// Task2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(794, 599);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->color1);
			this->Controls->Add(this->T_max);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->T_min);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->H);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->B);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->A);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->chart);
			this->Name = L"Task2";
			this->Text = L"Task2";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Task2::Task2_FormClosed);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Hide();
		this->Owner->Show();
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Hide();
		task3->Show();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->chart->Series[0]->Points->Clear();

		double a = 1;
		double b = 1;
		double angle;
		double h = 0.1;
		double x, y;
		double t_min = 0;
		double t_max = 180;

		if ((T_min->Text != "" && T_max->Text != "") && (Convert::ToDouble(T_min->Text) >= 0) && (Convert::ToDouble(T_max->Text) <= 360))
		{
			t_min = Convert::ToDouble(T_min->Text);
			t_max = Convert::ToDouble(T_max->Text);
		}

		if (A->Text != "")
			a = Convert::ToDouble(A->Text);
		if (B->Text != "")
			b = Convert::ToDouble(B->Text);
		if (H->Text != "")
			h = Convert::ToDouble(H->Text);

		angle = t_min;
		while (angle <= t_max)
		{
			double t = angle * PI / 180;
			x = (a + b) * (Math::Cos(t)) - a * (Math::Cos((a + b) / a * t));
			y = (a + b) * (Math::Sin(t)) - a * (Math::Sin((a + b) / a * t));
			this->chart->Series[0]->Color = System::Drawing::Color::FromName(color1->Text);
			this->chart->Series[0]->Points->AddXY(x, y);
			angle += h;
		}

	}

	private: System::Void Task2_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) 
	{
		Application::Exit();
	}
};
}
