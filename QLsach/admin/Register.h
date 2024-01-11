#pragma once
#include "Admins.h"

namespace admin {

	using namespace System::Data::SqlClient;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Register
	/// </summary>
	public ref class Register : public System::Windows::Forms::Form
	{
	public:
		Register(void)
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
		~Register()
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
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ btnRegister;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::TextBox^ tbusername;
	private: System::Windows::Forms::TextBox^ tbpassword;
	private: System::Windows::Forms::TextBox^ tbfullname;
	private: System::Windows::Forms::TextBox^ tbemail;
	private: System::Windows::Forms::TextBox^ tbphone;

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
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->btnRegister = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->tbusername = (gcnew System::Windows::Forms::TextBox());
			this->tbpassword = (gcnew System::Windows::Forms::TextBox());
			this->tbfullname = (gcnew System::Windows::Forms::TextBox());
			this->tbemail = (gcnew System::Windows::Forms::TextBox());
			this->tbphone = (gcnew System::Windows::Forms::TextBox());
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
			this->label1->Size = System::Drawing::Size(351, 64);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Register";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"[username]";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 113);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"[password]";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 151);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"[full_name]";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 186);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(37, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"[email]";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 221);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(43, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"[phone]";
			// 
			// btnRegister
			// 
			this->btnRegister->Location = System::Drawing::Point(12, 263);
			this->btnRegister->Name = L"btnRegister";
			this->btnRegister->Size = System::Drawing::Size(75, 23);
			this->btnRegister->TabIndex = 6;
			this->btnRegister->Text = L"Register";
			this->btnRegister->UseVisualStyleBackColor = true;
			this->btnRegister->Click += gcnew System::EventHandler(this, &Register::btnRegister_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(289, 263);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(75, 23);
			this->btnCancel->TabIndex = 7;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &Register::btnCancel_Click);
			// 
			// tbusername
			// 
			this->tbusername->Location = System::Drawing::Point(95, 70);
			this->tbusername->Name = L"tbusername";
			this->tbusername->Size = System::Drawing::Size(269, 20);
			this->tbusername->TabIndex = 8;
			// 
			// tbpassword
			// 
			this->tbpassword->Location = System::Drawing::Point(95, 110);
			this->tbpassword->Name = L"tbpassword";
			this->tbpassword->Size = System::Drawing::Size(269, 20);
			this->tbpassword->TabIndex = 9;
			// 
			// tbfullname
			// 
			this->tbfullname->Location = System::Drawing::Point(95, 148);
			this->tbfullname->Name = L"tbfullname";
			this->tbfullname->Size = System::Drawing::Size(269, 20);
			this->tbfullname->TabIndex = 10;
			// 
			// tbemail
			// 
			this->tbemail->Location = System::Drawing::Point(95, 184);
			this->tbemail->Name = L"tbemail";
			this->tbemail->Size = System::Drawing::Size(269, 20);
			this->tbemail->TabIndex = 11;
			// 
			// tbphone
			// 
			this->tbphone->Location = System::Drawing::Point(95, 218);
			this->tbphone->Name = L"tbphone";
			this->tbphone->Size = System::Drawing::Size(269, 20);
			this->tbphone->TabIndex = 12;
			// 
			// Register
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(376, 298);
			this->Controls->Add(this->tbphone);
			this->Controls->Add(this->tbemail);
			this->Controls->Add(this->tbfullname);
			this->Controls->Add(this->tbpassword);
			this->Controls->Add(this->tbusername);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnRegister);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Register";
			this->Text = L"Register";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnRegister_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ email = tbemail->Text;
		String^ password = tbpassword->Text;
		String^ username = tbusername->Text;
		String^ fullName = tbfullname->Text;
		String^ phone = tbphone->Text;

		if (email->Length == 0 || password->Length == 0 || username->Length == 0) {
			MessageBox::Show("Vui lòng nhập đầy đủ thông tin đăng kí.");
		}
		else {
			try {
				String^ connString = "Data Source=desktop-rkei9e8\\sqlexpress;Initial Catalog=QLsach;Integrated Security=True; MultipleActiveResultSets=True";
				SqlConnection^ sqlConn = gcnew SqlConnection(connString);
				sqlConn->Open();

				String^ sqlQuery = "INSERT INTO admins (username, password, full_name, email, phone, created_at, last_login) VALUES (@Username, @Password, @FullName, @Email, @Phone, GETDATE(), '2003-01-01')";

				SqlCommand^ sqlCommand = gcnew SqlCommand(sqlQuery, sqlConn);
				sqlCommand->Parameters->Add(gcnew SqlParameter("@Username", username));
				sqlCommand->Parameters->Add(gcnew SqlParameter("@Password", password));
				sqlCommand->Parameters->Add(gcnew SqlParameter("@FullName", fullName));
				sqlCommand->Parameters->Add(gcnew SqlParameter("@Email", email));
				sqlCommand->Parameters->Add(gcnew SqlParameter("@Phone", phone));

				sqlCommand->ExecuteNonQuery();

				// Đóng kết nối cơ sở dữ liệu
				sqlConn->Close();

				MessageBox::Show("Đăng kí thành công.");
				this->Close(); // Đóng form đăng kí sau khi đăng kí thành công.
			}
			catch (Exception^ ex) {
				MessageBox::Show("Lỗi: " + ex->Message);
			}
		}
	}

	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}
