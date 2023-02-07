#include "MyForm.h"
#include "MainWindow.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	todo_app::MainWindow form;
	Application::Run(%form);
}
