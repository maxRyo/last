#pragma once
#include "PublicData.h";


namespace Fuck {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MydataForm �̊T�v
	/// </summary>
	public ref class MydataForm : public System::Windows::Forms::Form
	{
	public:
		MydataForm(void)
		{
			InitializeComponent();
			//
			//TODO: �����ɃR���X�g���N�^�[ �R�[�h��ǉ����܂�
			//
			LoadMyData();
		}

	protected:
		/// <summary>
		/// �g�p���̃��\�[�X�����ׂăN���[���A�b�v���܂��B
		/// </summary>
		~MydataForm()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Button^ b_MydataReturn;
	protected:
	public: System::Windows::Forms::Button^ b_Logout;


	private: System::Windows::Forms::Button^ b_Detail;
	private: System::Windows::Forms::Button^ b_Delete;
	protected:

	protected:



	private: System::Windows::Forms::Label^ l_name;
	private: System::Windows::Forms::Label^ l_Namedata;


	private: System::Windows::Forms::Label^ l_Password;
	private: System::Windows::Forms::Label^ l_Passworddata;
	private: System::Windows::Forms::CheckedListBox^ clb_Reservedata;






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
			this->b_MydataReturn = (gcnew System::Windows::Forms::Button());
			this->b_Logout = (gcnew System::Windows::Forms::Button());
			this->b_Detail = (gcnew System::Windows::Forms::Button());
			this->b_Delete = (gcnew System::Windows::Forms::Button());
			this->l_name = (gcnew System::Windows::Forms::Label());
			this->l_Namedata = (gcnew System::Windows::Forms::Label());
			this->l_Password = (gcnew System::Windows::Forms::Label());
			this->l_Passworddata = (gcnew System::Windows::Forms::Label());
			this->clb_Reservedata = (gcnew System::Windows::Forms::CheckedListBox());
			this->SuspendLayout();
			// 
			// b_MydataReturn
			// 
			this->b_MydataReturn->Location = System::Drawing::Point(15, 14);
			this->b_MydataReturn->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->b_MydataReturn->Name = L"b_MydataReturn";
			this->b_MydataReturn->Size = System::Drawing::Size(100, 36);
			this->b_MydataReturn->TabIndex = 0;
			this->b_MydataReturn->Text = L"�߂�";
			this->b_MydataReturn->UseVisualStyleBackColor = true;
			this->b_MydataReturn->Click += gcnew System::EventHandler(this, &MydataForm::b_MydataReturn_Click);
			// 
			// b_Logout
			// 
			this->b_Logout->Location = System::Drawing::Point(612, 14);
			this->b_Logout->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->b_Logout->Name = L"b_Logout";
			this->b_Logout->Size = System::Drawing::Size(100, 36);
			this->b_Logout->TabIndex = 1;
			this->b_Logout->Text = L"���O�A�E�g";
			this->b_Logout->UseVisualStyleBackColor = true;
			this->b_Logout->Click += gcnew System::EventHandler(this, &MydataForm::b_Logout_Click);
			// 
			// b_Detail
			// 
			this->b_Detail->Location = System::Drawing::Point(229, 574);
			this->b_Detail->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->b_Detail->Name = L"b_Detail";
			this->b_Detail->Size = System::Drawing::Size(100, 36);
			this->b_Detail->TabIndex = 2;
			this->b_Detail->Text = L"�\��ڍ�";
			this->b_Detail->UseVisualStyleBackColor = true;
			this->b_Detail->Click += gcnew System::EventHandler(this, &MydataForm::b_Detail_Click);
			// 
			// b_Delete
			// 
			this->b_Delete->Location = System::Drawing::Point(398, 574);
			this->b_Delete->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->b_Delete->Name = L"b_Delete";
			this->b_Delete->Size = System::Drawing::Size(100, 36);
			this->b_Delete->TabIndex = 3;
			this->b_Delete->Text = L"�\��폜";
			this->b_Delete->UseVisualStyleBackColor = true;
			this->b_Delete->Click += gcnew System::EventHandler(this, &MydataForm::b_Delete_Click);
			// 
			// l_name
			// 
			this->l_name->AutoSize = true;
			this->l_name->Location = System::Drawing::Point(172, 119);
			this->l_name->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->l_name->Name = L"l_name";
			this->l_name->Size = System::Drawing::Size(95, 18);
			this->l_name->TabIndex = 4;
			this->l_name->Text = L"���[�U�[���F";
			// 
			// l_Namedata
			// 
			this->l_Namedata->AutoSize = true;
			this->l_Namedata->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->l_Namedata->Location = System::Drawing::Point(345, 113);
			this->l_Namedata->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->l_Namedata->Name = L"l_Namedata";
			this->l_Namedata->Size = System::Drawing::Size(70, 24);
			this->l_Namedata->TabIndex = 5;
			this->l_Namedata->Text = L"Name";
			// 
			// l_Password
			// 
			this->l_Password->AutoSize = true;
			this->l_Password->Location = System::Drawing::Point(172, 193);
			this->l_Password->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->l_Password->Name = L"l_Password";
			this->l_Password->Size = System::Drawing::Size(88, 18);
			this->l_Password->TabIndex = 6;
			this->l_Password->Text = L"�p�X���[�h�F";
			// 
			// l_Passworddata
			// 
			this->l_Passworddata->AutoSize = true;
			this->l_Passworddata->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->l_Passworddata->Location = System::Drawing::Point(345, 187);
			this->l_Passworddata->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->l_Passworddata->Name = L"l_Passworddata";
			this->l_Passworddata->Size = System::Drawing::Size(114, 24);
			this->l_Passworddata->TabIndex = 7;
			this->l_Passworddata->Text = L"Password";
			// 
			// clb_Reservedata
			// 
			this->clb_Reservedata->FormattingEnabled = true;
			this->clb_Reservedata->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"�\��ς݂̕����͂���܂���" });
			this->clb_Reservedata->Location = System::Drawing::Point(106, 230);
			this->clb_Reservedata->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->clb_Reservedata->Name = L"clb_Reservedata";
			this->clb_Reservedata->Size = System::Drawing::Size(516, 290);
			this->clb_Reservedata->TabIndex = 8;
			// 
			// MydataForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(728, 664);
			this->Controls->Add(this->clb_Reservedata);
			this->Controls->Add(this->l_Passworddata);
			this->Controls->Add(this->l_Password);
			this->Controls->Add(this->l_Namedata);
			this->Controls->Add(this->l_name);
			this->Controls->Add(this->b_Delete);
			this->Controls->Add(this->b_Detail);
			this->Controls->Add(this->b_Logout);
			this->Controls->Add(this->b_MydataReturn);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(750, 720);
			this->MinimumSize = System::Drawing::Size(750, 720);
			this->Name = L"MydataForm";
			this->Text = L"�}�C�y�[�W";
			this->Load += gcnew System::EventHandler(this, &MydataForm::MydataForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void LoadMyData() {
			for (int i = 0; i < PublicData::Room1Index; i++)
			{

				if (Convert::ToInt32(PublicData::Room1Array[i, 0]) == Id)
				{

					clb_Reservedata->Items->Add("�\��: " +
						PublicData::Room1Array[i, 1] + ", " +
						PublicData::Room1Array[i, 2] + "," +
						PublicData::Room1Array[i, 3] + ", " +
						PublicData::Room1Array[i, 4] + ", " +
						PublicData::Room1Array[i, 5]);
				}
			}
			for (int i = 0; i < PublicData::Room2Index; i++)
			{
				if (Convert::ToInt32(PublicData::Room2Array[i, 0]) == Id)
				{
					clb_Reservedata->Items->Add("�\��: " +
						PublicData::Room2Array[i, 1] + ", " +
						PublicData::Room2Array[i, 2] + "," +
						PublicData::Room2Array[i, 3] + ", " +
						PublicData::Room2Array[i, 4] + ", " +
						PublicData::Room2Array[i, 5]);
				}
			}
			for (int i = 0; i < PublicData::Room3Index; i++)
			{
				if (Convert::ToInt32(PublicData::Room3Array[i, 0]) == Id)
				{
					clb_Reservedata->Items->Add("�\��: " +
						PublicData::Room3Array[i, 1] + ", " +
						PublicData::Room3Array[i, 2] + "," +
						PublicData::Room3Array[i, 3] + ", " +
						PublicData::Room3Array[i, 4] + ", " +
						PublicData::Room3Array[i, 5]);
				}
			}
			for (int i = 0; i < PublicData::Room4Index; i++)
			{
				if (Convert::ToInt32(PublicData::Room4Array[i, 0]) == Id)
				{
					clb_Reservedata->Items->Add("�\��: " +
						PublicData::Room4Array[i, 1] + ", " +
						PublicData::Room4Array[i, 2] + "," +
						PublicData::Room4Array[i, 3] + ", " +
						PublicData::Room4Array[i, 4] + ", " +
						PublicData::Room4Array[i, 5]);
				}
			}
			for (int i = 0; i < PublicData::Room5Index; i++)
			{
				if (Convert::ToInt32(PublicData::Room5Array[i, 0]) == Id)
				{
					clb_Reservedata->Items->Add("�\��: " +
						PublicData::Room5Array[i, 1] + ", " +
						PublicData::Room5Array[i, 2] + "," +
						PublicData::Room5Array[i, 3] + ", " +
						PublicData::Room5Array[i, 4] + ", " +
						PublicData::Room5Array[i, 5]);
				}
			}
			for (int i = 0; i < PublicData::Room6Index; i++)
			{
				if (Convert::ToInt32(PublicData::Room6Array[i, 0]) == Id)
				{
					clb_Reservedata->Items->Add("�\��: " +
						PublicData::Room6Array[i, 1] + ", " +
						PublicData::Room6Array[i, 2] + "," +
						PublicData::Room6Array[i, 3] + ", " +
						PublicData::Room6Array[i, 4] + ", " +
						PublicData::Room6Array[i, 5]);
				}
			}
		}
	private: System::Void b_MydataReturn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void b_Logout_Click(System::Object^ sender, System::EventArgs^ e) {
		//LoginForm^ login = gcnew LoginForm();
		//login->Show();
	}
	private: System::Void b_Detail_Click(System::Object^ sender, System::EventArgs^ e) {
		if (clb_Reservedata->CheckedItems->Count > 0) {
			String^ selected = "";
			for each (Object ^ item in clb_Reservedata->CheckedItems) {
				selected += item->ToString() + "\n";
			}
			MessageBox::Show(selected, "�\��m�F");
		}
		else {
			MessageBox::Show("�\��m�F�������Ȗڂ�I�����Ă�������!", "�m�F");
		}
	}
	private: System::Void b_Delete_Click(System::Object^ sender, System::EventArgs^ e) {
		if (clb_Reservedata->CheckedItems->Count > 0) {
			System::Windows::Forms::DialogResult result = MessageBox::Show("�\��L�����Z�����܂����H", "�L�����Z���m�F",
				MessageBoxButtons::YesNo, MessageBoxIcon::Warning
			);
			if (result == System::Windows::Forms::DialogResult::Yes) {
				for (int i = clb_Reservedata->CheckedItems->Count - 1; i >= 0; i--) {
					int index = clb_Reservedata->Items->IndexOf(clb_Reservedata->CheckedItems[i]);
					clb_Reservedata->Items->RemoveAt(index);
				}
			}
		}
		else {
			MessageBox::Show("�L�����Z���������Ȗڂ�I�����Ă�������!", "�m�F");
		}
	}
	private: System::Void MydataForm_Load(System::Object^ sender, System::EventArgs^ e) {
		//this->l_Namedata = ���O�C���t�H�[��������炤�l
		//this->l_Passworddata = //
		//this->clb_Reservedata = //
	}
	};
}
