#pragma once
using namespace System;

public ref class Users
{
public:
    int user_id;
    String^ username;
    String^ password;
    String^ full_name;
    String^ email;
    String^ phone;
    DateTime created_at;
    Nullable<DateTime> last_login;
};
