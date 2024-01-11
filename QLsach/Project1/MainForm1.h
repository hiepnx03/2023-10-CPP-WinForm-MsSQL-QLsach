#pragma once
#include "User.h"
#include "Book.h"
#include "DoiMatKhauForm.h"
#include "GioHangForm.h"
#include "TroGiupForm.h"
#include "CartItem.h"
#include <vector>     // Include the vector header for storing cart items.


namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for MainForm1
	/// </summary>
	public ref class MainForm1 : public System::Windows::Forms::Form
	{
	private:
		List<CartItem^>^ shoppingCart; // Declare the shopping cart list
	public:
		MainForm1(User ^user)
		{
			InitializeComponent();
			// Initialize the shopping cart
			shoppingCart = gcnew List<CartItem^>();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ btnTaiKhoan;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Button^ btnTrogiup;

	private: System::Windows::Forms::Button^ btnThemVaoGioHang;
	private: System::Windows::Forms::RadioButton^ radTimKiemTheoTacGia;
	private: System::Windows::Forms::RadioButton^ radTimkiemtheoTieuDe;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ btnloadtable;
	private: System::Windows::Forms::ListView^ listView;
	private: System::Windows::Forms::ColumnHeader^ book_id;
	private: System::Windows::Forms::ColumnHeader^ title;
	private: System::Windows::Forms::ColumnHeader^ author;
	private: System::Windows::Forms::ColumnHeader^ price;
	private: System::Windows::Forms::ColumnHeader^ image_url;
	private: System::Windows::Forms::ColumnHeader^ description;
	private: System::Windows::Forms::ColumnHeader^ promotion_info;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbnhapbook_id;
	private: System::Windows::Forms::TextBox^ tbnhapUsername;
	private: System::Windows::Forms::Label^ label4;
	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnTaiKhoan = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnTrogiup = (gcnew System::Windows::Forms::Button());
			this->btnThemVaoGioHang = (gcnew System::Windows::Forms::Button());
			this->radTimKiemTheoTacGia = (gcnew System::Windows::Forms::RadioButton());
			this->radTimkiemtheoTieuDe = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->btnloadtable = (gcnew System::Windows::Forms::Button());
			this->listView = (gcnew System::Windows::Forms::ListView());
			this->book_id = (gcnew System::Windows::Forms::ColumnHeader());
			this->title = (gcnew System::Windows::Forms::ColumnHeader());
			this->author = (gcnew System::Windows::Forms::ColumnHeader());
			this->price = (gcnew System::Windows::Forms::ColumnHeader());
			this->image_url = (gcnew System::Windows::Forms::ColumnHeader());
			this->description = (gcnew System::Windows::Forms::ColumnHeader());
			this->promotion_info = (gcnew System::Windows::Forms::ColumnHeader());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbnhapbook_id = (gcnew System::Windows::Forms::TextBox());
			this->tbnhapUsername = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1446, 65);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Thư Viện Sách";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// btnTaiKhoan
			// 
			this->btnTaiKhoan->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->btnTaiKhoan->Location = System::Drawing::Point(1231, 484);
			this->btnTaiKhoan->Name = L"btnTaiKhoan";
			this->btnTaiKhoan->Size = System::Drawing::Size(229, 55);
			this->btnTaiKhoan->TabIndex = 2;
			this->btnTaiKhoan->Text = L"Đổi Mật Khẩu";
			this->btnTaiKhoan->UseVisualStyleBackColor = true;
			this->btnTaiKhoan->Click += gcnew System::EventHandler(this, &MainForm1::btnTaiKhoan_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->btnCancel->Location = System::Drawing::Point(1231, 608);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(229, 57);
			this->btnCancel->TabIndex = 3;
			this->btnCancel->Text = L"Thoát";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &MainForm1::btnCancel_Click);
			// 
			// btnTrogiup
			// 
			this->btnTrogiup->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->btnTrogiup->Location = System::Drawing::Point(1231, 545);
			this->btnTrogiup->Name = L"btnTrogiup";
			this->btnTrogiup->Size = System::Drawing::Size(229, 57);
			this->btnTrogiup->TabIndex = 4;
			this->btnTrogiup->Text = L"Trợ Giúp";
			this->btnTrogiup->UseVisualStyleBackColor = true;
			this->btnTrogiup->Click += gcnew System::EventHandler(this, &MainForm1::btnTrogiup_Click);
			// 
			// btnThemVaoGioHang
			// 
			this->btnThemVaoGioHang->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->btnThemVaoGioHang->Location = System::Drawing::Point(1230, 292);
			this->btnThemVaoGioHang->Name = L"btnThemVaoGioHang";
			this->btnThemVaoGioHang->Size = System::Drawing::Size(229, 55);
			this->btnThemVaoGioHang->TabIndex = 7;
			this->btnThemVaoGioHang->Text = L"MUA HÀNG";
			this->btnThemVaoGioHang->UseVisualStyleBackColor = true;
			this->btnThemVaoGioHang->Click += gcnew System::EventHandler(this, &MainForm1::btnThemVaoGioHang_Click);
			// 
			// radTimKiemTheoTacGia
			// 
			this->radTimKiemTheoTacGia->AutoSize = true;
			this->radTimKiemTheoTacGia->Location = System::Drawing::Point(1227, 163);
			this->radTimKiemTheoTacGia->Name = L"radTimKiemTheoTacGia";
			this->radTimKiemTheoTacGia->Size = System::Drawing::Size(91, 17);
			this->radTimKiemTheoTacGia->TabIndex = 8;
			this->radTimKiemTheoTacGia->TabStop = true;
			this->radTimKiemTheoTacGia->Text = L"Theo Tác Giả";
			this->radTimKiemTheoTacGia->UseVisualStyleBackColor = true;
			this->radTimKiemTheoTacGia->CheckedChanged += gcnew System::EventHandler(this, &MainForm1::radTimKiemTheoTacGia_CheckedChanged);
			// 
			// radTimkiemtheoTieuDe
			// 
			this->radTimkiemtheoTieuDe->AutoSize = true;
			this->radTimkiemtheoTieuDe->Location = System::Drawing::Point(1370, 163);
			this->radTimkiemtheoTieuDe->Name = L"radTimkiemtheoTieuDe";
			this->radTimkiemtheoTieuDe->Size = System::Drawing::Size(91, 17);
			this->radTimkiemtheoTieuDe->TabIndex = 10;
			this->radTimkiemtheoTieuDe->TabStop = true;
			this->radTimkiemtheoTieuDe->Text = L"Theo Tiêu Đề";
			this->radTimkiemtheoTieuDe->UseVisualStyleBackColor = true;
			this->radTimkiemtheoTieuDe->CheckedChanged += gcnew System::EventHandler(this, &MainForm1::radTimkiemtheoTieuDe_CheckedChanged);
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->label2->Location = System::Drawing::Point(1227, 110);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(233, 35);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Nhập Thông Tin Cần Tìm Kiếm";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(1227, 137);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(233, 20);
			this->textBox1->TabIndex = 14;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MainForm1::textBox1_TextChanged);
			// 
			// btnloadtable
			// 
			this->btnloadtable->Location = System::Drawing::Point(1230, 353);
			this->btnloadtable->Name = L"btnloadtable";
			this->btnloadtable->Size = System::Drawing::Size(230, 51);
			this->btnloadtable->TabIndex = 15;
			this->btnloadtable->Text = L"Load table";
			this->btnloadtable->UseVisualStyleBackColor = true;
			this->btnloadtable->Click += gcnew System::EventHandler(this, &MainForm1::btnloadtable_Click);
			// 
			// listView
			// 
			this->listView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(7) {
				this->book_id, this->title,
					this->author, this->price, this->image_url, this->description, this->promotion_info
			});
			this->listView->HideSelection = false;
			this->listView->Location = System::Drawing::Point(12, 110);
			this->listView->Name = L"listView";
			this->listView->Size = System::Drawing::Size(1209, 555);
			this->listView->TabIndex = 16;
			this->listView->UseCompatibleStateImageBehavior = false;
			this->listView->View = System::Windows::Forms::View::Details;
			this->listView->ItemChecked += gcnew System::Windows::Forms::ItemCheckedEventHandler(this, &MainForm1::listView_ItemChecked);
			this->listView->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm1::listView_SelectedIndexChanged);
			// 
			// book_id
			// 
			this->book_id->Text = L"book_id";
			this->book_id->Width = 100;
			// 
			// title
			// 
			this->title->Text = L"title";
			this->title->Width = 142;
			// 
			// author
			// 
			this->author->Text = L"author";
			this->author->Width = 150;
			// 
			// price
			// 
			this->price->Text = L"price";
			this->price->Width = 80;
			// 
			// image_url
			// 
			this->image_url->Text = L"image_url";
			this->image_url->Width = 250;
			// 
			// description
			// 
			this->description->Text = L"description";
			this->description->Width = 192;
			// 
			// promotion_info
			// 
			this->promotion_info->Text = L"promotion_info";
			this->promotion_info->Width = 200;
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->label3->Location = System::Drawing::Point(1228, 194);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(233, 25);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Nhập book_id để mua hàng";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// tbnhapbook_id
			// 
			this->tbnhapbook_id->Location = System::Drawing::Point(1232, 222);
			this->tbnhapbook_id->Name = L"tbnhapbook_id";
			this->tbnhapbook_id->Size = System::Drawing::Size(228, 20);
			this->tbnhapbook_id->TabIndex = 18;
			this->tbnhapbook_id->TextChanged += gcnew System::EventHandler(this, &MainForm1::tbnhapbook_id_TextChanged);
			// 
			// tbnhapUsername
			// 
			this->tbnhapUsername->Location = System::Drawing::Point(1232, 273);
			this->tbnhapUsername->Name = L"tbnhapUsername";
			this->tbnhapUsername->Size = System::Drawing::Size(228, 20);
			this->tbnhapUsername->TabIndex = 20;
			this->tbnhapUsername->TextChanged += gcnew System::EventHandler(this, &MainForm1::tbnhapUsername_TextChanged);
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->label4->Location = System::Drawing::Point(1229, 246);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(233, 24);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Nhập Username để mua hàng";
			this->label4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// MainForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(1471, 677);
			this->Controls->Add(this->tbnhapUsername);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->tbnhapbook_id);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->listView);
			this->Controls->Add(this->btnloadtable);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->radTimkiemtheoTieuDe);
			this->Controls->Add(this->radTimKiemTheoTacGia);
			this->Controls->Add(this->btnThemVaoGioHang);
			this->Controls->Add(this->btnTrogiup);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnTaiKhoan);
			this->Controls->Add(this->label1);
			this->Name = L"MainForm1";
			this->Text = L"MainForm1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
				public: Book^ book = nullptr;
				private: System::Void LoadData() {
				}

				private: System::Void viewBook_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
				}

				private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
					this->Close();
				}

				private: System::Void btnTaiKhoan_Click(System::Object^ sender, System::EventArgs^ e) {
					DoiMatKhauForm^ doiMatKhauForm = gcnew DoiMatKhauForm();
					doiMatKhauForm->ShowDialog();
				}
			//giỏ hàng
					   // Định nghĩa phương thức AddCartItemToDisplay để thêm thông tin mục hàng vào ListView



				private: System::Void btnGioHangCuaToi_Click(System::Object^ sender, System::EventArgs^ e) {
					GioHangForm^ gioHangForm = gcnew GioHangForm();
					gioHangForm->ShowDialog();
				}

				private: System::Void btnTrogiup_Click(System::Object^ sender, System::EventArgs^ e) {
					TroGiupForm^ troGiupForm = gcnew TroGiupForm();
					troGiupForm->ShowDialog();
				}

			private: System::Void btnloadtable_Click(System::Object^ sender, System::EventArgs^ e) {
				String^ connString = "Data Source=desktop-rkei9e8\\sqlexpress;Initial Catalog=QLsach;Integrated Security=True";
				String^ query = "SELECT *  FROM [QLsach].[dbo].[Books]";
				SqlConnection^ conn = gcnew SqlConnection(connString);
				SqlCommand^ cmd = gcnew SqlCommand(query, conn);

				try {
					conn->Open();
					SqlDataReader^ reader = cmd->ExecuteReader();

					listView->Items->Clear();

					while (reader->Read()) {
						ListViewItem^ item = gcnew ListViewItem(reader["book_id"]->ToString());
						item->SubItems->Add(reader["title"]->ToString());
						item->SubItems->Add(reader["author"]->ToString());
						item->SubItems->Add(reader["price"]->ToString());
						item->SubItems->Add(reader["image_url"]->ToString());
						item->SubItems->Add(reader["description"]->ToString());
						item->SubItems->Add(reader["promotion_info"]->ToString());
						listView->Items->Add(item);
					}

					reader->Close();
				}
				catch (Exception^ ex) {
					MessageBox::Show(ex->Message);
				}
				finally {
					conn->Close();
				}
			}

			private: System::Void listView_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

			}

			private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
				SearchBooks();
			}

			private: System::Void radTimKiemTheoTacGia_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
				// Handle the author search option, if needed
				if (radTimKiemTheoTacGia->Checked) {
					SearchBooks();
				}
			}

			private: System::Void radTimkiemtheoTieuDe_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
				// Handle the title search option, if needed
				if (radTimkiemtheoTieuDe->Checked) {
					SearchBooks();
				}
			}

			private: System::Void SearchBooks() {
				String^ connString = "Data Source=desktop-rkei9e8\\sqlexpress;Initial Catalog=QLsach;Integrated Security=True";
				String^ query;

				if (radTimKiemTheoTacGia->Checked) {
					// Search by author's name
					query = "SELECT * FROM [QLsach].[dbo].[Books] WHERE author LIKE @author";
				}
				else {
					// Search by title
					query = "SELECT * FROM [QLsach].[dbo].[Books] WHERE title LIKE @title";
				}

				SqlConnection^ conn = gcnew SqlConnection(connString);
				SqlCommand^ cmd = gcnew SqlCommand(query, conn);

				try {
					conn->Open();
					if (radTimKiemTheoTacGia->Checked) {
						cmd->Parameters->Add(gcnew SqlParameter("@author", "%" + textBox1->Text + "%"));
					}
					else {
						cmd->Parameters->Add(gcnew SqlParameter("@title", "%" + textBox1->Text + "%"));
					}

					SqlDataReader^ reader = cmd->ExecuteReader();

					listView->Items->Clear();

					while (reader->Read()) {
						ListViewItem^ item = gcnew ListViewItem(reader["book_id"]->ToString());
						item->SubItems->Add(reader["title"]->ToString());
						item->SubItems->Add(reader["author"]->ToString());
						item->SubItems->Add(reader["price"]->ToString());
						item->SubItems->Add(reader["image_url"]->ToString());
						item->SubItems->Add(reader["description"]->ToString());
						item->SubItems->Add(reader["promotion_info"]->ToString());
						listView->Items->Add(item);
					}

					reader->Close();
				}
				catch (Exception^ ex) {
					MessageBox::Show(ex->Message);
				}
				finally {
					conn->Close();
				}
			}

				   void UpdateCartListView() {
				   }

			private: System::Void btnThemVaoGioHang_Click(System::Object^ sender, System::EventArgs^ e) {
				if (tbnhapbook_id->Text != "" && tbnhapUsername->Text != "") {
					int bookID = Int32::Parse(tbnhapbook_id->Text);
					String^ username = tbnhapUsername->Text;

					// Tạo kết nối SQL và truy vấn để thêm sách vào giỏ hàng
					String^ connString = "Data Source=desktop-rkei9e8\\sqlexpress;Initial Catalog=QLsach;Integrated Security=True";
					String^ query = "INSERT INTO CartItems (book_id, username, quantity) VALUES (@bookID, @username, 1)";

					SqlConnection^ conn = gcnew SqlConnection(connString);
					SqlCommand^ cmd = gcnew SqlCommand(query, conn);
					cmd->Parameters->Add(gcnew SqlParameter("@bookID", bookID));
					cmd->Parameters->Add(gcnew SqlParameter("@username", username));

					try {
						conn->Open();
						cmd->ExecuteNonQuery();
						conn->Close();
					}
					catch (Exception^ ex) {
						MessageBox::Show(ex->Message);
					}
					MessageBox::Show("Mua hàng thành công");
				}

			}



				   private: System::Void listView_ItemChecked(System::Object^ sender, System::Windows::Forms::ItemCheckedEventArgs^ e) {
					   if (e->Item->Checked) {
						   int bookID = Int32::Parse(e->Item->SubItems[0]->Text);
						   String^ title = e->Item->SubItems[1]->Text;
						   String^ author = e->Item->SubItems[2]->Text;
						   double price = Double::Parse(e->Item->SubItems[3]->Text);
						   bool itemExistsInCart = false;
						   for each (CartItem ^ item in shoppingCart) {
							   if (item->BookID == bookID) {
								   item->Quantity++;
								   itemExistsInCart = true;
								   break;
							   }
						   }
						   if (!itemExistsInCart) {
							   CartItem^ newItem = gcnew CartItem(bookID, title, author, price);
							   shoppingCart->Add(newItem);
						   }
						   UpdateCartListView();
					   }
				   }

					private: System::Void tbnhapbook_id_TextChanged(System::Object^ sender, System::EventArgs^ e) {

					}
					private: System::Void tbnhapUsername_TextChanged(System::Object^ sender, System::EventArgs^ e) {
					}
};
}
