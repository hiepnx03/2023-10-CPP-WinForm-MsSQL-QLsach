#include "MainForm1.h"
#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Lấy thông tin User từ args (nếu bạn truyền vào MainForm)
    User^ user = nullptr;
    if (args->Length > 0)
    {
        user = dynamic_cast<User^>(args[0]);
    }

    Project1::MainForm1^ mainForm1 = gcnew Project1::MainForm1(user);
    Application::Run(mainForm1);
}
