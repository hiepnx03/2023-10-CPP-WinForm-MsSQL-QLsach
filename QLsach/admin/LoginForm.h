#pragma once
#include "Admins.h"
#include "Register.h"
#include "MainForm.h"
namespace admin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Admins^ adminsData;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ btnDangNhap;
	private: System::Windows::Forms::Button^ btnDangKi;
	private: System::Windows::Forms::TextBox^ tbEmail;

	private: System::Windows::Forms::TextBox^ tbPassWord;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

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
			this->btnDangNhap = (gcnew System::Windows::Forms::Button());
			this->btnDangKi = (gcnew System::Windows::Forms::Button());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->tbPassWord = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(323, 47);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ĐĂNG NHẬP QUẢN TRỊ";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// btnDangNhap
			// 
			this->btnDangNhap->Location = System::Drawing::Point(13, 229);
			this->btnDangNhap->Name = L"btnDangNhap";
			this->btnDangNhap->Size = System::Drawing::Size(117, 23);
			this->btnDangNhap->TabIndex = 1;
			this->btnDangNhap->Text = L"ĐĂNG NHẬP";
			this->btnDangNhap->UseVisualStyleBackColor = true;
			this->btnDangNhap->Click += gcnew System::EventHandler(this, &LoginForm::btnDangNhap_Click);
			// 
			// btnDangKi
			// 
			this->btnDangKi->Location = System::Drawing::Point(219, 229);
			this->btnDangKi->Name = L"btnDangKi";
			this->btnDangKi->Size = System::Drawing::Size(117, 23);
			this->btnDangKi->TabIndex = 2;
			this->btnDangKi->Text = L"ĐĂNG KÍ";
			this->btnDangKi->UseVisualStyleBackColor = true;
			this->btnDangKi->Click += gcnew System::EventHandler(this, &LoginForm::btnDangKi_Click);
			// 
			// tbEmail
			// 
			this->tbEmail->Location = System::Drawing::Point(74, 94);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(262, 20);
			this->tbEmail->TabIndex = 3;
			// 
			// tbPassWord
			// 
			this->tbPassWord->Location = System::Drawing::Point(74, 145);
			this->tbPassWord->Name = L"tbPassWord";
			this->tbPassWord->Size = System::Drawing::Size(262, 20);
			this->tbPassWord->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 97);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(32, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Email";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(15, 148);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Mật Khẩu";
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(348, 264);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tbPassWord);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->btnDangKi);
			this->Controls->Add(this->btnDangNhap);
			this->Controls->Add(this->label1);
			this->Name = L"LoginForm";
			this->Text = L"LoginForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public: Admins^ admins = nullptr;

		private: System::Void btnDangNhap_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ email = this->tbEmail->Text;
		String^ password = this->tbPassWord->Text;

		if (email->Length == 0 || password->Length == 0) {
			MessageBox::Show("Vui lòng nhập tài khoản và mật khẩu.");
		}
		else {
			try {
				String^ connString = "Data Source=desktop-rkei9e8\\sqlexpress;Initial Catalog=QLsach;Integrated Security=True; MultipleActiveResultSets=true";
				SqlConnection^ sqlConn = gcnew SqlConnection(connString);
				sqlConn->Open();
				String^ sqlQuery = "SELECT * FROM admins WHERE email = @Email AND password = @Password";

				SqlCommand^ sqlCommand = gcnew SqlCommand(sqlQuery, sqlConn);
				sqlCommand->Parameters->Add(gcnew SqlParameter("@Email", email));
				sqlCommand->Parameters->Add(gcnew SqlParameter("@Password", password));

				SqlDataReader^ reader = sqlCommand->ExecuteReader();
				if (reader != nullptr && reader->HasRows) {
					reader->Read();
					int adminsId = reader->GetInt32(reader->GetOrdinal("admin_id"));
					String^ username = reader["username"]->ToString();
					String^ fullName = reader["full_name"]->ToString();
					String^ userEmail = reader["email"]->ToString();
					String^ userPhone = reader["phone"]->ToString();
					DateTime createdAt = reader->GetDateTime(reader->GetOrdinal("created_at"));
					DateTime lastLogin = reader->GetDateTime(reader->GetOrdinal("last_login"));

					String^ updateLastLoginQuery = "UPDATE admins SET last_login = GETDATE() WHERE admin_id = @AdminsId";
					SqlCommand^ updateLastLoginCommand = gcnew SqlCommand(updateLastLoginQuery, sqlConn);
					updateLastLoginCommand->Parameters->Add(gcnew SqlParameter("@AdminsId", adminsId));
					updateLastLoginCommand->ExecuteNonQuery();

					admins = gcnew Admins();
					admins->admin_id = adminsId;
					admins->username = username;
					admins->full_name = fullName;
					admins->email = userEmail;
					admins->phone = userPhone;
					admins->created_at = createdAt;
					admins->last_login = lastLogin;

					this->Close();
				}
				else {
					MessageBox::Show("email hoac mat khau khong hop le.");
				}
				reader->Close();
				sqlConn->Close();
			}
			catch (Exception^ ex) {
				MessageBox::Show("Lỗi: " + ex->Message);
			}
		}
	}
			  

			private: System::Void btnDangKi_Click(System::Object^ sender, System::EventArgs^ e) {
				Register^ registerForm = gcnew Register();
				registerForm-> ShowDialog();
			}
};
}
