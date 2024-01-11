#pragma once
#include "trogiup.h"
namespace admin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	/// <summary>
	/// Summary for TrogiupForm
	/// </summary>
	public ref class TrogiupForm : public System::Windows::Forms::Form
	{
	public:
		TrogiupForm(void)
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
		~TrogiupForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^ listView1;
	protected:
	private: System::Windows::Forms::ColumnHeader^ ID;
	private: System::Windows::Forms::ColumnHeader^ gmail;
	private: System::Windows::Forms::ColumnHeader^ noidung;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: DevExpress::XtraBars::Ribbon::RadialMenu^ radialMenu1;
	private: System::Windows::Forms::RadioButton^ timtheogmail;
	private: System::Windows::Forms::RadioButton^ timtheonoidung;
	private: System::Windows::Forms::Button^ loadlistview;
	private: System::Windows::Forms::Button^ cancel;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->ID = (gcnew System::Windows::Forms::ColumnHeader());
			this->gmail = (gcnew System::Windows::Forms::ColumnHeader());
			this->noidung = (gcnew System::Windows::Forms::ColumnHeader());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->radialMenu1 = (gcnew DevExpress::XtraBars::Ribbon::RadialMenu(this->components));
			this->timtheogmail = (gcnew System::Windows::Forms::RadioButton());
			this->timtheonoidung = (gcnew System::Windows::Forms::RadioButton());
			this->loadlistview = (gcnew System::Windows::Forms::Button());
			this->cancel = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radialMenu1))->BeginInit();
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->ID, this->gmail,
					this->noidung
			});
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(13, 13);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(613, 290);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// ID
			// 
			this->ID->Text = L"ID";
			// 
			// gmail
			// 
			this->gmail->Text = L"gmail";
			this->gmail->Width = 254;
			// 
			// noidung
			// 
			this->noidung->Text = L"Nội Dung";
			this->noidung->Width = 303;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(633, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(176, 23);
			this->label1->TabIndex = 1;
			this->label1->Text = L"TÌM KIẾM";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(637, 40);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(172, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &TrogiupForm::textBox1_TextChanged);
			// 
			// radialMenu1
			// 
			this->radialMenu1->Name = L"radialMenu1";
			// 
			// timtheogmail
			// 
			this->timtheogmail->AutoSize = true;
			this->timtheogmail->Location = System::Drawing::Point(637, 78);
			this->timtheogmail->Name = L"timtheogmail";
			this->timtheogmail->Size = System::Drawing::Size(99, 17);
			this->timtheogmail->TabIndex = 3;
			this->timtheogmail->TabStop = true;
			this->timtheogmail->Text = L"Tìm Theo Gmail";
			this->timtheogmail->UseVisualStyleBackColor = true;
			this->timtheogmail->CheckedChanged += gcnew System::EventHandler(this, &TrogiupForm::timtheogmail_CheckedChanged);
			// 
			// timtheonoidung
			// 
			this->timtheonoidung->AutoSize = true;
			this->timtheonoidung->Location = System::Drawing::Point(637, 101);
			this->timtheonoidung->Name = L"timtheonoidung";
			this->timtheonoidung->Size = System::Drawing::Size(118, 17);
			this->timtheonoidung->TabIndex = 4;
			this->timtheonoidung->TabStop = true;
			this->timtheonoidung->Text = L"Tìm Theo Nội Dung";
			this->timtheonoidung->UseVisualStyleBackColor = true;
			this->timtheonoidung->CheckedChanged += gcnew System::EventHandler(this, &TrogiupForm::timtheonoidung_CheckedChanged);
			// 
			// loadlistview
			// 
			this->loadlistview->Location = System::Drawing::Point(637, 124);
			this->loadlistview->Name = L"loadlistview";
			this->loadlistview->Size = System::Drawing::Size(172, 40);
			this->loadlistview->TabIndex = 5;
			this->loadlistview->Text = L"Load List";
			this->loadlistview->UseVisualStyleBackColor = true;
			this->loadlistview->Click += gcnew System::EventHandler(this, &TrogiupForm::loadlistview_Click);
			// 
			// cancel
			// 
			this->cancel->Location = System::Drawing::Point(637, 263);
			this->cancel->Name = L"cancel";
			this->cancel->Size = System::Drawing::Size(172, 40);
			this->cancel->TabIndex = 6;
			this->cancel->Text = L"Thoát";
			this->cancel->UseVisualStyleBackColor = true;
			this->cancel->Click += gcnew System::EventHandler(this, &TrogiupForm::cancel_Click);
			// 
			// TrogiupForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(821, 387);
			this->Controls->Add(this->cancel);
			this->Controls->Add(this->loadlistview);
			this->Controls->Add(this->timtheonoidung);
			this->Controls->Add(this->timtheogmail);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listView1);
			this->Name = L"TrogiupForm";
			this->Text = L"TrogiupForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radialMenu1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void loadlistview_Click(System::Object^ sender, System::EventArgs^ e) {
		// Xóa dữ liệu hiện có trong ListView
		listView1->Items->Clear();

		try {
			// Chuỗi kết nối đến cơ sở dữ liệu
			String^ connString = "Data Source=desktop-rkei9e8\\sqlexpress;Initial Catalog=QLsach;Integrated Security=True; MultipleActiveResultSets=True";

			// Kết nối đến cơ sở dữ liệu
			SqlConnection^ connection = gcnew SqlConnection(connString);
			connection->Open();

			// Tạo câu lệnh SQL để lấy dữ liệu từ bảng trogiup
			String^ query = "SELECT [ID], [gmail], [noidung] FROM [trogiup]"; // Thay đổi truy vấn nếu cần

			// Tạo đối tượng SqlCommand
			SqlCommand^ command = gcnew SqlCommand(query, connection);

			// Tạo đối tượng SqlDataReader để đọc dữ liệu
			SqlDataReader^ reader = command->ExecuteReader();

			// Duyệt và thêm dữ liệu vào ListView
			while (reader->Read()) {
				array<String^>^ row = { reader["ID"]->ToString(), reader["gmail"]->ToString(), reader["noidung"]->ToString() };
				ListViewItem^ listViewItem = gcnew ListViewItem(row);
				listView1->Items->Add(listViewItem);
			}

			// Đóng kết nối và giải phóng tài nguyên
			reader->Close();
			connection->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Lỗi: " + ex->Message, "Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

		private: System::Void cancel_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
		}
		private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			SearchListView();
		}
		private: System::Void timtheonoidung_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			SearchListView();
		}
		private: System::Void timtheogmail_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			SearchListView();
		}
private: System::Void SearchListView() {
	// Xóa dữ liệu hiện có trong ListView
	listView1->Items->Clear();

	try {
		// Chuỗi kết nối đến cơ sở dữ liệu
		String^ connString = "Data Source=desktop-rkei9e8\\sqlexpress;Initial Catalog=QLsach;Integrated Security=True; MultipleActiveResultSets=True";

		// Kết nối đến cơ sở dữ liệu
		SqlConnection^ connection = gcnew SqlConnection(connString);
		connection->Open();

		// Tạo câu lệnh SQL tìm kiếm theo Gmail hoặc Nội dung tùy theo RadioButton được chọn
		String^ columnName = (timtheogmail->Checked) ? "gmail" : "noidung";
		String^ searchText = textBox1->Text;
		String^ query = String::Format("SELECT [ID], [gmail], [noidung] FROM [trogiup] WHERE [{0}] LIKE '%{1}%'", columnName, searchText);

		// Tạo đối tượng SqlCommand
		SqlCommand^ command = gcnew SqlCommand(query, connection);

		// Tạo đối tượng SqlDataReader để đọc dữ liệu
		SqlDataReader^ reader = command->ExecuteReader();

		// Duyệt và thêm dữ liệu vào ListView
		while (reader->Read()) {
			array<String^>^ row = { reader["ID"]->ToString(), reader["gmail"]->ToString(), reader["noidung"]->ToString() };
			ListViewItem^ listViewItem = gcnew ListViewItem(row);
			listView1->Items->Add(listViewItem);
		}

		// Đóng kết nối và giải phóng tài nguyên
		reader->Close();
		connection->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Lỗi: " + ex->Message, "Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
