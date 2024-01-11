#include "LoginForm.h"
#include "MainForm.h"
using namespace admin;

[STAThread] // Add this attribute to your main function
int main() {
    LoginForm lf;
    lf.ShowDialog();

    if (lf.admins != nullptr) {
        MainForm^ mainForm = gcnew MainForm(lf.admins);
        Application::Run(mainForm);
    }

    return 0;
}
