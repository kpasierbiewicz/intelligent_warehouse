#include "StartWindow.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main(array<System::String ^> ^args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	InteligentnyMagazyn::StartWindow startWindow;
	Application::Run(%startWindow);
	return 0;
}