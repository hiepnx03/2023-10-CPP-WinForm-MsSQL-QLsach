#pragma once
#include "User.h"
#include "MainForm.h"
#include "MyForm.h"
#include "Register.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbEmail;
	private: System::Windows::Forms::TextBox^ tbPassword;
	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::Button^ btnRegister;
	private: System::Windows::Forms::Button^ btnCancel;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->btnRegister = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(337, 57);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Login";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(13, 106);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Email";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(13, 146);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Password";
			// 
			// tbEmail
			// 
			this->tbEmail->Location = System::Drawing::Point(114, 109);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(235, 20);
			this->tbEmail->TabIndex = 3;
			// 
			// tbPassword
			// 
			this->tbPassword->Location = System::Drawing::Point(114, 149);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->Size = System::Drawing::Size(235, 20);
			this->tbPassword->TabIndex = 4;
			// 
			// btnOK
			// 
			this->btnOK->Location = System::Drawing::Point(12, 221);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(96, 29);
			this->btnOK->TabIndex = 5;
			this->btnOK->Text = L"OK";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &MyForm::btnOK_Click);
			// 
			// btnRegister
			// 
			this->btnRegister->Location = System::Drawing::Point(114, 221);
			this->btnRegister->Name = L"btnRegister";
			this->btnRegister->Size = System::Drawing::Size(96, 29);
			this->btnRegister->TabIndex = 6;
			this->btnRegister->Text = L"Register";
			this->btnRegister->UseVisualStyleBackColor = true;
			this->btnRegister->Click += gcnew System::EventHandler(this, &MyForm::btnRegister_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(277, 221);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(72, 29);
			this->btnCancel->TabIndex = 7;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &MyForm::btnCancel_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(361, 262);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnRegister);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	public: User^ user= nullptr;

		  private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {
			  String^ email = this->tbEmail->Text;
			  String^ password = this->tbPassword->Text;

			  if (email->Length == 0 || password->Length == 0) {
				  MessageBox::Show("Vui lòng nhập tài khoản và mật khẩu.");
			  }
			  else {
				  try {
					  // MultipleActiveResultSets=true fix lỗi "there is already an open datareader associated with this connection which must be closed first"
					  String^ connString = "Data Source=desktop-rkei9e8\\sqlexpress;Initial Catalog=QLsach;Integrated Security=True; MultipleActiveResultSets=true";
					  SqlConnection^ sqlConn = gcnew SqlConnection(connString);
					  sqlConn->Open();
					  String^ sqlQuery = "SELECT * FROM users WHERE email = @Email AND password = @Password";

					  SqlCommand^ sqlCommand = gcnew SqlCommand(sqlQuery, sqlConn);
					  sqlCommand->Parameters->Add(gcnew SqlParameter("@Email", email));
					  sqlCommand->Parameters->Add(gcnew SqlParameter("@Password", password));

					  SqlDataReader^ reader = sqlCommand->ExecuteReader();
					  if (reader != nullptr && reader->HasRows) {
						  reader->Read();
						  int userId = reader->GetInt32(reader->GetOrdinal("user_id"));
						  String^ username = reader["username"]->ToString();
						  String^ fullName = reader["full_name"]->ToString();
						  String^ userEmail = reader["email"]->ToString();
						  String^ userPhone = reader["phone"]->ToString();
						  DateTime createdAt = reader->GetDateTime(reader->GetOrdinal("created_at"));
						  DateTime lastLogin = reader->GetDateTime(reader->GetOrdinal("last_login"));

						  String^ updateLastLoginQuery = "UPDATE users SET last_login = GETDATE() WHERE user_id = @UserId";
						  SqlCommand^ updateLastLoginCommand = gcnew SqlCommand(updateLastLoginQuery, sqlConn);
						  updateLastLoginCommand->Parameters->Add(gcnew SqlParameter("@UserId", userId));
						  updateLastLoginCommand->ExecuteNonQuery();

						  user = gcnew User();  
						  user->userId = userId;
						  user->username = username;
						  user->fullName = fullName;
						  user->email = userEmail;
						  user->phone = userPhone;
						  user->createdAt = createdAt;
						  user->lastLogin = lastLogin;

						  this->Close();
					  }
					  else {
						  MessageBox::Show("Đăng nhập thất bại, email hoặc mật khẩu không hợp lệ.");
					  }
					  reader->Close();
					  sqlConn->Close();
				  }
				  catch (Exception^ ex) {
					  MessageBox::Show("Lỗi: " + ex->Message);
				  }
			  }
		  }



		private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		}

		private: System::Void btnRegister_Click(System::Object^ sender, System::EventArgs^ e) {
			Register^ registerForm = gcnew Register();
			registerForm->ShowDialog();
		}

};
}
