#include "MyForm.h"
#include "MainForm1.h"
using namespace Project1;

[STAThread] // Add this attribute to your main function
int main() {
    MyForm mf;
    mf.ShowDialog();

    if (mf.user != nullptr) {
        MainForm1^ mainForm1 = gcnew MainForm1(mf.user);
        Application::Run(mainForm1);
    }

    return 0;
}
