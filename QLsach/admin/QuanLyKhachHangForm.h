#pragma once
#include "Users.h"
namespace admin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for QuanLyKhachHangForm
	/// </summary>
	public ref class QuanLyKhachHangForm : public System::Windows::Forms::Form
	{
	public:
		QuanLyKhachHangForm(void)
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
		~QuanLyKhachHangForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^ listViewUsers;
	protected:
	private: System::Windows::Forms::ColumnHeader^ user_id;
	private: System::Windows::Forms::ColumnHeader^ username;
	private: System::Windows::Forms::ColumnHeader^ full_name;
	private: System::Windows::Forms::ColumnHeader^ email;
	private: System::Windows::Forms::ColumnHeader^ phone;
	private: System::Windows::Forms::ColumnHeader^ created_at;
	private: System::Windows::Forms::ColumnHeader^ last_login;
	private: System::Windows::Forms::Button^ btnLoadListviewUsers;
	private: System::Windows::Forms::Button^ btnXoa;
	private: System::Windows::Forms::TextBox^ btnNhapId;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ Cancel;


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
			this->listViewUsers = (gcnew System::Windows::Forms::ListView());
			this->user_id = (gcnew System::Windows::Forms::ColumnHeader());
			this->username = (gcnew System::Windows::Forms::ColumnHeader());
			this->full_name = (gcnew System::Windows::Forms::ColumnHeader());
			this->email = (gcnew System::Windows::Forms::ColumnHeader());
			this->phone = (gcnew System::Windows::Forms::ColumnHeader());
			this->created_at = (gcnew System::Windows::Forms::ColumnHeader());
			this->last_login = (gcnew System::Windows::Forms::ColumnHeader());
			this->btnLoadListviewUsers = (gcnew System::Windows::Forms::Button());
			this->btnXoa = (gcnew System::Windows::Forms::Button());
			this->btnNhapId = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Cancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listViewUsers
			// 
			this->listViewUsers->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(7) {
				this->user_id, this->username,
					this->full_name, this->email, this->phone, this->created_at, this->last_login
			});
			this->listViewUsers->HideSelection = false;
			this->listViewUsers->Location = System::Drawing::Point(13, 13);
			this->listViewUsers->Name = L"listViewUsers";
			this->listViewUsers->Size = System::Drawing::Size(518, 331);
			this->listViewUsers->TabIndex = 0;
			this->listViewUsers->UseCompatibleStateImageBehavior = false;
			this->listViewUsers->View = System::Windows::Forms::View::Details;
			// 
			// user_id
			// 
			this->user_id->Text = L"user_id";
			// 
			// username
			// 
			this->username->Text = L"username";
			// 
			// full_name
			// 
			this->full_name->Text = L"full_name";
			// 
			// email
			// 
			this->email->Text = L"email";
			// 
			// phone
			// 
			this->phone->Text = L"phone";
			// 
			// created_at
			// 
			this->created_at->Text = L"created_at";
			// 
			// last_login
			// 
			this->last_login->Text = L"last_login";
			// 
			// btnLoadListviewUsers
			// 
			this->btnLoadListviewUsers->Location = System::Drawing::Point(538, 13);
			this->btnLoadListviewUsers->Name = L"btnLoadListviewUsers";
			this->btnLoadListviewUsers->Size = System::Drawing::Size(151, 91);
			this->btnLoadListviewUsers->TabIndex = 1;
			this->btnLoadListviewUsers->Text = L"Load Users";
			this->btnLoadListviewUsers->UseVisualStyleBackColor = true;
			this->btnLoadListviewUsers->Click += gcnew System::EventHandler(this, &QuanLyKhachHangForm::btnLoadListviewUsers_Click);
			// 
			// btnXoa
			// 
			this->btnXoa->Location = System::Drawing::Point(538, 170);
			this->btnXoa->Name = L"btnXoa";
			this->btnXoa->Size = System::Drawing::Size(151, 91);
			this->btnXoa->TabIndex = 2;
			this->btnXoa->Text = L"Xóa";
			this->btnXoa->UseVisualStyleBackColor = true;
			this->btnXoa->Click += gcnew System::EventHandler(this, &QuanLyKhachHangForm::btnXoa_Click);
			// 
			// btnNhapId
			// 
			this->btnNhapId->Location = System::Drawing::Point(538, 144);
			this->btnNhapId->Name = L"btnNhapId";
			this->btnNhapId->Size = System::Drawing::Size(148, 20);
			this->btnNhapId->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(538, 107);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(148, 23);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Nhập ID Muốn Xóa";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// Cancel
			// 
			this->Cancel->Location = System::Drawing::Point(541, 267);
			this->Cancel->Name = L"Cancel";
			this->Cancel->Size = System::Drawing::Size(148, 77);
			this->Cancel->TabIndex = 5;
			this->Cancel->Text = L"Thoát";
			this->Cancel->UseVisualStyleBackColor = true;
			this->Cancel->Click += gcnew System::EventHandler(this, &QuanLyKhachHangForm::Cancel_Click);
			// 
			// QuanLyKhachHangForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(698, 356);
			this->Controls->Add(this->Cancel);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnNhapId);
			this->Controls->Add(this->btnXoa);
			this->Controls->Add(this->btnLoadListviewUsers);
			this->Controls->Add(this->listViewUsers);
			this->Name = L"QuanLyKhachHangForm";
			this->Text = L"QuanLyKhachHangForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
			private: System::Void btnLoadListviewUsers_Click(System::Object^ sender, System::EventArgs^ e) {
				String^ connString = "Data Source=desktop-rkei9e8\\sqlexpress;Initial Catalog=QLsach;Integrated Security=True; MultipleActiveResultSets=true";
				SqlConnection^ conn = gcnew SqlConnection(connString);
				try {
					// Mở kết nối
					conn->Open();

					// Chuỗi truy vấn SQL
					String^ query = "SELECT [user_id], [username], [full_name], [email], [phone], [created_at], [last_login] FROM [QLsach].[dbo].[users]";
					SqlCommand^ cmd = gcnew SqlCommand(query, conn);
					SqlDataReader^ reader = cmd->ExecuteReader();

					// Xóa dữ liệu cũ trong ListView trước khi cập nhật dữ liệu mới
					listViewUsers->Items->Clear();

					// Với mỗi dòng dữ liệu trong kết quả truy vấn, thêm vào ListView
					while (reader->Read()) {
						ListViewItem^ item = gcnew ListViewItem(reader->GetInt32(0).ToString()); // user_id
						item->SubItems->Add(reader->GetString(1)); // username
						item->SubItems->Add(reader->GetString(2)); // full_name
						item->SubItems->Add(reader->GetString(3)); // email
						item->SubItems->Add(reader->GetString(4)); // phone
						item->SubItems->Add(reader->GetDateTime(5).ToString()); // created_at
						item->SubItems->Add(reader->GetDateTime(6).ToString()); // last_login

						listViewUsers->Items->Add(item);
					}
				}
				catch (Exception^ ex) {
					// Xử lý nếu có lỗi
					MessageBox::Show(ex->Message);
				}
				finally {
					// Đóng kết nối sau khi hoàn thành
					if (conn != nullptr)
						conn->Close();
				}
			}

			private: System::Void btnXoa_Click(System::Object^ sender, System::EventArgs^ e) {
				String^ connString = "Data Source=desktop-rkei9e8\\sqlexpress;Initial Catalog=QLsach;Integrated Security=True; MultipleActiveResultSets=true";
				SqlConnection^ conn = gcnew SqlConnection(connString);
				try {
					// Mở kết nối
					conn->Open();

					// Lấy ID từ TextBox
					int userIdToDelete = Int32::Parse(btnNhapId->Text);

					// Chuỗi truy vấn SQL để xóa
					String^ query = "DELETE FROM [QLsach].[dbo].[users] WHERE [user_id] = @UserId";
					SqlCommand^ cmd = gcnew SqlCommand(query, conn);
					cmd->Parameters->AddWithValue("@UserId", userIdToDelete);

					// Thực hiện truy vấn xóa
					int rowsAffected = cmd->ExecuteNonQuery();

					if (rowsAffected > 0) {
						MessageBox::Show("Đã xóa thành công!");
						// Sau khi xóa thành công, cập nhật lại ListView
						btnLoadListviewUsers_Click(sender, e);
					}
					else {
						MessageBox::Show("Không tìm thấy ID hoặc xảy ra lỗi khi xóa!");
					}
				}
				catch (Exception^ ex) {
					// Xử lý nếu có lỗi
					MessageBox::Show(ex->Message);
				}
				finally {
					// Đóng kết nối sau khi hoàn thành
					if (conn != nullptr)
						conn->Close();
				}
			}

private: System::Void Cancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
