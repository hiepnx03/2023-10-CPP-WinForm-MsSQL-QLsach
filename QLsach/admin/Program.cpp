#include "LoginForm.h"
#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    admin::LoginForm^ loginForm = gcnew admin::LoginForm();

    loginForm->ShowDialog();

    if (loginForm->admins != nullptr) {
        admin::MainForm^ mainForm = gcnew admin::MainForm(loginForm->admins);
        Application::Run(mainForm);
    }
    else {
        MessageBox::Show("Đăng nhập thất bại", "Program.cpp", MessageBoxButtons::OK);
        Application::Exit(); // Thoát ứng dụng
    }
}
