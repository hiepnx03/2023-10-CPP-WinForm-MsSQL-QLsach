#pragma once

using namespace System;

public ref class Cart
{
public:
    Cart(String^ title, int quantity, System::Decimal price)
    {
        this->Title = title;
        this->Quantity = quantity;
        this->Price = price;
        this->Total = quantity * price;
    }

    property String^ Title;
    property int Quantity;
    property System::Decimal Price;
    property System::Decimal Total;
};
