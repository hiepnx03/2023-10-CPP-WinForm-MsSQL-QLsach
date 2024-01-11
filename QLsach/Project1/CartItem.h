#pragma once
using namespace System;

public ref class CartItem {
public:
    int BookID;
    String^ Title;
    String^ Author;
    double Price;
    int Quantity;

    CartItem(int bookID, String^ title, String^ author, double price) {
        BookID = bookID;
        Title = title;
        Author = author;
        Price = price;
        Quantity = 1; // S? l??ng m?c ??nh là 1 khi thêm s?n ph?m vào gi? hàng
    }
};
