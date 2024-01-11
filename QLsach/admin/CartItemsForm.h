#pragma once
#include "CartItems.h"
namespace admin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for CartItemsForm
	/// </summary>
	public ref class CartItemsForm : public System::Windows::Forms::Form
	{
	public:
		CartItemsForm(void)
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
		~CartItemsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^ listView1;
	protected:
	private: System::Windows::Forms::ColumnHeader^ cart_item_id;
	private: System::Windows::Forms::ColumnHeader^ book_id;
	private: System::Windows::Forms::ColumnHeader^ username;
	private: System::Windows::Forms::ColumnHeader^ quantity;
	private: System::Windows::Forms::Button^ Cancel;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ btnNhapId;
	private: System::Windows::Forms::Button^ btnXoa;
	private: System::Windows::Forms::Button^ btnLoadListviewCartItem;


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
			this->cart_item_id = (gcnew System::Windows::Forms::ColumnHeader());
			this->book_id = (gcnew System::Windows::Forms::ColumnHeader());
			this->username = (gcnew System::Windows::Forms::ColumnHeader());
			this->quantity = (gcnew System::Windows::Forms::ColumnHeader());
			this->Cancel = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnNhapId = (gcnew System::Windows::Forms::TextBox());
			this->btnXoa = (gcnew System::Windows::Forms::Button());
			this->btnLoadListviewCartItem = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->cart_item_id, this->book_id,
					this->username, this->quantity
			});
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(12, 12);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(874, 364);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// cart_item_id
			// 
			this->cart_item_id->Text = L"cart_item_id";
			this->cart_item_id->Width = 238;
			// 
			// book_id
			// 
			this->book_id->Text = L"book_id";
			this->book_id->Width = 184;
			// 
			// username
			// 
			this->username->Text = L"username";
			this->username->Width = 238;
			// 
			// quantity
			// 
			this->quantity->Text = L"quantity";
			this->quantity->Width = 169;
			// 
			// Cancel
			// 
			this->Cancel->Location = System::Drawing::Point(893, 276);
			this->Cancel->Name = L"Cancel";
			this->Cancel->Size = System::Drawing::Size(154, 100);
			this->Cancel->TabIndex = 14;
			this->Cancel->Text = L"Thoát";
			this->Cancel->UseVisualStyleBackColor = true;
			this->Cancel->Click += gcnew System::EventHandler(this, &CartItemsForm::Cancel_Click);
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(893, 116);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(154, 23);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Nhập ID Hàng Muốn Xóa";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// btnNhapId
			// 
			this->btnNhapId->Location = System::Drawing::Point(893, 153);
			this->btnNhapId->Name = L"btnNhapId";
			this->btnNhapId->Size = System::Drawing::Size(154, 20);
			this->btnNhapId->TabIndex = 12;
			// 
			// btnXoa
			// 
			this->btnXoa->Location = System::Drawing::Point(893, 179);
			this->btnXoa->Name = L"btnXoa";
			this->btnXoa->Size = System::Drawing::Size(154, 91);
			this->btnXoa->TabIndex = 11;
			this->btnXoa->Text = L"Xóa";
			this->btnXoa->UseVisualStyleBackColor = true;
			this->btnXoa->Click += gcnew System::EventHandler(this, &CartItemsForm::btnXoa_Click);
			// 
			// btnLoadListviewCartItem
			// 
			this->btnLoadListviewCartItem->Location = System::Drawing::Point(893, 22);
			this->btnLoadListviewCartItem->Name = L"btnLoadListviewCartItem";
			this->btnLoadListviewCartItem->Size = System::Drawing::Size(154, 91);
			this->btnLoadListviewCartItem->TabIndex = 10;
			this->btnLoadListviewCartItem->Text = L"Load Đơn hàng";
			this->btnLoadListviewCartItem->UseVisualStyleBackColor = true;
			this->btnLoadListviewCartItem->Click += gcnew System::EventHandler(this, &CartItemsForm::btnLoadListviewCartItem_Click);
			// 
			// CartItemsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1059, 388);
			this->Controls->Add(this->Cancel);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnNhapId);
			this->Controls->Add(this->btnXoa);
			this->Controls->Add(this->btnLoadListviewCartItem);
			this->Controls->Add(this->listView1);
			this->Name = L"CartItemsForm";
			this->Text = L"CartItemsForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Cancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
		private: System::Void btnLoadListviewCartItem_Click(System::Object^ sender, System::EventArgs^ e) {
			// Your database connection string
			String^ connString = "Data Source=desktop-rkei9e8\\sqlexpress;Initial Catalog=QLsach;Integrated Security=True; MultipleActiveResultSets=true";

			// Create a SqlConnection using the connection string
			SqlConnection^ conn = gcnew SqlConnection(connString);

			try {
				// Open the connection
				conn->Open();

				// SQL query to retrieve data
				String^ query = "SELECT [cart_item_id], [book_id], [username], [quantity] FROM [CartItems]";

				// Create a SqlCommand object
				SqlCommand^ command = gcnew SqlCommand(query, conn);

				// Create a SqlDataReader to retrieve data
				SqlDataReader^ reader = command->ExecuteReader();

				// Clear existing items in the ListView
				listView1->Items->Clear();

				// Loop through the retrieved data and populate the ListView
				while (reader->Read()) {
					ListViewItem^ item = gcnew ListViewItem(reader["cart_item_id"]->ToString());
					item->SubItems->Add(reader["book_id"]->ToString());
					item->SubItems->Add(reader["username"]->ToString());
					item->SubItems->Add(reader["quantity"]->ToString());

					// Add the ListViewItem to the ListView
					listView1->Items->Add(item);
				}

				// Close the reader
				reader->Close();
			}
			catch (SqlException^ ex) {
				// Handle exceptions here
				MessageBox::Show(ex->Message);
			}
			finally {
				// Close the connection
				conn->Close();
			}
		}
	private: System::Void btnXoa_Click(System::Object^ sender, System::EventArgs^ e) {
		// Get the ID entered in the TextBox
		String^ idToDelete = btnNhapId->Text;

		// Your database connection string
		String^ connString = "Data Source=desktop-rkei9e8\\sqlexpress;Initial Catalog=QLsach;Integrated Security=True; MultipleActiveResultSets=true";

		// Create a SqlConnection using the connection string
		SqlConnection^ conn = gcnew SqlConnection(connString);

		try {
			// Open the connection
			conn->Open();

			// SQL query to delete an item based on its ID
			String^ query = "DELETE FROM [CartItems] WHERE [cart_item_id] = @ID";

			// Create a SqlCommand object
			SqlCommand^ command = gcnew SqlCommand(query, conn);

			// Set the parameter value
			command->Parameters->AddWithValue("@ID", idToDelete);

			// Execute the deletion query
			int rowsAffected = command->ExecuteNonQuery();

			if (rowsAffected > 0) {
				// If deletion is successful, provide a message
				MessageBox::Show("Item deleted successfully.");
			}
			else {
				// If no rows were affected, the item might not exist
				MessageBox::Show("Item with this ID does not exist.");
			}
		}
		catch (SqlException^ ex) {
			// Handle exceptions here
			MessageBox::Show(ex->Message);
		}
		finally {
			// Close the connection
			conn->Close();
		}
	}

};
}
