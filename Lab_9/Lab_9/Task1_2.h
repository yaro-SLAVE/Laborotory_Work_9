#pragma once
#include "Task2.h"
#include <cmath>
namespace Lab9 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Task1_2
	/// </summary>
	public ref class Task1_2 : public System::Windows::Forms::Form
	{
	public:
		Task1_2(void)
		{
			InitializeComponent();

			task2 = gcnew(Task2);
			task2->Owner = this;
			task2->Hide();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Task1_2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Task2^ task2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ X_min1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ X_max1;
	private: System::Windows::Forms::ComboBox^ color1;
	private: System::Windows::Forms::ComboBox^ color2;



	private: System::Windows::Forms::TextBox^ X_max2;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ X_min2;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ color3;

	private: System::Windows::Forms::TextBox^ X_max3;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ X_min3;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ color4;

	private: System::Windows::Forms::TextBox^ X_max4;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ X_min4;

	private: System::Windows::Forms::Label^ label8;

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->X_min1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->X_max1 = (gcnew System::Windows::Forms::TextBox());
			this->color1 = (gcnew System::Windows::Forms::ComboBox());
			this->color2 = (gcnew System::Windows::Forms::ComboBox());
			this->X_max2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->X_min2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->color3 = (gcnew System::Windows::Forms::ComboBox());
			this->X_max3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->X_min3 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->color4 = (gcnew System::Windows::Forms::ComboBox());
			this->X_max4 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->X_min4 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->BeginInit();
			this->SuspendLayout();
			// 
			// chart
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart->ChartAreas->Add(chartArea1);
			this->chart->Location = System::Drawing::Point(37, 161);
			this->chart->Name = L"chart";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->LabelBorderWidth = 4;
			series1->Name = L"Series1";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->LabelBorderWidth = 4;
			series2->Name = L"Series2";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->LabelBorderWidth = 4;
			series3->Name = L"Series3";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series4->LabelBorderWidth = 4;
			series4->Name = L"Series4";
			this->chart->Series->Add(series1);
			this->chart->Series->Add(series2);
			this->chart->Series->Add(series3);
			this->chart->Series->Add(series4);
			this->chart->Size = System::Drawing::Size(860, 332);
			this->chart->TabIndex = 0;
			this->chart->Text = L"chart1";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(910, 506);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(149, 73);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Следующее задание";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Task1_2::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(12, 506);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(158, 73);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Предыдущее задание";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Task1_2::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(927, 270);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(132, 73);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Построить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Task1_2::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(32, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 25);
			this->label1->TabIndex = 4;
			this->label1->Text = L"ln(x)";
			// 
			// X_min1
			// 
			this->X_min1->Location = System::Drawing::Point(92, 30);
			this->X_min1->Name = L"X_min1";
			this->X_min1->Size = System::Drawing::Size(70, 20);
			this->X_min1->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(168, 25);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(19, 25);
			this->label2->TabIndex = 6;
			this->label2->Text = L"-";
			// 
			// X_max1
			// 
			this->X_max1->Location = System::Drawing::Point(193, 30);
			this->X_max1->Name = L"X_max1";
			this->X_max1->Size = System::Drawing::Size(70, 20);
			this->X_max1->TabIndex = 7;
			// 
			// color1
			// 
			this->color1->FormattingEnabled = true;
			this->color1->Location = System::Drawing::Point(281, 30);
			this->color1->Name = L"color1";
			this->color1->Size = System::Drawing::Size(89, 21);
			this->color1->TabIndex = 8;
			this->color1->Items->AddRange(Enum::GetNames(KnownColor::typeid));
			// 
			// color2
			// 
			this->color2->FormattingEnabled = true;
			this->color2->Location = System::Drawing::Point(281, 86);
			this->color2->Name = L"color2";
			this->color2->Size = System::Drawing::Size(89, 21);
			this->color2->TabIndex = 13;
			this->color2->Items->AddRange(Enum::GetNames(KnownColor::typeid));
			// 
			// X_max2
			// 
			this->X_max2->Location = System::Drawing::Point(193, 86);
			this->X_max2->Name = L"X_max2";
			this->X_max2->Size = System::Drawing::Size(70, 20);
			this->X_max2->TabIndex = 12;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(168, 81);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(19, 25);
			this->label3->TabIndex = 11;
			this->label3->Text = L"-";
			// 
			// X_min2
			// 
			this->X_min2->Location = System::Drawing::Point(92, 86);
			this->X_min2->Name = L"X_min2";
			this->X_min2->Size = System::Drawing::Size(70, 20);
			this->X_min2->TabIndex = 10;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(20, 80);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(66, 25);
			this->label4->TabIndex = 9;
			this->label4->Text = L"2ln(x)";
			// 
			// color3
			// 
			this->color3->FormattingEnabled = true;
			this->color3->Location = System::Drawing::Point(755, 30);
			this->color3->Name = L"color3";
			this->color3->Size = System::Drawing::Size(89, 21);
			this->color3->TabIndex = 18;
			this->color3->Items->AddRange(Enum::GetNames(KnownColor::typeid));
			// 
			// X_max3
			// 
			this->X_max3->Location = System::Drawing::Point(667, 30);
			this->X_max3->Name = L"X_max3";
			this->X_max3->Size = System::Drawing::Size(70, 20);
			this->X_max3->TabIndex = 17;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(642, 25);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(19, 25);
			this->label5->TabIndex = 16;
			this->label5->Text = L"-";
			// 
			// X_min3
			// 
			this->X_min3->Location = System::Drawing::Point(566, 30);
			this->X_min3->Name = L"X_min3";
			this->X_min3->Size = System::Drawing::Size(70, 20);
			this->X_min3->TabIndex = 15;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(484, 24);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(76, 25);
			this->label6->TabIndex = 14;
			this->label6->Text = L"ln(x^2)";
			// 
			// color4
			// 
			this->color4->FormattingEnabled = true;
			this->color4->Location = System::Drawing::Point(755, 85);
			this->color4->Name = L"color4";
			this->color4->Size = System::Drawing::Size(89, 21);
			this->color4->TabIndex = 23;
			this->color4->Items->AddRange(Enum::GetNames(KnownColor::typeid));
			// 
			// X_max4
			// 
			this->X_max4->Location = System::Drawing::Point(667, 85);
			this->X_max4->Name = L"X_max4";
			this->X_max4->Size = System::Drawing::Size(70, 20);
			this->X_max4->TabIndex = 22;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(642, 80);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(19, 25);
			this->label7->TabIndex = 21;
			this->label7->Text = L"-";
			// 
			// X_min4
			// 
			this->X_min4->Location = System::Drawing::Point(566, 85);
			this->X_min4->Name = L"X_min4";
			this->X_min4->Size = System::Drawing::Size(70, 20);
			this->X_min4->TabIndex = 20;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(470, 79);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(90, 25);
			this->label8->TabIndex = 19;
			this->label8->Text = L"(ln(x))^2";
			// 
			// Task1_2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1071, 591);
			this->Controls->Add(this->color4);
			this->Controls->Add(this->X_max4);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->X_min4);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->color3);
			this->Controls->Add(this->X_max3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->X_min3);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->color2);
			this->Controls->Add(this->X_max2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->X_min2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->color1);
			this->Controls->Add(this->X_max1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->X_min1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->chart);
			this->Name = L"Task1_2";
			this->Text = L"Task1_2";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Task1_2::Task1_2_FormClosed);
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
		task2->Show();
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		double x_min1 = 0.1;
		double x_max1 = 5;
		double x_min2 = 0.1;
		double x_max2 = 5;
		double x_min3 = 0.1;
		double x_max3 = 5;
		double x_min4 = 0.1;
		double x_max4 = 5;
		double h = 0.1;
		double x, y;
		this->chart->Series[0]->Points->Clear();
		this->chart->Series[1]->Points->Clear();
		this->chart->Series[2]->Points->Clear();
		this->chart->Series[3]->Points->Clear();

		if (X_min1->Text != "" && X_max1->Text != "")
		{
			x_min1 = Convert::ToDouble(X_min1->Text);
			x_max1 = Convert::ToDouble(X_max1->Text);
		}

		if (X_min2->Text != "" && X_max2->Text != "")
		{
			x_min2 = Convert::ToDouble(X_min2->Text);
			x_max2 = Convert::ToDouble(X_max2->Text);
		}

		if (X_min3->Text != "" && X_max3->Text != "")
		{
			x_min3 = Convert::ToDouble(X_min3->Text);
			x_max3 = Convert::ToDouble(X_max3->Text);
		}

		if (X_min4->Text != "" && X_max4->Text != "")
		{
			x_min4 = Convert::ToDouble(X_min4->Text);
			x_max4 = Convert::ToDouble(X_max4->Text);
		}

		x = x_min1;
		while (x <= x_max1)
		{
			y = Math::Log(x);
			this->chart->Series[0]->Color = System::Drawing::Color::FromName(color1->Text);
			this->chart->Series[0]->Points->AddXY(x, y);
			x += h;
		}

		x = x_min2;
		while (x <= x_max2)
		{
			y = (Math::Log(x)) * 2;
			this->chart->Series[1]->Color = System::Drawing::Color::FromName(color2->Text);
			this->chart->Series[1]->Points->AddXY(x, y);
			x += h;
		}

		x = x_min3;
		while (x <= x_max3)
		{
			y = Math::Log(pow(x, 2));
			this->chart->Series[2]->Color = System::Drawing::Color::FromName(color3->Text);
			this->chart->Series[2]->Points->AddXY(x, y);
			x += h;
		}

		x = x_min4;
		while (x <= x_max4)
		{
			y = pow((Math::Log(x)), 2);
			this->chart->Series[3]->Color = System::Drawing::Color::FromName(color4->Text);
			this->chart->Series[3]->Points->AddXY(x, y);
			x += h;
		}
	}
	private: System::Void Task1_2_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) 
	{
		Application::Exit();
	}
};
}
