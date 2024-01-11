#pragma once
using namespace System;

public ref class CartItems
{
public:
    int cart_item_id;
    int^ book_id;
    String^ username;
    int^ quantity;
};
