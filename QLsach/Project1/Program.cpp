#include "MyForm.h"
#include "MainForm1.h" 
#include "Register.h"


using namespace System;
using namespace System::Windows::Forms;

int main(array<System::String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Project1::MyForm^ myForm = gcnew Project1::MyForm();

    myForm->ShowDialog();

    if (myForm->user != nullptr) {
        Project1::MainForm1^ mainForm1 = gcnew Project1::MainForm1(myForm->user);
        Application::Run(mainForm1);
    }
    else {
        MessageBox::Show("Đăng nhập thất bại", "Program.cpp", MessageBoxButtons::OK);
        Application::Exit(); // Thoát ứng dụng
    }

    return 0;
}
