#include "Task1_1.h"
#include "Task1_2.h"
#include "Task2.h"
#include "Task3.h"
#include "Task_4.h"
#include <Windows.h>

using namespace System;
using namespace System::Windows::Forms;
using namespace Lab9;

int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Task1_1);

	return 0;
}