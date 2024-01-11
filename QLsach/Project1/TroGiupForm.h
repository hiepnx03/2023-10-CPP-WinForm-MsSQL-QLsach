#pragma once
#include "trogiup.h"
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	/// <summary>
	/// Summary for TroGiupForm
	/// </summary>
	public ref class TroGiupForm : public System::Windows::Forms::Form
	{
	public:
		TroGiupForm(void)
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
		~TroGiupForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ btnguiyeucau;
	private: System::Windows::Forms::Button^ btnthoat;
	private: System::Windows::Forms::TextBox^ tbtrogiup;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ gmail;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnguiyeucau = (gcnew System::Windows::Forms::Button());
			this->btnthoat = (gcnew System::Windows::Forms::Button());
			this->tbtrogiup = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->gmail = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(330, 72);
			this->label1->TabIndex = 0;
			this->label1->Text = L"TRỢ GIÚP";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// btnguiyeucau
			// 
			this->btnguiyeucau->Location = System::Drawing::Point(19, 197);
			this->btnguiyeucau->Name = L"btnguiyeucau";
			this->btnguiyeucau->Size = System::Drawing::Size(331, 50);
			this->btnguiyeucau->TabIndex = 1;
			this->btnguiyeucau->Text = L"GỬI YÊU CẦU";
			this->btnguiyeucau->UseVisualStyleBackColor = true;
			this->btnguiyeucau->Click += gcnew System::EventHandler(this, &TroGiupForm::btnguiyeucau_Click);
			// 
			// btnthoat
			// 
			this->btnthoat->Location = System::Drawing::Point(19, 253);
			this->btnthoat->Name = L"btnthoat";
			this->btnthoat->Size = System::Drawing::Size(331, 50);
			this->btnthoat->TabIndex = 2;
			this->btnthoat->Text = L"Thoát";
			this->btnthoat->UseVisualStyleBackColor = true;
			this->btnthoat->Click += gcnew System::EventHandler(this, &TroGiupForm::btnthoat_Click);
			// 
			// tbtrogiup
			// 
			this->tbtrogiup->Location = System::Drawing::Point(19, 171);
			this->tbtrogiup->Name = L"tbtrogiup";
			this->tbtrogiup->Size = System::Drawing::Size(331, 20);
			this->tbtrogiup->TabIndex = 3;
			this->tbtrogiup->TextChanged += gcnew System::EventHandler(this, &TroGiupForm::tbtrogiup_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(19, 152);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(81, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Nhập Nội Dung";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(19, 88);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"nhập Gmai";
			// 
			// gmail
			// 
			this->gmail->HideSelection = false;
			this->gmail->Location = System::Drawing::Point(19, 107);
			this->gmail->Name = L"gmail";
			this->gmail->Size = System::Drawing::Size(331, 20);
			this->gmail->TabIndex = 5;
			this->gmail->TextChanged += gcnew System::EventHandler(this, &TroGiupForm::gmail_TextChanged);
			// 
			// TroGiupForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(362, 315);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->gmail);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tbtrogiup);
			this->Controls->Add(this->btnthoat);
			this->Controls->Add(this->btnguiyeucau);
			this->Controls->Add(this->label1);
			this->Name = L"TroGiupForm";
			this->Text = L"TroGiupForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnthoat_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btnguiyeucau_Click(System::Object^ sender, System::EventArgs^ e) {
		// Lấy thông tin từ các control trên form
		String^ gmailValue = gmail->Text;
		String^ noiDungValue = tbtrogiup->Text;

		try {
			String^ connString = "Data Source=desktop-rkei9e8\\sqlexpress;Initial Catalog=QLsach;Integrated Security=True; MultipleActiveResultSets=True";
			SqlConnection^ sqlConn = gcnew SqlConnection(connString);
			sqlConn->Open();

			// Tạo câu lệnh SQL để chèn dữ liệu vào bảng trogiup
			String^ insertQuery = "INSERT INTO trogiup (gmail, noidung) VALUES (@gmail, @noidung)";
			SqlCommand^ command = gcnew SqlCommand(insertQuery, sqlConn);
			command->Parameters->AddWithValue("@gmail", gmailValue);
			command->Parameters->AddWithValue("@noidung", noiDungValue);

			command->ExecuteNonQuery();

			sqlConn->Close();

			MessageBox::Show("Dữ liệu đã được lưu vào cơ sở dữ liệu.", "Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ ex) {
			MessageBox::Show("Lỗi: " + ex->Message, "Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

private: System::Void gmail_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tbtrogiup_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
