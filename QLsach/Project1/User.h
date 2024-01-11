#pragma once
using namespace System;

public ref class User
{
public:
    int userId;
    String^ username;
    String^ password;
    String^ fullName;
    String^ email;
    String^ phone;
    DateTime createdAt;
    Nullable<DateTime> lastLogin;
};
