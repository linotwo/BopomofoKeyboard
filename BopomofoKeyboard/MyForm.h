#pragma once

#include "CustomItem.h"

namespace BopomofoKeyboard {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			this->SuspendLayout();
			static_cast<CustomCheckBox ^>(this->chkShift)->SetStyle(ControlStyles::Selectable, false);
			static_cast<CustomCheckButton ^>(this->buttonㄅ)->SetStyle(ControlStyles::Selectable, false);
			static_cast<CustomCheckButton ^>(this->buttonㄆ)->SetStyle(ControlStyles::Selectable, false);
			static_cast<CustomCheckButton ^>(this->buttonㄇ)->SetStyle(ControlStyles::Selectable, false);
			static_cast<CustomCheckButton ^>(this->buttonㄈ)->SetStyle(ControlStyles::Selectable, false);
			static_cast<CustomCheckButton ^>(this->buttonㄉ)->SetStyle(ControlStyles::Selectable, false);
			static_cast<CustomCheckButton ^>(this->buttonㄊ)->SetStyle(ControlStyles::Selectable, false);
			static_cast<CustomCheckButton ^>(this->buttonㄋ)->SetStyle(ControlStyles::Selectable, false);
			static_cast<CustomCheckButton ^>(this->buttonㄌ)->SetStyle(ControlStyles::Selectable, false);
			static_cast<CustomCheckButton ^>(this->buttonㄍ)->SetStyle(ControlStyles::Selectable, false);
			static_cast<CustomCheckButton ^>(this->buttonㄎ)->SetStyle(ControlStyles::Selectable, false);
			static_cast<CustomCheckButton ^>(this->buttonㄏ)->SetStyle(ControlStyles::Selectable, false);
			static_cast<CustomCheckButton ^>(this->buttonㄐ)->SetStyle(ControlStyles::Selectable, false);
			static_cast<CustomCheckButton ^>(this->buttonㄑ)->SetStyle(ControlStyles::Selectable, false);
			static_cast<CustomCheckButton ^>(this->buttonㄒ)->SetStyle(ControlStyles::Selectable, false);
			static_cast<CustomCheckButton ^>(this->buttonㄧ)->SetStyle(ControlStyles::Selectable, false);
			static_cast<CustomCheckButton ^>(this->buttonㄨ)->SetStyle(ControlStyles::Selectable, false);
			static_cast<CustomCheckButton ^>(this->buttonㄩ)->SetStyle(ControlStyles::Selectable, false);
			static_cast<CustomCheckButton ^>(this->buttonㄓ)->SetStyle(ControlStyles::Selectable, false);
			static_cast<CustomCheckButton ^>(this->buttonㄔ)->SetStyle(ControlStyles::Selectable, false);
			static_cast<CustomCheckButton ^>(this->buttonㄕ)->SetStyle(ControlStyles::Selectable, false);
			static_cast<CustomCheckButton ^>(this->buttonㄖ)->SetStyle(ControlStyles::Selectable, false);
			static_cast<CustomCheckButton ^>(this->buttonㄗ)->SetStyle(ControlStyles::Selectable, false);
			static_cast<CustomCheckButton ^>(this->buttonㄘ)->SetStyle(ControlStyles::Selectable, false);
			static_cast<CustomCheckButton ^>(this->buttonㄙ)->SetStyle(ControlStyles::Selectable, false);
			static_cast<CustomCheckButton ^>(this->buttonEraseLeft)->SetStyle(ControlStyles::Selectable, false);
			static_cast<CustomCheckButton ^>(this->buttonㄚ)->SetStyle(ControlStyles::Selectable, false);
			static_cast<CustomCheckButton ^>(this->buttonㄛ)->SetStyle(ControlStyles::Selectable, false);
			static_cast<CustomCheckButton ^>(this->buttonㄜ)->SetStyle(ControlStyles::Selectable, false);
			static_cast<CustomCheckButton ^>(this->buttonㄝ)->SetStyle(ControlStyles::Selectable, false);
			static_cast<CustomCheckButton ^>(this->buttonㄞ)->SetStyle(ControlStyles::Selectable, false);
			static_cast<CustomCheckButton ^>(this->buttonㄟ)->SetStyle(ControlStyles::Selectable, false);
			static_cast<CustomCheckButton ^>(this->buttonㄠ)->SetStyle(ControlStyles::Selectable, false);
			static_cast<CustomCheckButton ^>(this->buttonㄡ)->SetStyle(ControlStyles::Selectable, false);
			static_cast<CustomCheckButton ^>(this->buttonㄢ)->SetStyle(ControlStyles::Selectable, false);
			static_cast<CustomCheckButton ^>(this->buttonㄣ)->SetStyle(ControlStyles::Selectable, false);
			static_cast<CustomCheckButton ^>(this->buttonㄤ)->SetStyle(ControlStyles::Selectable, false);
			static_cast<CustomCheckButton ^>(this->buttonㄥ)->SetStyle(ControlStyles::Selectable, false);
			static_cast<CustomCheckButton ^>(this->buttonㄦ)->SetStyle(ControlStyles::Selectable, false);
			static_cast<CustomCheckButton ^>(this->buttonㄧ2)->SetStyle(ControlStyles::Selectable, false);
			static_cast<CustomCheckButton ^>(this->buttonㄨ2)->SetStyle(ControlStyles::Selectable, false);
			static_cast<CustomCheckButton ^>(this->buttonㄩ2)->SetStyle(ControlStyles::Selectable, false);
			static_cast<CustomCheckButton ^>(this->buttonˊ)->SetStyle(ControlStyles::Selectable, false);
			static_cast<CustomCheckButton ^>(this->buttonˇ)->SetStyle(ControlStyles::Selectable, false);
			static_cast<CustomCheckButton ^>(this->buttonˋ)->SetStyle(ControlStyles::Selectable, false);
			static_cast<CustomCheckButton ^>(this->button輕)->SetStyle(ControlStyles::Selectable, false);
			static_cast<CustomCheckButton ^>(this->buttonSpace)->SetStyle(ControlStyles::Selectable, false);
			static_cast<CustomCheckButton ^>(this->buttonReturn)->SetStyle(ControlStyles::Selectable, false);
			this->ResumeLayout(false);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckBox^  chkShift;
	private: System::Windows::Forms::Button^  buttonㄅ;
	private: System::Windows::Forms::Button^  buttonㄆ;
	private: System::Windows::Forms::Button^  buttonㄇ;
	private: System::Windows::Forms::Button^  buttonㄈ;
	private: System::Windows::Forms::Button^  buttonㄉ;
	private: System::Windows::Forms::Button^  buttonㄊ;
	private: System::Windows::Forms::Button^  buttonㄋ;
	private: System::Windows::Forms::Button^  buttonㄌ;
	private: System::Windows::Forms::Button^  buttonㄍ;
	private: System::Windows::Forms::Button^  buttonㄎ;
	private: System::Windows::Forms::Button^  buttonㄏ;
	private: System::Windows::Forms::Button^  buttonㄐ;
	private: System::Windows::Forms::Button^  buttonㄑ;
	private: System::Windows::Forms::Button^  buttonㄒ;
	private: System::Windows::Forms::Button^  buttonㄧ;
	private: System::Windows::Forms::Button^  buttonㄨ;
	private: System::Windows::Forms::Button^  buttonㄩ;
	private: System::Windows::Forms::Button^  buttonㄓ;
	private: System::Windows::Forms::Button^  buttonㄔ;
	private: System::Windows::Forms::Button^  buttonㄕ;
	private: System::Windows::Forms::Button^  buttonㄖ;
	private: System::Windows::Forms::Button^  buttonㄗ;
	private: System::Windows::Forms::Button^  buttonㄘ;
	private: System::Windows::Forms::Button^  buttonㄙ;
	private: System::Windows::Forms::Button^  buttonEraseLeft;
	private: System::Windows::Forms::Button^  buttonㄚ;
	private: System::Windows::Forms::Button^  buttonㄛ;
	private: System::Windows::Forms::Button^  buttonㄜ;
	private: System::Windows::Forms::Button^  buttonㄝ;
	private: System::Windows::Forms::Button^  buttonㄞ;
	private: System::Windows::Forms::Button^  buttonㄟ;
	private: System::Windows::Forms::Button^  buttonㄠ;
	private: System::Windows::Forms::Button^  buttonㄡ;
	private: System::Windows::Forms::Button^  buttonㄢ;
	private: System::Windows::Forms::Button^  buttonㄣ;
	private: System::Windows::Forms::Button^  buttonㄤ;
	private: System::Windows::Forms::Button^  buttonㄥ;
	private: System::Windows::Forms::Button^  buttonㄦ;
	private: System::Windows::Forms::Button^  buttonㄧ2;
	private: System::Windows::Forms::Button^  buttonㄨ2;
	private: System::Windows::Forms::Button^  buttonㄩ2;
	private: System::Windows::Forms::Button^  buttonˊ;
	private: System::Windows::Forms::Button^  buttonˇ;
	private: System::Windows::Forms::Button^  buttonˋ;
	private: System::Windows::Forms::Button^  button輕;
	private: System::Windows::Forms::Button^  buttonSpace;
	private: System::Windows::Forms::Button^  buttonReturn;
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->chkShift = (gcnew System::Windows::Forms::CheckBox());
			this->buttonㄅ = (gcnew System::Windows::Forms::Button());
			this->buttonㄆ = (gcnew System::Windows::Forms::Button());
			this->buttonㄇ = (gcnew System::Windows::Forms::Button());
			this->buttonㄈ = (gcnew System::Windows::Forms::Button());
			this->buttonㄉ = (gcnew System::Windows::Forms::Button());
			this->buttonㄊ = (gcnew System::Windows::Forms::Button());
			this->buttonㄋ = (gcnew System::Windows::Forms::Button());
			this->buttonㄌ = (gcnew System::Windows::Forms::Button());
			this->buttonㄍ = (gcnew System::Windows::Forms::Button());
			this->buttonㄎ = (gcnew System::Windows::Forms::Button());
			this->buttonㄏ = (gcnew System::Windows::Forms::Button());
			this->buttonㄐ = (gcnew System::Windows::Forms::Button());
			this->buttonㄑ = (gcnew System::Windows::Forms::Button());
			this->buttonㄒ = (gcnew System::Windows::Forms::Button());
			this->buttonㄧ = (gcnew System::Windows::Forms::Button());
			this->buttonㄨ = (gcnew System::Windows::Forms::Button());
			this->buttonㄩ = (gcnew System::Windows::Forms::Button());
			this->buttonㄓ = (gcnew System::Windows::Forms::Button());
			this->buttonㄔ = (gcnew System::Windows::Forms::Button());
			this->buttonㄕ = (gcnew System::Windows::Forms::Button());
			this->buttonㄖ = (gcnew System::Windows::Forms::Button());
			this->buttonㄗ = (gcnew System::Windows::Forms::Button());
			this->buttonㄘ = (gcnew System::Windows::Forms::Button());
			this->buttonㄙ = (gcnew System::Windows::Forms::Button());
			this->buttonEraseLeft = (gcnew System::Windows::Forms::Button());
			this->buttonㄚ = (gcnew System::Windows::Forms::Button());
			this->buttonㄛ = (gcnew System::Windows::Forms::Button());
			this->buttonㄜ = (gcnew System::Windows::Forms::Button());
			this->buttonㄝ = (gcnew System::Windows::Forms::Button());
			this->buttonㄞ = (gcnew System::Windows::Forms::Button());
			this->buttonㄟ = (gcnew System::Windows::Forms::Button());
			this->buttonㄠ = (gcnew System::Windows::Forms::Button());
			this->buttonㄡ = (gcnew System::Windows::Forms::Button());
			this->buttonㄢ = (gcnew System::Windows::Forms::Button());
			this->buttonㄣ = (gcnew System::Windows::Forms::Button());
			this->buttonㄤ = (gcnew System::Windows::Forms::Button());
			this->buttonㄥ = (gcnew System::Windows::Forms::Button());
			this->buttonㄦ = (gcnew System::Windows::Forms::Button());
			this->buttonㄧ2 = (gcnew System::Windows::Forms::Button());
			this->buttonㄨ2 = (gcnew System::Windows::Forms::Button());
			this->buttonㄩ2 = (gcnew System::Windows::Forms::Button());
			this->buttonˊ = (gcnew System::Windows::Forms::Button());
			this->buttonˇ = (gcnew System::Windows::Forms::Button());
			this->buttonˋ = (gcnew System::Windows::Forms::Button());
			this->button輕 = (gcnew System::Windows::Forms::Button());
			this->buttonSpace = (gcnew System::Windows::Forms::Button());
			this->buttonReturn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// chkShift
			// 
			this->chkShift->Appearance = System::Windows::Forms::Appearance::Button;
			this->chkShift->Font = (gcnew System::Drawing::Font(L"MS Gothic",22));
			this->chkShift->Location = System::Drawing::Point(0,76);
			this->chkShift->Name = L"chkShift";
			this->chkShift->Size = System::Drawing::Size(30,36);
			this->chkShift->TabIndex = 0;
			this->chkShift->Text = L"⇧";
			this->chkShift->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->chkShift->UseVisualStyleBackColor = true;
			this->chkShift->CheckedChanged += gcnew System::EventHandler(this,&MyForm::chkShift_CheckedChanged);
			// 
			// buttonㄅ
			// 
			this->buttonㄅ->Font = (gcnew System::Drawing::Font(L"MS Mincho",11.25F,System::Drawing::FontStyle::Regular,System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonㄅ->Location = System::Drawing::Point(15,0);
			this->buttonㄅ->Name = L"buttonㄅ";
			this->buttonㄅ->Size = System::Drawing::Size(30,36);
			this->buttonㄅ->TabIndex = 1;
			this->buttonㄅ->Text = L"ㄅ";
			this->buttonㄅ->UseVisualStyleBackColor = true;
			this->buttonㄅ->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this,&MyForm::button_Click);
			// 
			// buttonㄆ
			// 
			this->buttonㄆ->Font = (gcnew System::Drawing::Font(L"MS Mincho",11.25F,System::Drawing::FontStyle::Regular,System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonㄆ->Location = System::Drawing::Point(45,0);
			this->buttonㄆ->Name = L"buttonㄆ";
			this->buttonㄆ->Size = System::Drawing::Size(30,36);
			this->buttonㄆ->TabIndex = 1;
			this->buttonㄆ->Text = L"ㄆ";
			this->buttonㄆ->UseVisualStyleBackColor = true;
			this->buttonㄆ->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this,&MyForm::button_Click);
			// 
			// buttonㄇ
			// 
			this->buttonㄇ->Font = (gcnew System::Drawing::Font(L"MS Mincho",11.25F,System::Drawing::FontStyle::Regular,System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonㄇ->Location = System::Drawing::Point(75,0);
			this->buttonㄇ->Name = L"buttonㄇ";
			this->buttonㄇ->Size = System::Drawing::Size(30,36);
			this->buttonㄇ->TabIndex = 1;
			this->buttonㄇ->Text = L"ㄇ";
			this->buttonㄇ->UseVisualStyleBackColor = true;
			this->buttonㄇ->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this,&MyForm::button_Click);
			// 
			// buttonㄈ
			// 
			this->buttonㄈ->Font = (gcnew System::Drawing::Font(L"MS Mincho",11.25F,System::Drawing::FontStyle::Regular,System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonㄈ->Location = System::Drawing::Point(105,0);
			this->buttonㄈ->Name = L"buttonㄈ";
			this->buttonㄈ->Size = System::Drawing::Size(30,36);
			this->buttonㄈ->TabIndex = 1;
			this->buttonㄈ->Text = L"ㄈ";
			this->buttonㄈ->UseVisualStyleBackColor = true;
			this->buttonㄈ->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this,&MyForm::button_Click);
			// 
			// buttonㄉ
			// 
			this->buttonㄉ->Font = (gcnew System::Drawing::Font(L"MS Mincho",11.25F,System::Drawing::FontStyle::Regular,System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonㄉ->Location = System::Drawing::Point(135,0);
			this->buttonㄉ->Name = L"buttonㄉ";
			this->buttonㄉ->Size = System::Drawing::Size(30,36);
			this->buttonㄉ->TabIndex = 1;
			this->buttonㄉ->Text = L"ㄉ";
			this->buttonㄉ->UseVisualStyleBackColor = true;
			this->buttonㄉ->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this,&MyForm::button_Click);
			// 
			// buttonㄊ
			// 
			this->buttonㄊ->Font = (gcnew System::Drawing::Font(L"MS Mincho",11.25F,System::Drawing::FontStyle::Regular,System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonㄊ->Location = System::Drawing::Point(165,0);
			this->buttonㄊ->Name = L"buttonㄊ";
			this->buttonㄊ->Size = System::Drawing::Size(30,36);
			this->buttonㄊ->TabIndex = 1;
			this->buttonㄊ->Text = L"ㄊ";
			this->buttonㄊ->UseVisualStyleBackColor = true;
			this->buttonㄊ->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this,&MyForm::button_Click);
			// 
			// buttonㄋ
			// 
			this->buttonㄋ->Font = (gcnew System::Drawing::Font(L"MS Mincho",11.25F,System::Drawing::FontStyle::Regular,System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonㄋ->Location = System::Drawing::Point(195,0);
			this->buttonㄋ->Name = L"buttonㄋ";
			this->buttonㄋ->Size = System::Drawing::Size(30,36);
			this->buttonㄋ->TabIndex = 1;
			this->buttonㄋ->Text = L"ㄋ";
			this->buttonㄋ->UseVisualStyleBackColor = true;
			this->buttonㄋ->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this,&MyForm::button_Click);
			// 
			// buttonㄌ
			// 
			this->buttonㄌ->Font = (gcnew System::Drawing::Font(L"MS Mincho",11.25F,System::Drawing::FontStyle::Regular,System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonㄌ->Location = System::Drawing::Point(225,0);
			this->buttonㄌ->Name = L"buttonㄌ";
			this->buttonㄌ->Size = System::Drawing::Size(30,36);
			this->buttonㄌ->TabIndex = 1;
			this->buttonㄌ->Text = L"ㄌ";
			this->buttonㄌ->UseVisualStyleBackColor = true;
			this->buttonㄌ->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this,&MyForm::button_Click);
			// 
			// buttonㄍ
			// 
			this->buttonㄍ->Font = (gcnew System::Drawing::Font(L"MS Mincho",11.25F,System::Drawing::FontStyle::Regular,System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonㄍ->Location = System::Drawing::Point(0,38);
			this->buttonㄍ->Name = L"buttonㄍ";
			this->buttonㄍ->Size = System::Drawing::Size(30,36);
			this->buttonㄍ->TabIndex = 1;
			this->buttonㄍ->Text = L"ㄍ";
			this->buttonㄍ->UseVisualStyleBackColor = true;
			this->buttonㄍ->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this,&MyForm::button_Click);
			// 
			// buttonㄎ
			// 
			this->buttonㄎ->Font = (gcnew System::Drawing::Font(L"MS Mincho",11.25F,System::Drawing::FontStyle::Regular,System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonㄎ->Location = System::Drawing::Point(30,38);
			this->buttonㄎ->Name = L"buttonㄎ";
			this->buttonㄎ->Size = System::Drawing::Size(30,36);
			this->buttonㄎ->TabIndex = 1;
			this->buttonㄎ->Text = L"ㄎ";
			this->buttonㄎ->UseVisualStyleBackColor = true;
			this->buttonㄎ->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this,&MyForm::button_Click);
			// 
			// buttonㄏ
			// 
			this->buttonㄏ->Font = (gcnew System::Drawing::Font(L"MS Mincho",11.25F,System::Drawing::FontStyle::Regular,System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonㄏ->Location = System::Drawing::Point(60,38);
			this->buttonㄏ->Name = L"buttonㄏ";
			this->buttonㄏ->Size = System::Drawing::Size(30,36);
			this->buttonㄏ->TabIndex = 1;
			this->buttonㄏ->Text = L"ㄏ";
			this->buttonㄏ->UseVisualStyleBackColor = true;
			this->buttonㄏ->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this,&MyForm::button_Click);
			// 
			// buttonㄐ
			// 
			this->buttonㄐ->Font = (gcnew System::Drawing::Font(L"MS Mincho",11.25F,System::Drawing::FontStyle::Regular,System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonㄐ->Location = System::Drawing::Point(90,38);
			this->buttonㄐ->Name = L"buttonㄐ";
			this->buttonㄐ->Size = System::Drawing::Size(30,36);
			this->buttonㄐ->TabIndex = 1;
			this->buttonㄐ->Text = L"ㄐ";
			this->buttonㄐ->UseVisualStyleBackColor = true;
			this->buttonㄐ->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this,&MyForm::button_Click);
			// 
			// buttonㄑ
			// 
			this->buttonㄑ->Font = (gcnew System::Drawing::Font(L"MS Mincho",11.25F,System::Drawing::FontStyle::Regular,System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonㄑ->Location = System::Drawing::Point(120,38);
			this->buttonㄑ->Name = L"buttonㄑ";
			this->buttonㄑ->Size = System::Drawing::Size(30,36);
			this->buttonㄑ->TabIndex = 1;
			this->buttonㄑ->Text = L"ㄑ";
			this->buttonㄑ->UseVisualStyleBackColor = true;
			this->buttonㄑ->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this,&MyForm::button_Click);
			// 
			// buttonㄒ
			// 
			this->buttonㄒ->Font = (gcnew System::Drawing::Font(L"MS Mincho",11.25F,System::Drawing::FontStyle::Regular,System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonㄒ->Location = System::Drawing::Point(150,38);
			this->buttonㄒ->Name = L"buttonㄒ";
			this->buttonㄒ->Size = System::Drawing::Size(30,36);
			this->buttonㄒ->TabIndex = 1;
			this->buttonㄒ->Text = L"ㄒ";
			this->buttonㄒ->UseVisualStyleBackColor = true;
			this->buttonㄒ->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this,&MyForm::button_Click);
			// 
			// buttonㄧ
			// 
			this->buttonㄧ->Font = (gcnew System::Drawing::Font(L"MS Mincho",11.25F,System::Drawing::FontStyle::Regular,System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonㄧ->Location = System::Drawing::Point(180,38);
			this->buttonㄧ->Name = L"buttonㄧ";
			this->buttonㄧ->Size = System::Drawing::Size(30,36);
			this->buttonㄧ->TabIndex = 1;
			this->buttonㄧ->Text = L"ㄧ";
			this->buttonㄧ->UseVisualStyleBackColor = true;
			this->buttonㄧ->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this,&MyForm::button_Click);
			// 
			// buttonㄨ
			// 
			this->buttonㄨ->Font = (gcnew System::Drawing::Font(L"MS Mincho",11.25F,System::Drawing::FontStyle::Regular,System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonㄨ->Location = System::Drawing::Point(210,38);
			this->buttonㄨ->Name = L"buttonㄨ";
			this->buttonㄨ->Size = System::Drawing::Size(30,36);
			this->buttonㄨ->TabIndex = 1;
			this->buttonㄨ->Text = L"ㄨ";
			this->buttonㄨ->UseVisualStyleBackColor = true;
			this->buttonㄨ->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this,&MyForm::button_Click);
			// 
			// buttonㄩ
			// 
			this->buttonㄩ->Font = (gcnew System::Drawing::Font(L"MS Mincho",11.25F,System::Drawing::FontStyle::Regular,System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonㄩ->Location = System::Drawing::Point(240,38);
			this->buttonㄩ->Name = L"buttonㄩ";
			this->buttonㄩ->Size = System::Drawing::Size(30,36);
			this->buttonㄩ->TabIndex = 1;
			this->buttonㄩ->Text = L"ㄩ";
			this->buttonㄩ->UseVisualStyleBackColor = true;
			this->buttonㄩ->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this,&MyForm::button_Click);
			// 
			// buttonㄓ
			// 
			this->buttonㄓ->Font = (gcnew System::Drawing::Font(L"MS Mincho",11.25F,System::Drawing::FontStyle::Regular,System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonㄓ->Location = System::Drawing::Point(30,76);
			this->buttonㄓ->Name = L"buttonㄓ";
			this->buttonㄓ->Size = System::Drawing::Size(30,36);
			this->buttonㄓ->TabIndex = 1;
			this->buttonㄓ->Text = L"ㄓ";
			this->buttonㄓ->UseVisualStyleBackColor = true;
			this->buttonㄓ->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this,&MyForm::button_Click);
			// 
			// buttonㄔ
			// 
			this->buttonㄔ->Font = (gcnew System::Drawing::Font(L"MS Mincho",11.25F,System::Drawing::FontStyle::Regular,System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonㄔ->Location = System::Drawing::Point(60,76);
			this->buttonㄔ->Name = L"buttonㄔ";
			this->buttonㄔ->Size = System::Drawing::Size(30,36);
			this->buttonㄔ->TabIndex = 1;
			this->buttonㄔ->Text = L"ㄔ";
			this->buttonㄔ->UseVisualStyleBackColor = true;
			this->buttonㄔ->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this,&MyForm::button_Click);
			// 
			// buttonㄕ
			// 
			this->buttonㄕ->Font = (gcnew System::Drawing::Font(L"MS Mincho",11.25F,System::Drawing::FontStyle::Regular,System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonㄕ->Location = System::Drawing::Point(90,76);
			this->buttonㄕ->Name = L"buttonㄕ";
			this->buttonㄕ->Size = System::Drawing::Size(30,36);
			this->buttonㄕ->TabIndex = 1;
			this->buttonㄕ->Text = L"ㄕ";
			this->buttonㄕ->UseVisualStyleBackColor = true;
			this->buttonㄕ->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this,&MyForm::button_Click);
			// 
			// buttonㄖ
			// 
			this->buttonㄖ->Font = (gcnew System::Drawing::Font(L"MS Mincho",11.25F,System::Drawing::FontStyle::Regular,System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonㄖ->Location = System::Drawing::Point(120,76);
			this->buttonㄖ->Name = L"buttonㄖ";
			this->buttonㄖ->Size = System::Drawing::Size(30,36);
			this->buttonㄖ->TabIndex = 1;
			this->buttonㄖ->Text = L"ㄖ";
			this->buttonㄖ->UseVisualStyleBackColor = true;
			this->buttonㄖ->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this,&MyForm::button_Click);
			// 
			// buttonㄗ
			// 
			this->buttonㄗ->Font = (gcnew System::Drawing::Font(L"MS Mincho",11.25F,System::Drawing::FontStyle::Regular,System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonㄗ->Location = System::Drawing::Point(150,76);
			this->buttonㄗ->Name = L"buttonㄗ";
			this->buttonㄗ->Size = System::Drawing::Size(30,36);
			this->buttonㄗ->TabIndex = 1;
			this->buttonㄗ->Text = L"ㄗ";
			this->buttonㄗ->UseVisualStyleBackColor = true;
			this->buttonㄗ->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this,&MyForm::button_Click);
			// 
			// buttonㄘ
			// 
			this->buttonㄘ->Font = (gcnew System::Drawing::Font(L"MS Mincho",11.25F,System::Drawing::FontStyle::Regular,System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonㄘ->Location = System::Drawing::Point(180,76);
			this->buttonㄘ->Name = L"buttonㄘ";
			this->buttonㄘ->Size = System::Drawing::Size(30,36);
			this->buttonㄘ->TabIndex = 1;
			this->buttonㄘ->Text = L"ㄘ";
			this->buttonㄘ->UseVisualStyleBackColor = true;
			this->buttonㄘ->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this,&MyForm::button_Click);
			// 
			// buttonㄙ
			// 
			this->buttonㄙ->Font = (gcnew System::Drawing::Font(L"MS Mincho",11.25F,System::Drawing::FontStyle::Regular,System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonㄙ->Location = System::Drawing::Point(210,76);
			this->buttonㄙ->Name = L"buttonㄙ";
			this->buttonㄙ->Size = System::Drawing::Size(30,36);
			this->buttonㄙ->TabIndex = 1;
			this->buttonㄙ->Text = L"ㄙ";
			this->buttonㄙ->UseVisualStyleBackColor = true;
			this->buttonㄙ->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this,&MyForm::button_Click);
			// 
			// buttonEraseLeft
			// 
			this->buttonEraseLeft->Font = (gcnew System::Drawing::Font(L"MS Gothic",10));
			this->buttonEraseLeft->Location = System::Drawing::Point(240,76);
			this->buttonEraseLeft->Name = L"buttonEraseLeft";
			this->buttonEraseLeft->Size = System::Drawing::Size(30,36);
			this->buttonEraseLeft->TabIndex = 1;
			this->buttonEraseLeft->Text = L"⌫";
			this->buttonEraseLeft->UseVisualStyleBackColor = true;
			this->buttonEraseLeft->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this,&MyForm::buttonErase_Click);
			// 
			// buttonㄚ
			// 
			this->buttonㄚ->Font = (gcnew System::Drawing::Font(L"MS Mincho",11.25F,System::Drawing::FontStyle::Regular,System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonㄚ->Location = System::Drawing::Point(15,152);
			this->buttonㄚ->Name = L"buttonㄚ";
			this->buttonㄚ->Size = System::Drawing::Size(30,36);
			this->buttonㄚ->TabIndex = 1;
			this->buttonㄚ->Text = L"ㄚ";
			this->buttonㄚ->UseVisualStyleBackColor = true;
			this->buttonㄚ->Visible = false;
			this->buttonㄚ->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this,&MyForm::button_Click2);
			// 
			// buttonㄛ
			// 
			this->buttonㄛ->Font = (gcnew System::Drawing::Font(L"MS Mincho",11.25F,System::Drawing::FontStyle::Regular,System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonㄛ->Location = System::Drawing::Point(45,152);
			this->buttonㄛ->Name = L"buttonㄛ";
			this->buttonㄛ->Size = System::Drawing::Size(30,36);
			this->buttonㄛ->TabIndex = 1;
			this->buttonㄛ->Text = L"ㄛ";
			this->buttonㄛ->UseVisualStyleBackColor = true;
			this->buttonㄛ->Visible = false;
			this->buttonㄛ->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this,&MyForm::button_Click2);
			// 
			// buttonㄜ
			// 
			this->buttonㄜ->Font = (gcnew System::Drawing::Font(L"MS Mincho",11.25F,System::Drawing::FontStyle::Regular,System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonㄜ->Location = System::Drawing::Point(75,152);
			this->buttonㄜ->Name = L"buttonㄜ";
			this->buttonㄜ->Size = System::Drawing::Size(30,36);
			this->buttonㄜ->TabIndex = 1;
			this->buttonㄜ->Text = L"ㄜ";
			this->buttonㄜ->UseVisualStyleBackColor = true;
			this->buttonㄜ->Visible = false;
			this->buttonㄜ->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this,&MyForm::button_Click2);
			// 
			// buttonㄝ
			// 
			this->buttonㄝ->Font = (gcnew System::Drawing::Font(L"MS Mincho",11.25F,System::Drawing::FontStyle::Regular,System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonㄝ->Location = System::Drawing::Point(105,152);
			this->buttonㄝ->Name = L"buttonㄝ";
			this->buttonㄝ->Size = System::Drawing::Size(30,36);
			this->buttonㄝ->TabIndex = 1;
			this->buttonㄝ->Text = L"ㄝ";
			this->buttonㄝ->UseVisualStyleBackColor = true;
			this->buttonㄝ->Visible = false;
			this->buttonㄝ->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this,&MyForm::button_Click2);
			// 
			// buttonㄞ
			// 
			this->buttonㄞ->Font = (gcnew System::Drawing::Font(L"MS Mincho",11.25F,System::Drawing::FontStyle::Regular,System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonㄞ->Location = System::Drawing::Point(135,152);
			this->buttonㄞ->Name = L"buttonㄞ";
			this->buttonㄞ->Size = System::Drawing::Size(30,36);
			this->buttonㄞ->TabIndex = 1;
			this->buttonㄞ->Text = L"ㄞ";
			this->buttonㄞ->UseVisualStyleBackColor = true;
			this->buttonㄞ->Visible = false;
			this->buttonㄞ->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this,&MyForm::button_Click2);
			// 
			// buttonㄟ
			// 
			this->buttonㄟ->Font = (gcnew System::Drawing::Font(L"MS Mincho",11.25F,System::Drawing::FontStyle::Regular,System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonㄟ->Location = System::Drawing::Point(165,152);
			this->buttonㄟ->Name = L"buttonㄟ";
			this->buttonㄟ->Size = System::Drawing::Size(30,36);
			this->buttonㄟ->TabIndex = 1;
			this->buttonㄟ->Text = L"ㄟ";
			this->buttonㄟ->UseVisualStyleBackColor = true;
			this->buttonㄟ->Visible = false;
			this->buttonㄟ->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this,&MyForm::button_Click2);
			// 
			// buttonㄠ
			// 
			this->buttonㄠ->Font = (gcnew System::Drawing::Font(L"MS Mincho",11.25F,System::Drawing::FontStyle::Regular,System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonㄠ->Location = System::Drawing::Point(195,152);
			this->buttonㄠ->Name = L"buttonㄠ";
			this->buttonㄠ->Size = System::Drawing::Size(30,36);
			this->buttonㄠ->TabIndex = 1;
			this->buttonㄠ->Text = L"ㄠ";
			this->buttonㄠ->UseVisualStyleBackColor = true;
			this->buttonㄠ->Visible = false;
			this->buttonㄠ->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this,&MyForm::button_Click2);
			// 
			// buttonㄡ
			// 
			this->buttonㄡ->Font = (gcnew System::Drawing::Font(L"MS Mincho",11.25F,System::Drawing::FontStyle::Regular,System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonㄡ->Location = System::Drawing::Point(225,152);
			this->buttonㄡ->Name = L"buttonㄡ";
			this->buttonㄡ->Size = System::Drawing::Size(30,36);
			this->buttonㄡ->TabIndex = 1;
			this->buttonㄡ->Text = L"ㄡ";
			this->buttonㄡ->UseVisualStyleBackColor = true;
			this->buttonㄡ->Visible = false;
			this->buttonㄡ->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this,&MyForm::button_Click2);
			// 
			// buttonㄢ
			// 
			this->buttonㄢ->Font = (gcnew System::Drawing::Font(L"MS Mincho",11.25F,System::Drawing::FontStyle::Regular,System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonㄢ->Location = System::Drawing::Point(30,190);
			this->buttonㄢ->Name = L"buttonㄢ";
			this->buttonㄢ->Size = System::Drawing::Size(30,36);
			this->buttonㄢ->TabIndex = 1;
			this->buttonㄢ->Text = L"ㄢ";
			this->buttonㄢ->UseVisualStyleBackColor = true;
			this->buttonㄢ->Visible = false;
			this->buttonㄢ->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this,&MyForm::button_Click2);
			// 
			// buttonㄣ
			// 
			this->buttonㄣ->Font = (gcnew System::Drawing::Font(L"MS Mincho",11.25F,System::Drawing::FontStyle::Regular,System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonㄣ->Location = System::Drawing::Point(60,190);
			this->buttonㄣ->Name = L"buttonㄣ";
			this->buttonㄣ->Size = System::Drawing::Size(30,36);
			this->buttonㄣ->TabIndex = 1;
			this->buttonㄣ->Text = L"ㄣ";
			this->buttonㄣ->UseVisualStyleBackColor = true;
			this->buttonㄣ->Visible = false;
			this->buttonㄣ->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this,&MyForm::button_Click2);
			// 
			// buttonㄤ
			// 
			this->buttonㄤ->Font = (gcnew System::Drawing::Font(L"MS Mincho",11.25F,System::Drawing::FontStyle::Regular,System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonㄤ->Location = System::Drawing::Point(90,190);
			this->buttonㄤ->Name = L"buttonㄤ";
			this->buttonㄤ->Size = System::Drawing::Size(30,36);
			this->buttonㄤ->TabIndex = 1;
			this->buttonㄤ->Text = L"ㄤ";
			this->buttonㄤ->UseVisualStyleBackColor = true;
			this->buttonㄤ->Visible = false;
			this->buttonㄤ->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this,&MyForm::button_Click2);
			// 
			// buttonㄥ
			// 
			this->buttonㄥ->Font = (gcnew System::Drawing::Font(L"MS Mincho",11.25F,System::Drawing::FontStyle::Regular,System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonㄥ->Location = System::Drawing::Point(120,190);
			this->buttonㄥ->Name = L"buttonㄥ";
			this->buttonㄥ->Size = System::Drawing::Size(30,36);
			this->buttonㄥ->TabIndex = 1;
			this->buttonㄥ->Text = L"ㄥ";
			this->buttonㄥ->UseVisualStyleBackColor = true;
			this->buttonㄥ->Visible = false;
			this->buttonㄥ->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this,&MyForm::button_Click2);
			// 
			// buttonㄦ
			// 
			this->buttonㄦ->Font = (gcnew System::Drawing::Font(L"MS Mincho",11.25F,System::Drawing::FontStyle::Regular,System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonㄦ->Location = System::Drawing::Point(150,190);
			this->buttonㄦ->Name = L"buttonㄦ";
			this->buttonㄦ->Size = System::Drawing::Size(30,36);
			this->buttonㄦ->TabIndex = 1;
			this->buttonㄦ->Text = L"ㄦ";
			this->buttonㄦ->UseVisualStyleBackColor = true;
			this->buttonㄦ->Visible = false;
			this->buttonㄦ->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this,&MyForm::button_Click2);
			// 
			// buttonㄧ2
			// 
			this->buttonㄧ2->Font = (gcnew System::Drawing::Font(L"MS Mincho",11.25F,System::Drawing::FontStyle::Regular,System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonㄧ2->Location = System::Drawing::Point(180,190);
			this->buttonㄧ2->Name = L"buttonㄧ2";
			this->buttonㄧ2->Size = System::Drawing::Size(30,36);
			this->buttonㄧ2->TabIndex = 1;
			this->buttonㄧ2->Text = L"ㄧ";
			this->buttonㄧ2->UseVisualStyleBackColor = true;
			this->buttonㄧ2->Visible = false;
			this->buttonㄧ2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this,&MyForm::button_Click2);
			// 
			// buttonㄨ2
			// 
			this->buttonㄨ2->Font = (gcnew System::Drawing::Font(L"MS Mincho",11.25F,System::Drawing::FontStyle::Regular,System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonㄨ2->Location = System::Drawing::Point(210,190);
			this->buttonㄨ2->Name = L"buttonㄨ2";
			this->buttonㄨ2->Size = System::Drawing::Size(30,36);
			this->buttonㄨ2->TabIndex = 1;
			this->buttonㄨ2->Text = L"ㄨ";
			this->buttonㄨ2->UseVisualStyleBackColor = true;
			this->buttonㄨ2->Visible = false;
			this->buttonㄨ2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this,&MyForm::button_Click2);
			// 
			// buttonㄩ2
			// 
			this->buttonㄩ2->Font = (gcnew System::Drawing::Font(L"MS Mincho",11.25F,System::Drawing::FontStyle::Regular,System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonㄩ2->Location = System::Drawing::Point(240,190);
			this->buttonㄩ2->Name = L"buttonㄩ2";
			this->buttonㄩ2->Size = System::Drawing::Size(30,36);
			this->buttonㄩ2->TabIndex = 1;
			this->buttonㄩ2->Text = L"ㄩ";
			this->buttonㄩ2->UseVisualStyleBackColor = true;
			this->buttonㄩ2->Visible = false;
			this->buttonㄩ2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this,&MyForm::button_Click2);
			// 
			// buttonˊ
			// 
			this->buttonˊ->Font = (gcnew System::Drawing::Font(L"MS Gothic",11.25F,System::Drawing::FontStyle::Regular,System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonˊ->Location = System::Drawing::Point(43,228);
			this->buttonˊ->Name = L"buttonˊ";
			this->buttonˊ->Size = System::Drawing::Size(46,36);
			this->buttonˊ->TabIndex = 1;
			this->buttonˊ->Text = L"ˊ";
			this->buttonˊ->UseVisualStyleBackColor = true;
			this->buttonˊ->Visible = false;
			this->buttonˊ->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this,&MyForm::button_Click3);
			// 
			// buttonˇ
			// 
			this->buttonˇ->Font = (gcnew System::Drawing::Font(L"MS Gothic",11.25F,System::Drawing::FontStyle::Regular,System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonˇ->Location = System::Drawing::Point(89,228);
			this->buttonˇ->Name = L"buttonˇ";
			this->buttonˇ->Size = System::Drawing::Size(46,36);
			this->buttonˇ->TabIndex = 1;
			this->buttonˇ->Text = L"ˇ";
			this->buttonˇ->UseVisualStyleBackColor = true;
			this->buttonˇ->Visible = false;
			this->buttonˇ->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this,&MyForm::button_Click3);
			// 
			// buttonˋ
			// 
			this->buttonˋ->Font = (gcnew System::Drawing::Font(L"MS Gothic",11.25F,System::Drawing::FontStyle::Regular,System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonˋ->Location = System::Drawing::Point(135,228);
			this->buttonˋ->Name = L"buttonˋ";
			this->buttonˋ->Size = System::Drawing::Size(46,36);
			this->buttonˋ->TabIndex = 1;
			this->buttonˋ->Text = L"ˋ";
			this->buttonˋ->UseVisualStyleBackColor = true;
			this->buttonˋ->Visible = false;
			this->buttonˋ->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this,&MyForm::button_Click3);
			// 
			// button輕
			// 
			this->button輕->Font = (gcnew System::Drawing::Font(L"MS Gothic",11.25F,System::Drawing::FontStyle::Regular,System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button輕->Location = System::Drawing::Point(181,228);
			this->button輕->Name = L"button輕";
			this->button輕->Size = System::Drawing::Size(46,36);
			this->button輕->TabIndex = 1;
			this->button輕->Text = L"˙";
			this->button輕->UseVisualStyleBackColor = true;
			this->button輕->Visible = false;
			this->button輕->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this,&MyForm::button_Click3);
			// 
			// buttonSpace
			// 
			this->buttonSpace->Font = (gcnew System::Drawing::Font(L"MS Gothic",11.25F,System::Drawing::FontStyle::Regular,System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonSpace->Location = System::Drawing::Point(15,114);
			this->buttonSpace->Name = L"buttonSpace";
			this->buttonSpace->Size = System::Drawing::Size(195,36);
			this->buttonSpace->TabIndex = 1;
			this->buttonSpace->Text = L" ";
			this->buttonSpace->UseVisualStyleBackColor = true;
			this->buttonSpace->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this,&MyForm::button_Click3);
			// 
			// buttonReturn
			// 
			this->buttonReturn->Font = (gcnew System::Drawing::Font(L"MS Gothic",9));
			this->buttonReturn->Location = System::Drawing::Point(210,114);
			this->buttonReturn->Name = L"buttonReturn";
			this->buttonReturn->Size = System::Drawing::Size(45,36);
			this->buttonReturn->TabIndex = 1;
			this->buttonReturn->Text = L"⏎";
			this->buttonReturn->UseVisualStyleBackColor = true;
			this->buttonReturn->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this,&MyForm::buttonReturn_Click);
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(270,150);
			this->Controls->Add(this->buttonEraseLeft);
			this->Controls->Add(this->buttonㄙ);
			this->Controls->Add(this->buttonㄘ);
			this->Controls->Add(this->buttonㄗ);
			this->Controls->Add(this->buttonReturn);
			this->Controls->Add(this->buttonSpace);
			this->Controls->Add(this->button輕);
			this->Controls->Add(this->buttonㄖ);
			this->Controls->Add(this->buttonˋ);
			this->Controls->Add(this->buttonㄕ);
			this->Controls->Add(this->buttonˇ);
			this->Controls->Add(this->buttonㄔ);
			this->Controls->Add(this->buttonˊ);
			this->Controls->Add(this->buttonㄓ);
			this->Controls->Add(this->buttonㄩ2);
			this->Controls->Add(this->buttonㄩ);
			this->Controls->Add(this->buttonㄨ2);
			this->Controls->Add(this->buttonㄨ);
			this->Controls->Add(this->buttonㄧ2);
			this->Controls->Add(this->buttonㄧ);
			this->Controls->Add(this->buttonㄦ);
			this->Controls->Add(this->buttonㄒ);
			this->Controls->Add(this->buttonㄥ);
			this->Controls->Add(this->buttonㄑ);
			this->Controls->Add(this->buttonㄤ);
			this->Controls->Add(this->buttonㄐ);
			this->Controls->Add(this->buttonㄣ);
			this->Controls->Add(this->buttonㄏ);
			this->Controls->Add(this->buttonㄢ);
			this->Controls->Add(this->buttonㄎ);
			this->Controls->Add(this->buttonㄍ);
			this->Controls->Add(this->buttonㄡ);
			this->Controls->Add(this->buttonㄌ);
			this->Controls->Add(this->buttonㄠ);
			this->Controls->Add(this->buttonㄋ);
			this->Controls->Add(this->buttonㄟ);
			this->Controls->Add(this->buttonㄊ);
			this->Controls->Add(this->buttonㄞ);
			this->Controls->Add(this->buttonㄉ);
			this->Controls->Add(this->buttonㄝ);
			this->Controls->Add(this->buttonㄈ);
			this->Controls->Add(this->buttonㄜ);
			this->Controls->Add(this->buttonㄇ);
			this->Controls->Add(this->buttonㄛ);
			this->Controls->Add(this->buttonㄆ);
			this->Controls->Add(this->buttonㄚ);
			this->Controls->Add(this->buttonㄅ);
			this->Controls->Add(this->chkShift);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->Text = L"注音鍵盤";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this,&MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	protected:
		virtual property System::Windows::Forms::CreateParams ^CreateParams
		{
			System::Windows::Forms::CreateParams ^get() override
			{
				System::Windows::Forms::CreateParams ^param = __super::CreateParams;
				param->ExStyle |= 0x08000000L; //WS_EX_NOACTIVATE
				return param;
			}
			
		}
	private:
		System::Void MoveBtn(System::Windows::Forms::Button ^Button, int X, int Y)
		{
			Button->Location=System::Drawing::Point(Button->Location.X+X,Button->Location.Y+Y);
		}
		System::Void MyForm_Load(System::Object^  sender,System::EventArgs^  e) {
			MoveBtn(buttonㄚ,0,-152);
			MoveBtn(buttonㄛ,0,-152);
			MoveBtn(buttonㄜ,0,-152);
			MoveBtn(buttonㄝ,0,-152);
			MoveBtn(buttonㄞ,0,-152);
			MoveBtn(buttonㄟ,0,-152);
			MoveBtn(buttonㄠ,0,-152);
			MoveBtn(buttonㄡ,0,-152);
			MoveBtn(buttonㄢ,0,-152);
			MoveBtn(buttonㄣ,0,-152);
			MoveBtn(buttonㄤ,0,-152);
			MoveBtn(buttonㄥ,0,-152);
			MoveBtn(buttonㄦ,0,-152);
			MoveBtn(buttonㄧ2,0,-152);
			MoveBtn(buttonㄨ2,0,-152);
			MoveBtn(buttonㄩ2,0,-152);
			MoveBtn(buttonˊ,0,-152);
			MoveBtn(buttonˇ,0,-152);
			MoveBtn(buttonˋ,0,-152);
			MoveBtn(button輕,0,-152);
		}
		System::Void chkShift_CheckedChanged(System::Object^  sender,System::EventArgs^  e) {
			this->SuspendLayout();
			buttonㄅ->Visible=!chkShift->Checked;
			buttonㄆ->Visible=!chkShift->Checked;
			buttonㄅ->Visible=!chkShift->Checked;
			buttonㄆ->Visible=!chkShift->Checked;
			buttonㄇ->Visible=!chkShift->Checked;
			buttonㄈ->Visible=!chkShift->Checked;
			buttonㄉ->Visible=!chkShift->Checked;
			buttonㄊ->Visible=!chkShift->Checked;
			buttonㄋ->Visible=!chkShift->Checked;
			buttonㄌ->Visible=!chkShift->Checked;
			buttonㄍ->Visible=!chkShift->Checked;
			buttonㄎ->Visible=!chkShift->Checked;
			buttonㄏ->Visible=!chkShift->Checked;
			buttonㄐ->Visible=!chkShift->Checked;
			buttonㄑ->Visible=!chkShift->Checked;
			buttonㄒ->Visible=!chkShift->Checked;
			buttonㄧ->Visible=!chkShift->Checked;
			buttonㄨ->Visible=!chkShift->Checked;
			buttonㄩ->Visible=!chkShift->Checked;
			buttonㄓ->Visible=!chkShift->Checked;
			buttonㄔ->Visible=!chkShift->Checked;
			buttonㄕ->Visible=!chkShift->Checked;
			buttonㄖ->Visible=!chkShift->Checked;
			buttonㄗ->Visible=!chkShift->Checked;
			buttonㄘ->Visible=!chkShift->Checked;
			buttonㄙ->Visible=!chkShift->Checked;
			buttonㄚ->Visible=chkShift->Checked;
			buttonㄛ->Visible=chkShift->Checked;
			buttonㄜ->Visible=chkShift->Checked; 
			buttonㄝ->Visible=chkShift->Checked; 
			buttonㄞ->Visible=chkShift->Checked; 
			buttonㄟ->Visible=chkShift->Checked; 
			buttonㄠ->Visible=chkShift->Checked; 
			buttonㄡ->Visible=chkShift->Checked; 
			buttonㄢ->Visible=chkShift->Checked; 
			buttonㄣ->Visible=chkShift->Checked; 
			buttonㄤ->Visible=chkShift->Checked; 
			buttonㄥ->Visible=chkShift->Checked; 
			buttonㄦ->Visible=chkShift->Checked; 
			buttonㄧ2->Visible=chkShift->Checked;
			buttonㄨ2->Visible=chkShift->Checked;
			buttonㄩ2->Visible=chkShift->Checked;
			buttonˊ->Visible=chkShift->Checked;
			buttonˇ->Visible=chkShift->Checked;
			buttonˋ->Visible=chkShift->Checked;
			button輕->Visible=chkShift->Checked;
			this->ResumeLayout(false);
		}
		System::Void button_Click(System::Object^  sender,System::Windows::Forms::MouseEventArgs^  e) {
			Button ^button = safe_cast<Button ^>(sender);
			SendKeys::Send(button->Text);
			chkShift->Checked=true;
		}
		System::Void button_Click2(System::Object^  sender,System::Windows::Forms::MouseEventArgs^  e) {
			Button ^button = safe_cast<Button ^>(sender);
			SendKeys::Send(button->Text);
		}
		System::Void button_Click3(System::Object^  sender,System::Windows::Forms::MouseEventArgs^  e) {
			Button ^button = safe_cast<Button ^>(sender);
			SendKeys::Send(button->Text);
			chkShift->Checked=false;
		}
		System::Void buttonErase_Click(System::Object^  sender,System::Windows::Forms::MouseEventArgs^  e) {
			SendKeys::Send("{BS}");
			chkShift->Checked=false;
		}
		System::Void buttonReturn_Click(System::Object^  sender,System::Windows::Forms::MouseEventArgs^  e) {
			SendKeys::Send("{ENTER}");
			chkShift->Checked=false;
		}
	};
}
