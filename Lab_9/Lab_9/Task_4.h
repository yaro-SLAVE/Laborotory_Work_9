#pragma once

namespace Lab9 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Task_4
	/// </summary>
	public ref class Task_4 : public System::Windows::Forms::Form
	{
		int num = 1;
	public:
		Task_4(void)
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
		~Task_4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ field;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;
	protected:

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
			this->field = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->field))->BeginInit();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(12, 486);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(158, 73);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Предыдущее задание";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Task_4::button2_Click);
			// 
			// field
			// 
			this->field->BackColor = System::Drawing::Color::White;
			this->field->Location = System::Drawing::Point(42, 12);
			this->field->Name = L"field";
			this->field->Size = System::Drawing::Size(300, 400);
			this->field->TabIndex = 4;
			this->field->TabStop = false;
			// 
			// Task_4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(414, 571);
			this->Controls->Add(this->field);
			this->Controls->Add(this->button2);
			this->Name = L"Task_4";
			this->Text = L"Task_4";
			this->Shown += gcnew System::EventHandler(this, &Task_4::Task_4_Shown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->field))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion


	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Hide();
		this->Owner->Show();
	}
	private: System::Void Task_4_Shown(System::Object^ sender, System::EventArgs^ e) 
	{
		timer1->Interval = 125;
		timer1->Tick += gcnew EventHandler(this, &Task_4::update);
		timer1->Start();
	}

	private: void update(System::Object^ sender, System::EventArgs^ e)
	{
		if (num == 9)
		{
			num = 1;
		}

		Image^ image = gcnew Bitmap(Convert::ToString(num) + ".1.png");
		Image^ part = gcnew Bitmap(300, 400);
		Graphics^ g = Graphics::FromImage(part);
		g->DrawImage(image, 0, 0);
		this->field->Image = part;

		++num;
	}
	};
}
