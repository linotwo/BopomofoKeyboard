#include "MyForm.h"

#define PROJECT_NAME BopomofoKeyboard

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(true);
	PROJECT_NAME::MyForm form;
	Application::Run(%form);
}