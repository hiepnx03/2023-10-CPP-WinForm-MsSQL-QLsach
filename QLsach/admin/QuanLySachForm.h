#pragma once
#include "Books.h"
namespace admin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	/// <summary>
	/// Summary for QuanLySachForm
	/// </summary>
	public ref class QuanLySachForm : public System::Windows::Forms::Form
	{
	public:
		QuanLySachForm(void)
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
		~QuanLySachForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^ listView1;
	protected:
	private: System::Windows::Forms::ColumnHeader^ book_id;
	private: System::Windows::Forms::ColumnHeader^ title;
	private: System::Windows::Forms::ColumnHeader^ author;
	private: System::Windows::Forms::ColumnHeader^ price;
	private: System::Windows::Forms::ColumnHeader^ image_url;
	private: System::Windows::Forms::ColumnHeader^ description;
	private: System::Windows::Forms::ColumnHeader^ promotion_info;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ btnNhapId;
	private: System::Windows::Forms::Button^ btnXoa;
	private: System::Windows::Forms::Button^ btnLoadListviewBooks;
	private: System::Windows::Forms::Button^ Cancel;
	private: System::Windows::Forms::Button^ btnThemSach;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbauthor;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbprice;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tbimage_url;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ tbdescription;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ tbpromotion_info;
	private: System::Windows::Forms::TextBox^ tbtitle;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ tbbook_id;
	private: System::Windows::Forms::Button^ btnSuaSach;




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
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->book_id = (gcnew System::Windows::Forms::ColumnHeader());
			this->title = (gcnew System::Windows::Forms::ColumnHeader());
			this->author = (gcnew System::Windows::Forms::ColumnHeader());
			this->price = (gcnew System::Windows::Forms::ColumnHeader());
			this->image_url = (gcnew System::Windows::Forms::ColumnHeader());
			this->description = (gcnew System::Windows::Forms::ColumnHeader());
			this->promotion_info = (gcnew System::Windows::Forms::ColumnHeader());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnNhapId = (gcnew System::Windows::Forms::TextBox());
			this->btnXoa = (gcnew System::Windows::Forms::Button());
			this->btnLoadListviewBooks = (gcnew System::Windows::Forms::Button());
			this->Cancel = (gcnew System::Windows::Forms::Button());
			this->btnThemSach = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbauthor = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbprice = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbimage_url = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tbdescription = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tbpromotion_info = (gcnew System::Windows::Forms::TextBox());
			this->tbtitle = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tbbook_id = (gcnew System::Windows::Forms::TextBox());
			this->btnSuaSach = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(7) {
				this->book_id, this->title,
					this->author, this->price, this->image_url, this->description, this->promotion_info
			});
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(12, 12);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(637, 345);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// book_id
			// 
			this->book_id->Text = L"book_id";
			// 
			// title
			// 
			this->title->Text = L"title";
			// 
			// author
			// 
			this->author->Text = L"author";
			// 
			// price
			// 
			this->price->Text = L"price";
			this->price->Width = 72;
			// 
			// image_url
			// 
			this->image_url->Text = L"image_url";
			this->image_url->Width = 104;
			// 
			// description
			// 
			this->description->Text = L"description";
			this->description->Width = 110;
			// 
			// promotion_info
			// 
			this->promotion_info->Text = L"promotion_info";
			this->promotion_info->Width = 174;
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(655, 106);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(154, 23);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Nhập ID Muốn Xóa";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// btnNhapId
			// 
			this->btnNhapId->Location = System::Drawing::Point(655, 143);
			this->btnNhapId->Name = L"btnNhapId";
			this->btnNhapId->Size = System::Drawing::Size(154, 20);
			this->btnNhapId->TabIndex = 7;
			// 
			// btnXoa
			// 
			this->btnXoa->Location = System::Drawing::Point(655, 169);
			this->btnXoa->Name = L"btnXoa";
			this->btnXoa->Size = System::Drawing::Size(154, 91);
			this->btnXoa->TabIndex = 6;
			this->btnXoa->Text = L"Xóa";
			this->btnXoa->UseVisualStyleBackColor = true;
			this->btnXoa->Click += gcnew System::EventHandler(this, &QuanLySachForm::btnXoa_Click);
			// 
			// btnLoadListviewBooks
			// 
			this->btnLoadListviewBooks->Location = System::Drawing::Point(655, 12);
			this->btnLoadListviewBooks->Name = L"btnLoadListviewBooks";
			this->btnLoadListviewBooks->Size = System::Drawing::Size(154, 91);
			this->btnLoadListviewBooks->TabIndex = 5;
			this->btnLoadListviewBooks->Text = L"Load Book";
			this->btnLoadListviewBooks->UseVisualStyleBackColor = true;
			this->btnLoadListviewBooks->Click += gcnew System::EventHandler(this, &QuanLySachForm::btnLoadListviewBooks_Click);
			// 
			// Cancel
			// 
			this->Cancel->Location = System::Drawing::Point(655, 266);
			this->Cancel->Name = L"Cancel";
			this->Cancel->Size = System::Drawing::Size(154, 91);
			this->Cancel->TabIndex = 9;
			this->Cancel->Text = L"Thoát";
			this->Cancel->UseVisualStyleBackColor = true;
			this->Cancel->Click += gcnew System::EventHandler(this, &QuanLySachForm::Cancel_Click);
			// 
			// btnThemSach
			// 
			this->btnThemSach->Location = System::Drawing::Point(12, 363);
			this->btnThemSach->Name = L"btnThemSach";
			this->btnThemSach->Size = System::Drawing::Size(797, 48);
			this->btnThemSach->TabIndex = 10;
			this->btnThemSach->Text = L"Thêm Sách";
			this->btnThemSach->UseVisualStyleBackColor = true;
			this->btnThemSach->Click += gcnew System::EventHandler(this, &QuanLySachForm::btnThemSach_Click);
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(256, 417);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(108, 23);
			this->label3->TabIndex = 14;
			this->label3->Text = L"author";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label3->Click += gcnew System::EventHandler(this, &QuanLySachForm::label3_Click);
			// 
			// tbauthor
			// 
			this->tbauthor->Location = System::Drawing::Point(253, 454);
			this->tbauthor->Name = L"tbauthor";
			this->tbauthor->Size = System::Drawing::Size(111, 20);
			this->tbauthor->TabIndex = 13;
			this->tbauthor->TextChanged += gcnew System::EventHandler(this, &QuanLySachForm::tbauthor_TextChanged);
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(370, 417);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(94, 23);
			this->label4->TabIndex = 16;
			this->label4->Text = L"price";
			this->label4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label4->Click += gcnew System::EventHandler(this, &QuanLySachForm::label4_Click);
			// 
			// tbprice
			// 
			this->tbprice->Location = System::Drawing::Point(367, 454);
			this->tbprice->Name = L"tbprice";
			this->tbprice->Size = System::Drawing::Size(97, 20);
			this->tbprice->TabIndex = 15;
			this->tbprice->TextChanged += gcnew System::EventHandler(this, &QuanLySachForm::tbprice_TextChanged);
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(470, 417);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(103, 23);
			this->label5->TabIndex = 18;
			this->label5->Text = L"image_url";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// tbimage_url
			// 
			this->tbimage_url->Location = System::Drawing::Point(467, 454);
			this->tbimage_url->Name = L"tbimage_url";
			this->tbimage_url->Size = System::Drawing::Size(106, 20);
			this->tbimage_url->TabIndex = 17;
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(579, 417);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(103, 23);
			this->label6->TabIndex = 20;
			this->label6->Text = L"description";
			this->label6->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// tbdescription
			// 
			this->tbdescription->Location = System::Drawing::Point(576, 454);
			this->tbdescription->Name = L"tbdescription";
			this->tbdescription->Size = System::Drawing::Size(106, 20);
			this->tbdescription->TabIndex = 19;
			// 
			// label7
			// 
			this->label7->Location = System::Drawing::Point(688, 417);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(121, 23);
			this->label7->TabIndex = 22;
			this->label7->Text = L"promotion_info";
			this->label7->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// tbpromotion_info
			// 
			this->tbpromotion_info->Location = System::Drawing::Point(685, 454);
			this->tbpromotion_info->Name = L"tbpromotion_info";
			this->tbpromotion_info->Size = System::Drawing::Size(124, 20);
			this->tbpromotion_info->TabIndex = 21;
			// 
			// tbtitle
			// 
			this->tbtitle->Location = System::Drawing::Point(144, 454);
			this->tbtitle->Name = L"tbtitle";
			this->tbtitle->Size = System::Drawing::Size(106, 20);
			this->tbtitle->TabIndex = 11;
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(147, 417);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 23);
			this->label2->TabIndex = 12;
			this->label2->Text = L"title";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label8
			// 
			this->label8->Location = System::Drawing::Point(15, 417);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(123, 23);
			this->label8->TabIndex = 24;
			this->label8->Text = L"book_id";
			this->label8->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// tbbook_id
			// 
			this->tbbook_id->Location = System::Drawing::Point(12, 454);
			this->tbbook_id->Name = L"tbbook_id";
			this->tbbook_id->Size = System::Drawing::Size(126, 20);
			this->tbbook_id->TabIndex = 23;
			// 
			// btnSuaSach
			// 
			this->btnSuaSach->Location = System::Drawing::Point(12, 480);
			this->btnSuaSach->Name = L"btnSuaSach";
			this->btnSuaSach->Size = System::Drawing::Size(797, 55);
			this->btnSuaSach->TabIndex = 25;
			this->btnSuaSach->Text = L"Sửa Sách";
			this->btnSuaSach->UseVisualStyleBackColor = true;
			this->btnSuaSach->Click += gcnew System::EventHandler(this, &QuanLySachForm::btnSuaSach_Click);
			// 
			// QuanLySachForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(821, 547);
			this->Controls->Add(this->btnSuaSach);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->tbbook_id);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->tbpromotion_info);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->tbdescription);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->tbimage_url);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->tbprice);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbauthor);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tbtitle);
			this->Controls->Add(this->btnThemSach);
			this->Controls->Add(this->Cancel);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnNhapId);
			this->Controls->Add(this->btnXoa);
			this->Controls->Add(this->btnLoadListviewBooks);
			this->Controls->Add(this->listView1);
			this->Name = L"QuanLySachForm";
			this->Text = L"QuanLySachForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
				private: System::Void btnLoadListviewBooks_Click(System::Object^ sender, System::EventArgs^ e) {
					String^ connString = "Data Source=desktop-rkei9e8\\sqlexpress;Initial Catalog=QLsach;Integrated Security=True; MultipleActiveResultSets=true";

					// Khởi tạo kết nối SQL
					SqlConnection^ conn = gcnew SqlConnection(connString);

					try {
						// Mở kết nối
						conn->Open();

						// Chuỗi truy vấn SQL
						String^ query = "SELECT [book_id], [title], [author], [price], [image_url], [description], [promotion_info] FROM [QLsach].[dbo].[Books]";
						SqlCommand^ cmd = gcnew SqlCommand(query, conn);
						SqlDataReader^ reader = cmd->ExecuteReader();

						// Xóa dữ liệu cũ trong ListView trước khi cập nhật dữ liệu mới
						listView1->Items->Clear();

						// Với mỗi dòng dữ liệu trong kết quả truy vấn, thêm vào ListView
						while (reader->Read()) {
							ListViewItem^ item = gcnew ListViewItem(reader->GetInt32(0).ToString()); // book_id
							item->SubItems->Add(reader->GetString(1)); // title
							item->SubItems->Add(reader->GetString(2)); // author
							item->SubItems->Add(reader->GetDecimal(3).ToString()); // price
							item->SubItems->Add(reader->GetString(4)); // image_url
							item->SubItems->Add(reader->GetString(5)); // description
							item->SubItems->Add(reader->GetString(6)); // promotion_info

							listView1->Items->Add(item);
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
					// Chuỗi kết nối đến cơ sở dữ liệu
					String^ connString = "Data Source=desktop-rkei9e8\\sqlexpress;Initial Catalog=QLsach;Integrated Security=True; MultipleActiveResultSets=true";
					// Khởi tạo kết nối SQL
					SqlConnection^ conn = gcnew SqlConnection(connString);
					try {
						// Mở kết nối
						conn->Open();
						// Lấy ID cần xóa từ TextBox
						int idToDelete = System::Convert::ToInt32(btnNhapId->Text);
						// Chuỗi truy vấn SQL để xóa dữ liệu theo ID
						String^ query = "DELETE FROM [QLsach].[dbo].[Books] WHERE [book_id] = @ID";
						// Tạo SqlCommand với tham số ID
						SqlCommand^ cmd = gcnew SqlCommand(query, conn);
						cmd->Parameters->AddWithValue("@ID", idToDelete);
						// Thực thi truy vấn xóa
						int rowsAffected = cmd->ExecuteNonQuery();
						// Kiểm tra xem dữ liệu đã được xóa hay chưa
						if (rowsAffected > 0) {
							MessageBox::Show("Xóa dữ liệu thành công!");
						}
						else {
							MessageBox::Show("Không tìm thấy ID để xóa!");
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

				private: System::Void btnThemSach_Click(System::Object^ sender, System::EventArgs^ e) {
					// Chuỗi kết nối đến cơ sở dữ liệu
					String^ connString = "Data Source=desktop-rkei9e8\\sqlexpress;Initial Catalog=QLsach;Integrated Security=True; MultipleActiveResultSets=true";
					// Khởi tạo kết nối SQL
					SqlConnection^ conn = gcnew SqlConnection(connString);
					try {
						// Mở kết nối
						conn->Open();

						// Chuẩn bị truy vấn SQL INSERT với các giá trị từ các TextBox
						String^ query = "INSERT INTO [QLsach].[dbo].[Books] ([book_id],[title], [author], [price], [image_url], [description], [promotion_info]) VALUES (@book_id,@Title, @Author, @Price, @ImageURL, @Description, @PromotionInfo)";

						// Tạo SqlCommand và thiết lập các tham số
						SqlCommand^ cmd = gcnew SqlCommand(query, conn);
						cmd->Parameters->AddWithValue("@book_id", tbbook_id->Text);
						cmd->Parameters->AddWithValue("@Title", tbtitle->Text);
						cmd->Parameters->AddWithValue("@Author", tbauthor->Text);
						cmd->Parameters->AddWithValue("@Price", tbprice->Text);
						cmd->Parameters->AddWithValue("@ImageURL", tbimage_url->Text);
						cmd->Parameters->AddWithValue("@Description", tbdescription->Text);
						cmd->Parameters->AddWithValue("@PromotionInfo", tbpromotion_info->Text);

						// Thực thi truy vấn INSERT
						int rowsAffected = cmd->ExecuteNonQuery();

						// Kiểm tra xem dữ liệu đã được thêm thành công hay không
						if (rowsAffected > 0) {
							MessageBox::Show("Thêm sách thành công!");
						}
						else {
							MessageBox::Show("Thêm sách không thành công!");
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
private: System::Void tbauthor_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tbprice_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
				private: System::Void btnSuaSach_Click(System::Object^ sender, System::EventArgs^ e) {
					// Chuỗi kết nối đến cơ sở dữ liệu
					String^ connString = "Data Source=desktop-rkei9e8\\sqlexpress;Initial Catalog=QLsach;Integrated Security=True; MultipleActiveResultSets=true";
					// Khởi tạo kết nối SQL
					SqlConnection^ conn = gcnew SqlConnection(connString);
					try {
						// Mở kết nối
						conn->Open();

						// Chuẩn bị truy vấn SQL UPDATE với các giá trị từ các TextBox
						String^ query = "UPDATE [QLsach].[dbo].[Books] SET [title] = @Title, [author] = @Author, [price] = @Price, [image_url] = @ImageURL, [description] = @Description, [promotion_info] = @PromotionInfo WHERE [book_id] = @ID";

						// Tạo SqlCommand và thiết lập các tham số
						SqlCommand^ cmd = gcnew SqlCommand(query, conn);
						cmd->Parameters->AddWithValue("@ID", tbbook_id->Text);
						cmd->Parameters->AddWithValue("@Title", tbtitle->Text);
						cmd->Parameters->AddWithValue("@Author", tbauthor->Text);
						cmd->Parameters->AddWithValue("@Price", tbprice->Text);
						cmd->Parameters->AddWithValue("@ImageURL", tbimage_url->Text);
						cmd->Parameters->AddWithValue("@Description", tbdescription->Text);
						cmd->Parameters->AddWithValue("@PromotionInfo", tbpromotion_info->Text);

						// Thực thi truy vấn UPDATE
						int rowsAffected = cmd->ExecuteNonQuery();

						// Kiểm tra xem dữ liệu đã được cập nhật thành công hay không
						if (rowsAffected > 0) {
							MessageBox::Show("Sửa sách thành công!");
						}
						else {
							MessageBox::Show("Sửa sách không thành công!");
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

};
}
