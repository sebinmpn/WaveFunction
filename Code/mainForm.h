#pragma once

#include <string>
#include "Simulation.h"

namespace PsiAnna101 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for mainForm
	/// </summary>
	public ref class mainForm : public System::Windows::Forms::Form
	{
	public:
		mainForm(void)
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
		~mainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Button^ plot_btn;


	private:
	private: System::Windows::Forms::TextBox^ L_value;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ h_value;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ no_of_point_value;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ m_value;
	private: System::Windows::Forms::TextBox^ n_value;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ x1;
	private: System::Windows::Forms::TextBox^ x2;





	public:


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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->plot_btn = (gcnew System::Windows::Forms::Button());
			this->L_value = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->h_value = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->no_of_point_value = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->m_value = (gcnew System::Windows::Forms::TextBox());
			this->n_value = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->x1 = (gcnew System::Windows::Forms::TextBox());
			this->x2 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			this->chart1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(309, 6);
			this->chart1->Margin = System::Windows::Forms::Padding(4);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Bright;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->IsXValueIndexed = true;
			series1->Legend = L"Legend1";
			series1->Name = L"Cosine";
			series1->XAxisType = System::Windows::Forms::DataVisualization::Charting::AxisType::Secondary;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->IsXValueIndexed = true;
			series2->Legend = L"Legend1";
			series2->Name = L"Sine";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(667, 475);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &mainForm::chart1_Click);
			// 
			// plot_btn
			// 
			this->plot_btn->Location = System::Drawing::Point(397, 479);
			this->plot_btn->Margin = System::Windows::Forms::Padding(4);
			this->plot_btn->Name = L"plot_btn";
			this->plot_btn->Size = System::Drawing::Size(85, 51);
			this->plot_btn->TabIndex = 1;
			this->plot_btn->Text = L"Plot";
			this->plot_btn->UseVisualStyleBackColor = true;
			this->plot_btn->Click += gcnew System::EventHandler(this, &mainForm::button1_Click);
			// 
			// L_value
			// 
			this->L_value->Location = System::Drawing::Point(94, 118);
			this->L_value->Margin = System::Windows::Forms::Padding(4);
			this->L_value->Name = L"L_value";
			this->L_value->Size = System::Drawing::Size(188, 27);
			this->L_value->TabIndex = 3;
			this->L_value->Text = L"1";
			this->L_value->TextChanged += gcnew System::EventHandler(this, &mainForm::L_value_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(37, 118);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(20, 20);
			this->label1->TabIndex = 4;
			this->label1->Text = L"L";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(37, 25);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(19, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"h";
			this->label2->Click += gcnew System::EventHandler(this, &mainForm::label2_Click);
			// 
			// h_value
			// 
			this->h_value->Location = System::Drawing::Point(94, 25);
			this->h_value->Margin = System::Windows::Forms::Padding(4);
			this->h_value->Name = L"h_value";
			this->h_value->Size = System::Drawing::Size(188, 27);
			this->h_value->TabIndex = 6;
			this->h_value->Text = L"1";
			this->h_value->TextChanged += gcnew System::EventHandler(this, &mainForm::h_value_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(40, 220);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 16);
			this->label3->TabIndex = 7;
			this->label3->Text = L"no. of points";
			this->label3->Click += gcnew System::EventHandler(this, &mainForm::label3_Click);
			// 
			// no_of_point_value
			// 
			this->no_of_point_value->Location = System::Drawing::Point(180, 220);
			this->no_of_point_value->Margin = System::Windows::Forms::Padding(4);
			this->no_of_point_value->Name = L"no_of_point_value";
			this->no_of_point_value->Size = System::Drawing::Size(96, 27);
			this->no_of_point_value->TabIndex = 8;
			this->no_of_point_value->Text = L"100";
			this->no_of_point_value->TextChanged += gcnew System::EventHandler(this, &mainForm::textBox1_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(38, 70);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(24, 20);
			this->label4->TabIndex = 9;
			this->label4->Text = L"m";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(37, 166);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(19, 20);
			this->label5->TabIndex = 10;
			this->label5->Text = L"n";
			// 
			// m_value
			// 
			this->m_value->Location = System::Drawing::Point(94, 70);
			this->m_value->Margin = System::Windows::Forms::Padding(4);
			this->m_value->Name = L"m_value";
			this->m_value->Size = System::Drawing::Size(188, 27);
			this->m_value->TabIndex = 11;
			this->m_value->Text = L"1";
			this->m_value->TextChanged += gcnew System::EventHandler(this, &mainForm::textBox2_TextChanged);
			// 
			// n_value
			// 
			this->n_value->Location = System::Drawing::Point(94, 166);
			this->n_value->Margin = System::Windows::Forms::Padding(4);
			this->n_value->Name = L"n_value";
			this->n_value->Size = System::Drawing::Size(188, 27);
			this->n_value->TabIndex = 12;
			this->n_value->Text = L"1";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(25, 316);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(31, 20);
			this->label6->TabIndex = 13;
			this->label6->Text = L"X1";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(25, 358);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(31, 20);
			this->label7->TabIndex = 14;
			this->label7->Text = L"X2";
			// 
			// x1
			// 
			this->x1->Location = System::Drawing::Point(94, 316);
			this->x1->Name = L"x1";
			this->x1->Size = System::Drawing::Size(188, 27);
			this->x1->TabIndex = 15;
			this->x1->Text = L"0";
			this->x1->TextChanged += gcnew System::EventHandler(this, &mainForm::textBox1_TextChanged_1);
			// 
			// x2
			// 
			this->x2->Location = System::Drawing::Point(94, 358);
			this->x2->Name = L"x2";
			this->x2->Size = System::Drawing::Size(188, 27);
			this->x2->TabIndex = 16;
			this->x2->Text = L"1";
			this->x2->TextChanged += gcnew System::EventHandler(this, &mainForm::textBox2_TextChanged_1);
			// 
			// mainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(989, 546);
			this->Controls->Add(this->x2);
			this->Controls->Add(this->x1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->n_value);
			this->Controls->Add(this->m_value);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->no_of_point_value);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->h_value);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->L_value);
			this->Controls->Add(this->plot_btn);
			this->Controls->Add(this->chart1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"mainForm";
			this->Text = L"mainForm";
			this->Load += gcnew System::EventHandler(this, &mainForm::mainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// n, m, L, x ,
		// x1, x2 
		// no. of points

		String^ n_str = this->n_value->Text;
		String^ L_str = this->L_value->Text;
		String^ m_str = this->m_value->Text;
		String^ h_str = this->h_value->Text;

		double _n_value = Double::Parse(n_str);
		double _L_value = Double::Parse(L_str);
		double _m_value = Double::Parse(m_str);
		double _h_value = Double::Parse(h_str);

		wave_function::n = (int)_n_value;
		wave_function::L = (int)_L_value;
		wave_function::m = (int)_m_value;
		wave_function::h = (int)_h_value;

		String^ x1_str = this->x1->Text;
		String^ x2_str = this->x2->Text;
		
		double _x1_value = Double::Parse(x1_str);
		double _x2_value = Double::Parse (x2_str);
		

		String^ no_of_point_str = this->no_of_point_value->Text;
		double no_of_points = Double::Parse(no_of_point_str);

		this->chart1->Series["Cosine"]->Points->Clear();
		this->chart1->Series["Sine"]->Points->Clear();

		auto wave = simulate(no_of_points, _x1_value, _x2_value);
		
		for (auto point : wave)
		{
			this->chart1->Series["Cosine"]->Points->AddXY (point.p(), point.x());
			this->chart1->Series["Sine"]->Points->AddXY (point.p(), point.y());
		}
		
	}

private: System::Void L_value_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void h_value_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void mainForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
