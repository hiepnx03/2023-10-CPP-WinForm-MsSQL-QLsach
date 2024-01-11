#pragma once
using namespace System;

public ref class Admins
{
public:
    int admin_id;
    String^ username;
    String^ password;
    String^ full_name;
    String^ email;
    String^ phone;
    DateTime created_at;
    Nullable<DateTime> last_login;
};
