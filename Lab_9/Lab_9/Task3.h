#pragma once
#include "Task_4.h"

namespace Lab9 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Task3
	/// </summary>
	public ref class Task3 : public System::Windows::Forms::Form
	{
		double x0 = 151;
		double y0 = 151;
		double t = 0;
		double h = 0.02;
		double r = 50;
		double x = r * Math::Cos(t) + x0;
		double y = r * Math::Sin(t) + y0;
	private: System::Windows::Forms::Timer^ timer;
	private: System::Windows::Forms::Button^ button1;
		   bool isclicked = false;

	public:
		Task3(void)
		{
			InitializeComponent();

			task4 = gcnew(Task_4);
			task4->Owner = this;
			task4->Hide();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Task3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Task_4^ task4;
	private: System::Windows::Forms::Button^ button2;
	protected:

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::PictureBox^ field;
	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->field = (gcnew System::Windows::Forms::PictureBox());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->field))->BeginInit();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(12, 389);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(158, 73);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Предыдущее задание";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Task3::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(198, 389);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(114, 73);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Старт";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Task3::button3_Click);
			// 
			// field
			// 
			this->field->Location = System::Drawing::Point(104, 33);
			this->field->Name = L"field";
			this->field->Size = System::Drawing::Size(301, 301);
			this->field->TabIndex = 8;
			this->field->TabStop = false;
			// 
			// timer
			// 
			this->timer->Tick += gcnew System::EventHandler(this, &Task3::timer_Tick);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(352, 389);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(149, 73);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Следующее задание";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Task3::button1_Click);
			// 
			// Task3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(513, 474);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->field);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Name = L"Task3";
			this->Text = L"Task3";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Task3::Task3_FormClosed);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->field))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Hide();
		this->Owner->Show();
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (!isclicked)
		{
			button3->Text = "Стоп";

			this->timer->Enabled = true; 
			this->timer->Interval = 5;

			isclicked = true;
		}

		else
		{
			button3->Text = "Старт";

			this->timer->Enabled = false;

			isclicked = false;
		}
	}

	private: System::Void timer_Tick(System::Object^ sender, System::EventArgs^ e) 
	{
		Bitmap^ bmp;
		bmp = gcnew Bitmap(field->Width, field->Height);
		field->Image = bmp;
		Graphics^ g = Graphics::FromImage(field->Image);

		g->FillEllipse(Brushes::Red, x, y, 6, 6);
		
		t += h;
		x = r * Math::Cos(t) + x0;
		y = r * Math::Sin(t) + y0;

		if (t == 6.48)
		{
			t = 0;
		}
	}

	private: System::Void Task3_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) 
	{
		Application::Exit();
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Hide();
		task4->Show();
	}
};
}
