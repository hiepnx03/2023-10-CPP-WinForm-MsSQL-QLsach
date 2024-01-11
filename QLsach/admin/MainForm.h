#pragma once
#include "Admins.h"
#include "DoiMatKhauForm.h"
#include "QuanLyKhachHangForm.h"
#include "QuanLySachForm.h"
#include "CartItemsForm.h"
#include "TrogiupForm.h"

namespace admin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		

		// Constructor accepting Admins^ object
		MainForm(Admins^ adminData) {
			InitializeComponent();
			// Sử dụng dữ liệu adminData để hiển thị thông tin trong MainForm
		}

	protected:
	
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnTaiKhoan;
	protected:
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Button^ btnQuanLySach;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnQuanLyKhachHang;
	private: System::Windows::Forms::Button^ btnQuanLyDonHang;
	private: System::Windows::Forms::Button^ trogiup;

	private:
		
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
	
		void InitializeComponent(void)
		{
			this->btnTaiKhoan = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnQuanLySach = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnQuanLyKhachHang = (gcnew System::Windows::Forms::Button());
			this->btnQuanLyDonHang = (gcnew System::Windows::Forms::Button());
			this->trogiup = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnTaiKhoan
			// 
			this->btnTaiKhoan->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->btnTaiKhoan->Location = System::Drawing::Point(298, 98);
			this->btnTaiKhoan->Name = L"btnTaiKhoan";
			this->btnTaiKhoan->Size = System::Drawing::Size(155, 55);
			this->btnTaiKhoan->TabIndex = 3;
			this->btnTaiKhoan->Text = L"Đổi Mật Khẩu";
			this->btnTaiKhoan->UseVisualStyleBackColor = true;
			this->btnTaiKhoan->Click += gcnew System::EventHandler(this, &MainForm::btnTaiKhoan_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->btnCancel->Location = System::Drawing::Point(298, 222);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(155, 57);
			this->btnCancel->TabIndex = 4;
			this->btnCancel->Text = L"Thoát";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &MainForm::btnCancel_Click);
			// 
			// btnQuanLySach
			// 
			this->btnQuanLySach->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->btnQuanLySach->Location = System::Drawing::Point(12, 98);
			this->btnQuanLySach->Name = L"btnQuanLySach";
			this->btnQuanLySach->Size = System::Drawing::Size(170, 57);
			this->btnQuanLySach->TabIndex = 5;
			this->btnQuanLySach->Text = L"Quản Lý Sách";
			this->btnQuanLySach->UseVisualStyleBackColor = true;
			this->btnQuanLySach->Click += gcnew System::EventHandler(this, &MainForm::btnQuanLySach_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(440, 82);
			this->label1->TabIndex = 6;
			this->label1->Text = L"QUẢN LÝ";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// btnQuanLyKhachHang
			// 
			this->btnQuanLyKhachHang->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->btnQuanLyKhachHang->Location = System::Drawing::Point(12, 159);
			this->btnQuanLyKhachHang->Name = L"btnQuanLyKhachHang";
			this->btnQuanLyKhachHang->Size = System::Drawing::Size(170, 57);
			this->btnQuanLyKhachHang->TabIndex = 7;
			this->btnQuanLyKhachHang->Text = L"Quản Lý Khách Hàng";
			this->btnQuanLyKhachHang->UseVisualStyleBackColor = true;
			this->btnQuanLyKhachHang->Click += gcnew System::EventHandler(this, &MainForm::btnQuanLyKhachHang_Click);
			// 
			// btnQuanLyDonHang
			// 
			this->btnQuanLyDonHang->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->btnQuanLyDonHang->Location = System::Drawing::Point(12, 222);
			this->btnQuanLyDonHang->Name = L"btnQuanLyDonHang";
			this->btnQuanLyDonHang->Size = System::Drawing::Size(170, 57);
			this->btnQuanLyDonHang->TabIndex = 8;
			this->btnQuanLyDonHang->Text = L"Quản Lý Đơn Hàng";
			this->btnQuanLyDonHang->UseVisualStyleBackColor = true;
			this->btnQuanLyDonHang->Click += gcnew System::EventHandler(this, &MainForm::btnQuanLyDonHang_Click);
			// 
			// trogiup
			// 
			this->trogiup->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->trogiup->Location = System::Drawing::Point(298, 159);
			this->trogiup->Name = L"trogiup";
			this->trogiup->Size = System::Drawing::Size(155, 57);
			this->trogiup->TabIndex = 9;
			this->trogiup->Text = L"Yêu Cầu Trợ Giúp";
			this->trogiup->UseVisualStyleBackColor = true;
			this->trogiup->Click += gcnew System::EventHandler(this, &MainForm::trogiup_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(465, 350);
			this->Controls->Add(this->trogiup);
			this->Controls->Add(this->btnQuanLyDonHang);
			this->Controls->Add(this->btnQuanLyKhachHang);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnQuanLySach);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnTaiKhoan);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->ResumeLayout(false);

		}
#pragma endregion
			private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
				this->Close();
			}
			private: System::Void btnTaiKhoan_Click(System::Object^ sender, System::EventArgs^ e) {
				DoiMatKhauForm^ doiMatKhauForm = gcnew DoiMatKhauForm();
				doiMatKhauForm->ShowDialog();
			}

			private: System::Void btnQuanLyKhachHang_Click(System::Object^ sender, System::EventArgs^ e) {
				QuanLyKhachHangForm^ quanLyKhachHangForm = gcnew QuanLyKhachHangForm();
				quanLyKhachHangForm->ShowDialog();
			}

			private: System::Void btnQuanLySach_Click(System::Object^ sender, System::EventArgs^ e) {
				QuanLySachForm^ quanLySachForm = gcnew QuanLySachForm();
				quanLySachForm->ShowDialog();
			}

			private: System::Void btnQuanLyDonHang_Click(System::Object^ sender, System::EventArgs^ e) {
				CartItemsForm^ cartItemsForm = gcnew CartItemsForm();
				cartItemsForm->ShowDialog();
			}
			private: System::Void trogiup_Click(System::Object^ sender, System::EventArgs^ e) {
				TrogiupForm^ trogiupForm = gcnew TrogiupForm();
				trogiupForm->ShowDialog();
			}
};
}
