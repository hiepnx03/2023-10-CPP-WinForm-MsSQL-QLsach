#pragma once
#include "Cart.h"
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	/// <summary>
	/// Summary for GioHangForm
	/// </summary>
	public ref class GioHangForm : public System::Windows::Forms::Form
	{
	public:
		GioHangForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			PopulateListViewFromDatabase();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~GioHangForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^ listView1;
	protected:
	private: System::Windows::Forms::Button^ btnCancle;
	private: System::Windows::Forms::Button^ btnXoaHang;
	private: System::Windows::Forms::Button^ btnMuaHang;
	private: System::Windows::Forms::Button^ btnThemSoLuong;
	private: System::Windows::Forms::ColumnHeader^ Title;
	private: System::Windows::Forms::ColumnHeader^ Quantity;
	private: System::Windows::Forms::ColumnHeader^ Price;
	private: System::Windows::Forms::ColumnHeader^ Total;
	private: System::Windows::Forms::Button^ btnloadGioHangCuaToi;
	private: System::Windows::Forms::TextBox^ tbnhapUsername;
	private: System::Windows::Forms::Label^ label2;


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
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->Title = (gcnew System::Windows::Forms::ColumnHeader());
			this->Quantity = (gcnew System::Windows::Forms::ColumnHeader());
			this->Price = (gcnew System::Windows::Forms::ColumnHeader());
			this->Total = (gcnew System::Windows::Forms::ColumnHeader());
			this->btnCancle = (gcnew System::Windows::Forms::Button());
			this->btnXoaHang = (gcnew System::Windows::Forms::Button());
			this->btnMuaHang = (gcnew System::Windows::Forms::Button());
			this->btnThemSoLuong = (gcnew System::Windows::Forms::Button());
			this->btnloadGioHangCuaToi = (gcnew System::Windows::Forms::Button());
			this->tbnhapUsername = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Activation = System::Windows::Forms::ItemActivation::OneClick;
			this->listView1->AllowColumnReorder = true;
			this->listView1->AllowDrop = true;
			this->listView1->BackgroundImageTiled = true;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->Title, this->Quantity,
					this->Price, this->Total
			});
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->HideSelection = false;
			this->listView1->HotTracking = true;
			this->listView1->HoverSelection = true;
			this->listView1->LabelEdit = true;
			this->listView1->Location = System::Drawing::Point(13, 13);
			this->listView1->Name = L"listView1";
			this->listView1->OwnerDraw = true;
			this->listView1->ShowItemToolTips = true;
			this->listView1->Size = System::Drawing::Size(789, 419);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->UseWaitCursor = true;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->VirtualMode = true;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &GioHangForm::listView1_SelectedIndexChanged);
			// 
			// Title
			// 
			this->Title->Tag = L"";
			this->Title->Text = L"Tên sản phẩm";
			this->Title->Width = 189;
			// 
			// Quantity
			// 
			this->Quantity->Text = L"Số lượng";
			this->Quantity->Width = 151;
			// 
			// Price
			// 
			this->Price->Text = L"Giá tiền";
			this->Price->Width = 206;
			// 
			// Total
			// 
			this->Total->Text = L"Tổng cộng";
			this->Total->Width = 152;
			// 
			// btnCancle
			// 			this->btnCancle->Location = System::Drawing::Point(948, 552);
			this->btnCancle->Name = L"btnCancle";
			this->btnCancle->Size = System::Drawing::Size(75, 23);
			this->btnCancle->TabIndex = 1;
			this->btnCancle->Text = L"Cancel";
			this->btnCancle->UseVisualStyleBackColor = true;
			this->btnCancle->Click += gcnew System::EventHandler(this, &GioHangForm::btnCancle_Click);
					// 
			// btnXoaHang
			// 
	this->btnXoaHang->Location = System::Drawing::Point(357, 552);
			this->btnXoaHang->Name = L"btnXoaHang";
			this->btnXoaHang->Size = System::Drawing::Size(75, 23);
			this->btnXoaHang->TabIndex = 2;
			this->btnXoaHang->Text = L"Xóa Hàng";
			this->btnXoaHang->UseVisualStyleBackColor = true;
					// 
			// btnMuaHang
			// 
	this->btnMuaHang->Location = System::Drawing::Point(198, 552);
			this->btnMuaHang->Name = L"btnMuaHang";
			this->btnMuaHang->Size = System::Drawing::Size(75, 23);
			this->btnMuaHang->TabIndex = 3;
			this->btnMuaHang->Text = L"Mua Hàng";
			this->btnMuaHang->UseVisualStyleBackColor = true;
					// 
			// btnThemSoLuong
			// 
	this->btnThemSoLuong->Location = System::Drawing::Point(22, 552);
			this->btnThemSoLuong->Name = L"btnThemSoLuong";
			this->btnThemSoLuong->Size = System::Drawing::Size(114, 23);
			this->btnThemSoLuong->TabIndex = 4;
			this->btnThemSoLuong->Text = L"Thêm Số Lượng";
			this->btnThemSoLuong->UseVisualStyleBackColor = true;
					// 
			// btnloadGioHangCuaToi
			// 
	this->btnloadGioHangCuaToi->Location = System::Drawing::Point(808, 87);
			this->btnloadGioHangCuaToi->Name = L"btnloadGioHangCuaToi";
			this->btnloadGioHangCuaToi->Size = System::Drawing::Size(215, 51);
			this->btnloadGioHangCuaToi->TabIndex = 19;
			this->btnloadGioHangCuaToi->Text = L"Load Giỏ Hàng Của Tôi";
			this->btnloadGioHangCuaToi->UseVisualStyleBackColor = true;
			this->btnloadGioHangCuaToi->Click += gcnew System::EventHandler(this, &GioHangForm::btnloadGioHangCuaToi_Click);
					// 
			// tbnhapUsername
			// 
	this->tbnhapUsername->Location = System::Drawing::Point(808, 61);
			this->tbnhapUsername->Name = L"tbnhapUsername";
			this->tbnhapUsername->Size = System::Drawing::Size(215, 20);
			this->tbnhapUsername->TabIndex = 18;
					// 
			// label2
			// 
	this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->label2->Location = System::Drawing::Point(808, 34);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(215, 35);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Nhập Username";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
					// 
			// GioHangForm
			// 
	this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1035, 587);
			this->Controls->Add(this->btnloadGioHangCuaToi);
			this->Controls->Add(this->tbnhapUsername);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnThemSoLuong);
			this->Controls->Add(this->btnMuaHang);
			this->Controls->Add(this->btnXoaHang);
			this->Controls->Add(this->btnCancle);
			this->Controls->Add(this->listView1);
			this->Name = L"GioHangForm";
			this->Text = L"GioHangForm";
			this->ResumeLayout(false);
			this->PerformLayout();
		
}
#pragma endregion
	private: System::Void btnCancle_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

		   void PopulateListViewFromDatabase()
		   {
					   // Clear existing items in listView1
	   listView1->Items->Clear();
		
			   // Set the VirtualListSize to the number of items you have
	   listView1->VirtualListSize = cartItems->Count;
		
			   // Handle the RetrieveVirtualItem event to populate the data
	   listView1->RetrieveVirtualItem += gcnew RetrieveVirtualItemEventHandler(this, &GioHangForm::RetrieveVirtualItem);
		
			   // Refresh the ListView
	   listView1->Refresh();
		   }

		   void RetrieveVirtualItem(System::Object^ sender, RetrieveVirtualItemEventArgs^ e)
		   {
					   // Retrieve the data from your cartItems
	   Cart^ item = cartItems[e->ItemIndex];
		
			   // Create a ListViewItem to represent the data
	   ListViewItem^ listViewItem = gcnew ListViewItem(item->Title);
			   listViewItem->SubItems->Add(item->Quantity.ToString());
			   listViewItem->SubItems->Add(item->Price.ToString("C"));
			   listViewItem->SubItems->Add(item->Total.ToString("C"));
		
			   // Assign the ListViewItem to the event arguments
	   e->Item = listViewItem;
		   }
		



	private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		
	}
		
	 System::Collections::Generic::List<Cart^>^ cartItems = gcnew System::Collections::Generic::List<Cart^>();
		
	private: System::Void btnloadGioHangCuaToi_Click(System::Object^ sender, System::EventArgs^ e) {

			}




};
}
