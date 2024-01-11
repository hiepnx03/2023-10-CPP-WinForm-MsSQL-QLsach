#pragma once
using namespace System;

public ref class Book {
public:
    int book_id;
    String^ title;
    String^ author;
    Decimal price;
    String^ image_url;
    String^ description;
    String^ promotion_info;

    Book(int id, String^ t, String^ a, Decimal p, String^ img, String^ desc, String^ promo)
        : book_id(id), title(t), author(a), price(p), image_url(img), description(desc), promotion_info(promo) {
    }
};
