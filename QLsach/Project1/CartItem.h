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
        Quantity = 1; // S? l??ng m?c ??nh l� 1 khi th�m s?n ph?m v�o gi? h�ng
    }
};
