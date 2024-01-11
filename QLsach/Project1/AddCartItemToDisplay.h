#pragma once
using namespace System;

public ref class AddCartItemToDisplay {
public:   
	String^ AddCartItemToDisplayID;
		String^ bookID;
		String^ username;
		String^ quantity;
		String^ fullName;
		String^ email;
		String^ phone;

		AddCartItemToDisplay (String^ AddCartItemToDisplayID, String^ bookID, String^ username, String^ quantity, String^ fullName, String^ email, String^ phone) {
			AddCartItemToDisplayID = AddCartItemToDisplayID;
			bookID = bookID;
			username = username;
			quantity = quantity;
			fullName = fullName;
			email = email;
			phone = phone;
		}
};