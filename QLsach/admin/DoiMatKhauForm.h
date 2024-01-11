#pragma once
#include "Admins.h"
namespace admin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for DoiMatKhauForm
	/// </summary>
	public ref class DoiMatKhauForm : public System::Windows::Forms::Form
	{
	public:
		DoiMatKhauForm(void)
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
		~DoiMatKhauForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbNhapMKcu;
	private: System::Windows::Forms::TextBox^ tbNhapMKmoi;
	private: System::Windows::Forms::TextBox^ tbNhaplaiMKmoi;
	private: System::Windows::Forms::Button^ btnDoiMK;
	private: System::Windows::Forms::Button^ btnTroVe;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tbNhapEmail;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbNhapMKcu = (gcnew System::Windows::Forms::TextBox());
			this->tbNhapMKmoi = (gcnew System::Windows::Forms::TextBox());
			this->tbNhaplaiMKmoi = (gcnew System::Windows::Forms::TextBox());
			this->btnDoiMK = (gcnew System::Windows::Forms::Button());
			this->btnTroVe = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbNhapEmail = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(393, 62);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Đổi Mật Khẩu";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 138);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(98, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nhập Mật Khẩu Cũ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(23, 170);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(102, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Nhập Mật Khẩu Mới";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(23, 199);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(119, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Nhập Lại Mật Khẩu Mới";
			// 
			// tbNhapMKcu
			// 
			this->tbNhapMKcu->Location = System::Drawing::Point(166, 138);
			this->tbNhapMKcu->Name = L"tbNhapMKcu";
			this->tbNhapMKcu->Size = System::Drawing::Size(240, 20);
			this->tbNhapMKcu->TabIndex = 4;
			// 
			// tbNhapMKmoi
			// 
			this->tbNhapMKmoi->Location = System::Drawing::Point(166, 167);
			this->tbNhapMKmoi->Name = L"tbNhapMKmoi";
			this->tbNhapMKmoi->Size = System::Drawing::Size(240, 20);
			this->tbNhapMKmoi->TabIndex = 5;
			// 
			// tbNhaplaiMKmoi
			// 
			this->tbNhaplaiMKmoi->Location = System::Drawing::Point(166, 196);
			this->tbNhaplaiMKmoi->Name = L"tbNhaplaiMKmoi";
			this->tbNhaplaiMKmoi->Size = System::Drawing::Size(240, 20);
			this->tbNhaplaiMKmoi->TabIndex = 6;
			// 
			// btnDoiMK
			// 
			this->btnDoiMK->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnDoiMK->Location = System::Drawing::Point(12, 269);
			this->btnDoiMK->Name = L"btnDoiMK";
			this->btnDoiMK->Size = System::Drawing::Size(192, 37);
			this->btnDoiMK->TabIndex = 7;
			this->btnDoiMK->Text = L"Đổi Mật Khẩu";
			this->btnDoiMK->UseVisualStyleBackColor = true;
			this->btnDoiMK->Click += gcnew System::EventHandler(this, &DoiMatKhauForm::btnDoiMK_Click);
			// 
			// btnTroVe
			// 
			this->btnTroVe->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnTroVe->Location = System::Drawing::Point(214, 269);
			this->btnTroVe->Name = L"btnTroVe";
			this->btnTroVe->Size = System::Drawing::Size(192, 37);
			this->btnTroVe->TabIndex = 8;
			this->btnTroVe->Text = L"Trở Về";
			this->btnTroVe->UseVisualStyleBackColor = true;
			this->btnTroVe->Click += gcnew System::EventHandler(this, &DoiMatKhauForm::btnTroVe_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(23, 109);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(61, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Nhập Email";
			// 
			// tbNhapEmail
			// 
			this->tbNhapEmail->Location = System::Drawing::Point(166, 106);
			this->tbNhapEmail->Name = L"tbNhapEmail";
			this->tbNhapEmail->Size = System::Drawing::Size(240, 20);
			this->tbNhapEmail->TabIndex = 10;
			// 
			// DoiMatKhauForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(418, 318);
			this->Controls->Add(this->tbNhapEmail);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->btnTroVe);
			this->Controls->Add(this->btnDoiMK);
			this->Controls->Add(this->tbNhaplaiMKmoi);
			this->Controls->Add(this->tbNhapMKmoi);
			this->Controls->Add(this->tbNhapMKcu);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"DoiMatKhauForm";
			this->Text = L"DoiMatKhauForm";
			this->Load += gcnew System::EventHandler(this, &DoiMatKhauForm::DoiMatKhauForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: Admins^ admins = nullptr;
	private: System::Void btnDoiMK_Click(System::Object^ sender, System::EventArgs^ e) {
		// Lấy email và mật khẩu từ các hộp văn bản
		System::String^ email = tbNhapEmail->Text;
		System::String^ matKhauCu = tbNhapMKcu->Text;
		System::String^ matKhauMoi = tbNhapMKmoi->Text;
		System::String^ nhapLaiMatKhauMoi = tbNhaplaiMKmoi->Text;

		// Kiểm tra xem email đã được nhập hay chưa
		if (String::IsNullOrEmpty(email)) {
			MessageBox::Show("Vui lòng nhập email của bạn.", "Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Kiểm tra xem mật khẩu cũ và mật khẩu mới đã được nhập hay chưa
		if (String::IsNullOrEmpty(matKhauCu) || String::IsNullOrEmpty(matKhauMoi) || String::IsNullOrEmpty(nhapLaiMatKhauMoi)) {
			MessageBox::Show("Vui lòng nhập đầy đủ thông tin.", "Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Kết nối đến cơ sở dữ liệu và kiểm tra xem email và mật khẩu cũ tồn tại
		System::String^ connString = "Data Source=desktop-rkei9e8\\sqlexpress;Initial Catalog=QLsach;Integrated Security=True; MultipleActiveResultSets=true";
		System::Data::SqlClient::SqlConnection^ sqlConn = gcnew System::Data::SqlClient::SqlConnection(connString);
		sqlConn->Open();

		System::String^ sqlQuery = "SELECT * FROM admins WHERE email = @Email AND password = @Password";
		System::Data::SqlClient::SqlCommand^ sqlCommand = gcnew System::Data::SqlClient::SqlCommand(sqlQuery, sqlConn);
		sqlCommand->Parameters->Add(gcnew System::Data::SqlClient::SqlParameter("@Email", email));
		sqlCommand->Parameters->Add(gcnew System::Data::SqlClient::SqlParameter("@Password", matKhauCu));

		System::Data::SqlClient::SqlDataReader^ reader = sqlCommand->ExecuteReader();

		if (reader->Read()) {
			// Tìm thấy email và mật khẩu cũ trong cơ sở dữ liệu
			reader->Close(); // Đóng data reader

			// Kiểm tra mật khẩu mới và việc nhập lại mật khẩu mới có trùng khớp
			if (matKhauMoi != nhapLaiMatKhauMoi) {
				MessageBox::Show("Mật khẩu mới và việc nhập lại mật khẩu mới không trùng khớp. Vui lòng thử lại.", "Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// Thực hiện cập nhật mật khẩu mới trong cơ sở dữ liệu
			sqlQuery = "UPDATE admins SET password = @Password WHERE email = @Email";
			sqlCommand = gcnew System::Data::SqlClient::SqlCommand(sqlQuery, sqlConn);
			sqlCommand->Parameters->Add(gcnew System::Data::SqlClient::SqlParameter("@Password", matKhauMoi));
			sqlCommand->Parameters->Add(gcnew System::Data::SqlClient::SqlParameter("@Email", email));
			sqlCommand->ExecuteNonQuery(); // Thực hiện truy vấn không trả về dữ liệu

			sqlConn->Close(); // Đóng kết nối

			// Hiển thị thông báo cho người dùng về việc đổi mật khẩu thành công
			MessageBox::Show("Đổi mật khẩu thành công!", "Thành công", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			// Không tìm thấy email và mật khẩu cũ trong cơ sở dữ liệu
			reader->Close(); // Đóng data reader
			sqlConn->Close(); // Đóng kết nối

			MessageBox::Show("Email hoặc mật khẩu cũ không đúng. Vui lòng thử lại.", "Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}



	private: System::Void btnTroVe_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void DoiMatKhauForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
