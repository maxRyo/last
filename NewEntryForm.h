#pragma once

namespace Fuck{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// NewEntryForm �̊T�v
	/// </summary>
	public ref class NewEntryForm : public System::Windows::Forms::Form
	{
	public:
		NewEntryForm(void)
		{
			InitializeComponent();
			//
			//TODO: �����ɃR���X�g���N�^�[ �R�[�h��ǉ����܂�
			//
		}

	protected:
		/// <summary>
		/// �g�p���̃��\�[�X�����ׂăN���[���A�b�v���܂��B
		/// </summary>
		~NewEntryForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ l_NewName;
	private: System::Windows::Forms::Label^ l_NewPassword;
	private: System::Windows::Forms::TextBox^ tb_NewName;
	private: System::Windows::Forms::TextBox^ tb_NewPassword;
	private: System::Windows::Forms::Button^ b_Entry;
	private: System::Windows::Forms::Button^ b_EntryReturn;
	protected:


	private:
		/// <summary>
		/// �K�v�ȃf�U�C�i�[�ϐ��ł��B
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �f�U�C�i�[ �T�|�[�g�ɕK�v�ȃ��\�b�h�ł��B���̃��\�b�h�̓��e��
		/// �R�[�h �G�f�B�^�[�ŕύX���Ȃ��ł��������B
		/// </summary>
		void InitializeComponent(void)
		{
			this->l_NewName = (gcnew System::Windows::Forms::Label());
			this->l_NewPassword = (gcnew System::Windows::Forms::Label());
			this->tb_NewName = (gcnew System::Windows::Forms::TextBox());
			this->tb_NewPassword = (gcnew System::Windows::Forms::TextBox());
			this->b_Entry = (gcnew System::Windows::Forms::Button());
			this->b_EntryReturn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// l_NewName
			// 
			this->l_NewName->AutoSize = true;
			this->l_NewName->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->l_NewName->Location = System::Drawing::Point(75, 272);
			this->l_NewName->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->l_NewName->Name = L"l_NewName";
			this->l_NewName->Size = System::Drawing::Size(101, 18);
			this->l_NewName->TabIndex = 0;
			this->l_NewName->Text = L"���[�U�[���F";
			// 
			// l_NewPassword
			// 
			this->l_NewPassword->AutoSize = true;
			this->l_NewPassword->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->l_NewPassword->Location = System::Drawing::Point(81, 392);
			this->l_NewPassword->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->l_NewPassword->Name = L"l_NewPassword";
			this->l_NewPassword->Size = System::Drawing::Size(94, 18);
			this->l_NewPassword->TabIndex = 1;
			this->l_NewPassword->Text = L"�p�X���[�h�F";
			// 
			// tb_NewName
			// 
			this->tb_NewName->Location = System::Drawing::Point(236, 272);
			this->tb_NewName->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tb_NewName->Name = L"tb_NewName";
			this->tb_NewName->Size = System::Drawing::Size(402, 25);
			this->tb_NewName->TabIndex = 2;
			// 
			// tb_NewPassword
			// 
			this->tb_NewPassword->Location = System::Drawing::Point(236, 386);
			this->tb_NewPassword->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tb_NewPassword->Name = L"tb_NewPassword";
			this->tb_NewPassword->Size = System::Drawing::Size(400, 25);
			this->tb_NewPassword->TabIndex = 3;
			// 
			// b_Entry
			// 
			this->b_Entry->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->b_Entry->Location = System::Drawing::Point(279, 514);
			this->b_Entry->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->b_Entry->Name = L"b_Entry";
			this->b_Entry->Size = System::Drawing::Size(166, 77);
			this->b_Entry->TabIndex = 4;
			this->b_Entry->Text = L"�V�K�쐬";
			this->b_Entry->UseVisualStyleBackColor = true;
			this->b_Entry->Click += gcnew System::EventHandler(this, &NewEntryForm::b_Entry_Click);
			// 
			// b_EntryReturn
			// 
			this->b_EntryReturn->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->b_EntryReturn->Location = System::Drawing::Point(20, 31);
			this->b_EntryReturn->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->b_EntryReturn->Name = L"b_EntryReturn";
			this->b_EntryReturn->Size = System::Drawing::Size(155, 52);
			this->b_EntryReturn->TabIndex = 5;
			this->b_EntryReturn->Text = L"�߂�";
			this->b_EntryReturn->UseVisualStyleBackColor = true;
			this->b_EntryReturn->Click += gcnew System::EventHandler(this, &NewEntryForm::b_EntryReturn_Click);
			// 
			// NewEntryForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(728, 664);
			this->Controls->Add(this->b_EntryReturn);
			this->Controls->Add(this->b_Entry);
			this->Controls->Add(this->tb_NewPassword);
			this->Controls->Add(this->tb_NewName);
			this->Controls->Add(this->l_NewPassword);
			this->Controls->Add(this->l_NewName);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(750, 720);
			this->Name = L"NewEntryForm";
			this->Text = L"NewEntryForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ newname;
		String^ newpass;
	private: System::Void b_Entry_Click(System::Object^ sender, System::EventArgs^ e) {
		//�e�L�X�g�{�b�N�X�̃f�[�^�̎擾
		try {
			//���[�U�[���ƃp�X���[�h���i�[����userdata.txt���J��
			System::IO::StreamWriter^ writer = gcnew System::IO::StreamWriter("./userdata.txt", true);
			//userdata.txt�ɒ��g������ꍇ�A���̒l��ǂݎ��
			newname = tb_NewName->Text;
			newpass = tb_NewPassword->Text;
			if (newname->Length < 8 || newpass->Length < 8) {
				MessageBox::Show("�p�X���[�h��8�����ȏ�ɂ��Ă��������B", "�G���[", MessageBoxButtons::OK);
			}
			else if (newname->Length > 16 || newpass->Length > 16) {
				MessageBox::Show("�p�X���[�h��16�����ȉ��ɂ��Ă��������B", "�G���[", MessageBoxButtons::OK);
			}


			writer->WriteLine(newname + newpass);
			//userdata.txt�����
			writer->Close();
		}
		catch (System::IO::FileNotFoundException^ ex) {
			//�t�@�C�������݂��Ȃ��ꍇ�A�����l0�ŐV���ȃe�L�X�g�t�@�C�����쐬
			System::IO::File::AppendAllText("./userdata.txt", "0");
			System::Diagnostics::Debug::WriteLine("---�G���[���b�Z�[�W---\n" + ex->Message);
		}
	}
	private: System::Void b_EntryReturn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}
