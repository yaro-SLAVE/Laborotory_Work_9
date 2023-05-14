#pragma once
#include "Task1_2.h"
#include <cmath>

namespace Lab9 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Task1_1
	/// </summary>
	public ref class Task1_1 : public System::Windows::Forms::Form
	{
		String^ graf_color = "Black";
		int graf = 0;
		double x0 = 142;
		double y0 = 177;

	private: System::Windows::Forms::ToolStripMenuItem^ paint_graf;
		   

	public:
		Task1_1(void)
		{
			InitializeComponent();
			
			task1_2 = gcnew(Task1_2);
			task1_2->Owner = this;
			task1_2->Hide();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Task1_1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Task1_2^ task1_2;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ menugraf;
	private: System::Windows::Forms::ToolStripMenuItem^ menucolor;
	protected:


	private: System::Windows::Forms::ToolStripMenuItem^ graf0;
	private: System::Windows::Forms::ToolStripMenuItem^ graf1;
	private: System::Windows::Forms::ToolStripMenuItem^ graf2;
	private: System::Windows::Forms::ToolStripMenuItem^ graf3;




	private: System::Windows::Forms::ToolStripMenuItem^ grtab;
	private: System::Windows::Forms::ToolStripMenuItem^ bltab;
	private: System::Windows::Forms::ToolStripMenuItem^ redtab;
	private: System::Windows::Forms::PictureBox^ paint_field;








	private: System::Windows::Forms::TextBox^ xmin;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ xmax;

	private: System::Windows::Forms::Button^ button1;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menugraf = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->graf0 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->graf1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->graf2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->graf3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->paint_graf = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menucolor = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->grtab = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bltab = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->redtab = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->paint_field = (gcnew System::Windows::Forms::PictureBox());
			this->xmin = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->xmax = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->paint_field))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->menugraf, this->menucolor });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(448, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menugraf
			// 
			this->menugraf->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->graf0, this->graf1,
					this->graf2, this->graf3, this->paint_graf
			});
			this->menugraf->Name = L"menugraf";
			this->menugraf->Size = System::Drawing::Size(60, 20);
			this->menugraf->Text = L"График";
			// 
			// graf0
			// 
			this->graf0->Name = L"graf0";
			this->graf0->Size = System::Drawing::Size(176, 22);
			this->graf0->Text = L"ln(x)";
			this->graf0->Click += gcnew System::EventHandler(this, &Task1_1::graf0_Click);
			// 
			// graf1
			// 
			this->graf1->Name = L"graf1";
			this->graf1->Size = System::Drawing::Size(176, 22);
			this->graf1->Text = L"2ln(x)";
			this->graf1->Click += gcnew System::EventHandler(this, &Task1_1::graf1_Click);
			// 
			// graf2
			// 
			this->graf2->Name = L"graf2";
			this->graf2->Size = System::Drawing::Size(176, 22);
			this->graf2->Text = L"ln(x^2)";
			this->graf2->Click += gcnew System::EventHandler(this, &Task1_1::graf2_Click);
			// 
			// graf3
			// 
			this->graf3->Name = L"graf3";
			this->graf3->Size = System::Drawing::Size(176, 22);
			this->graf3->Text = L"(ln(x))^2";
			this->graf3->Click += gcnew System::EventHandler(this, &Task1_1::graf3_Click);
			// 
			// paint_graf
			// 
			this->paint_graf->Name = L"paint_graf";
			this->paint_graf->Size = System::Drawing::Size(176, 22);
			this->paint_graf->Text = L"Построить график";
			this->paint_graf->Click += gcnew System::EventHandler(this, &Task1_1::paint_graf_Click);
			// 
			// menucolor
			// 
			this->menucolor->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->grtab, this->bltab,
					this->redtab
			});
			this->menucolor->Name = L"menucolor";
			this->menucolor->Size = System::Drawing::Size(45, 20);
			this->menucolor->Text = L"Цвет";
			// 
			// grtab
			// 
			this->grtab->Name = L"grtab";
			this->grtab->Size = System::Drawing::Size(180, 22);
			this->grtab->Text = L"Зелёный";
			this->grtab->Click += gcnew System::EventHandler(this, &Task1_1::grtab_Click);
			// 
			// bltab
			// 
			this->bltab->Name = L"bltab";
			this->bltab->Size = System::Drawing::Size(180, 22);
			this->bltab->Text = L"Синий";
			this->bltab->Click += gcnew System::EventHandler(this, &Task1_1::bltab_Click);
			// 
			// redtab
			// 
			this->redtab->Name = L"redtab";
			this->redtab->Size = System::Drawing::Size(180, 22);
			this->redtab->Text = L"Красный";
			this->redtab->Click += gcnew System::EventHandler(this, &Task1_1::redtab_Click);
			// 
			// paint_field
			// 
			this->paint_field->Location = System::Drawing::Point(73, 43);
			this->paint_field->Name = L"paint_field";
			this->paint_field->Size = System::Drawing::Size(283, 353);
			this->paint_field->TabIndex = 1;
			this->paint_field->TabStop = false;
			// 
			// xmin
			// 
			this->xmin->Location = System::Drawing::Point(52, 487);
			this->xmin->Name = L"xmin";
			this->xmin->Size = System::Drawing::Size(98, 20);
			this->xmin->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(68, 459);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 25);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Xmin";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(206, 459);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 25);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Xmax";
			// 
			// xmax
			// 
			this->xmax->Location = System::Drawing::Point(190, 487);
			this->xmax->Name = L"xmax";
			this->xmax->Size = System::Drawing::Size(98, 20);
			this->xmax->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(344, 459);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 48);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Следующее задание";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Task1_1::button1_Click);
			// 
			// Task1_1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(448, 534);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->xmax);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->xmin);
			this->Controls->Add(this->paint_field);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Task1_1";
			this->Text = L"Task1_1";
			this->Load += gcnew System::EventHandler(this, &Task1_1::Task1_1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->paint_field))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void graf0_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		graf = 0;
	}

	private: System::Void graf1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		graf = 1;
	}

	private: System::Void graf2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		graf = 2;
	}

	private: System::Void graf3_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		graf = 3;
	}

	private: System::Void paint_graf_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Pen^ pen = gcnew Pen(Color::Black, 3);
		Bitmap^ bmp;
		bmp = gcnew Bitmap(paint_field->Width, paint_field->Height);
		paint_field->Image = bmp;
		Graphics^ g = Graphics::FromImage(paint_field->Image);

		g->DrawLine(pen, 0, 177, 281, 177);
		g->DrawLine(pen, 142, 0, 142, 353);
		int x1 = 142;
		int x2 = 142;
		int y1 = 177;
		int y2 = 177;
		while (x1 < 283 && x2 > 0)
		{
			pen = gcnew Pen(Color::Black, 0.5);
			g->DrawLine(pen, x1, 0, x1, 353);
			g->DrawLine(pen, x2, 0, x2, 353);
			x1 += 10;
			x2 -= 10;
		}

		while (y1 < 353 && y2 > 0)
		{
			pen = gcnew Pen(Color::Black, 0.5);
			g->DrawLine(pen, 0, y1, 283, y1);
			g->DrawLine(pen, 0, y2, 283, y2);
			y1 += 10;
			y2 -= 10;
		}

		double y = 0;
		double x_max = 20;
		double h = 0.1;
		double x = 0.1;

		if (xmin->Text != "" && xmax->Text != "")
		{
			x = Convert::ToDouble(xmin->Text);
			x_max = Convert::ToDouble(xmax->Text);
		}

		SolidBrush^ color_Brush = gcnew SolidBrush(Color::FromName(graf_color));

			while (x <= x_max)
			{
				y = draw_graf(x);
				g->FillEllipse(color_Brush, x * 10 + x0, y * 10 + y0, 3, 3);
				x += 0.01;
			}
	}

	private: System::Void Task1_1_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		Pen^ pen = gcnew Pen(Color::Black, 3);
		Bitmap^ bmp;
		bmp = gcnew Bitmap(paint_field->Width, paint_field->Height);
		paint_field->Image = bmp;
		Graphics^ g = Graphics::FromImage(paint_field->Image);
		g->DrawLine(pen, 0, 177, 281, 177);
		g->DrawLine(pen, 142, 0, 142, 353);
		int x1 = 142;
		int x2 = 142;
		int y1 = 177;
		int y2 = 177;
		while (x1 < 283 && x2 > 0)
		{
			Pen^ pen = gcnew Pen(Color::Black, 0.5);
			g->DrawLine(pen, x1, 0, x1, 353);
			g->DrawLine(pen, x2, 0, x2, 353);
			x1 += 10;
			x2 -= 10;
		}

		while (y1 < 353 && y2 > 0)
		{
			Pen^ pen = gcnew Pen(Color::Black, 0.5);
			g->DrawLine(pen, 0, y1, 283, y1);
			g->DrawLine(pen, 0, y2, 283, y2);
			y1 += 10;
			y2 -= 10;
		}
	}

		   double draw_graf(double x)
		   {
			   if(graf == 0)
				   return Math::Log(x);
			   else if (graf == 1)
				   return 2 * Math::Log(x);
			   else if (graf == 2)
				   return Math::Log(pow(x, 2));
			   else if (graf == 3)
				   return pow(Math::Log(x), 2);
		   }

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Hide();
		task1_2->Show();
	}

	private: System::Void grtab_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		graf_color = "Green";
	}

	private: System::Void bltab_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		graf_color = "Blue";
	}

	private: System::Void redtab_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		graf_color = "Red";
	}
};
}
