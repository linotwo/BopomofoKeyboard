#pragma once

namespace BopomofoKeyboard {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	ref class CustomCheckBox : System::Windows::Forms::CheckBox {
	public:
		void SetStyle(ControlStyles flag, bool value)
		{
			System::Windows::Forms::CheckBox::SetStyle(flag, value);
		}
	};

	ref class CustomCheckButton : System::Windows::Forms::Button {
	public:
		void SetStyle(ControlStyles flag, bool value)
		{
			System::Windows::Forms::Button::SetStyle(flag, value);
		}
	};
}