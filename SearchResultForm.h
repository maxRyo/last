#pragma once
#include "RoomDatailForm.h"
#include "PublicData.h"
namespace Fuck {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// SearchResultForm �̊T�v
	/// </summary>
	public ref class SearchResultForm : public System::Windows::Forms::Form
	{
	public:
		SearchResultForm(void)
		{
			InitializeComponent();
			//
			//TODO: �����ɃR���X�g���N�^�[ �R�[�h��ǉ����܂�
			//
			Result();

		}

	protected:
		/// <summary>
		/// �g�p���̃��\�[�X�����ׂăN���[���A�b�v���܂��B
		/// </summary>
		~SearchResultForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ b_SearchResultReturn;
	public: System::Windows::Forms::Button^ b_Room1;
	private:
	public: System::Windows::Forms::Button^ b_Room2;
	public: System::Windows::Forms::Button^ b_Room4;
	public: System::Windows::Forms::Button^ b_Room3;
	public: System::Windows::Forms::Button^ b_Room5;
	public: System::Windows::Forms::Button^ b_Room6;



	protected:

	protected:






	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;






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
			this->b_SearchResultReturn = (gcnew System::Windows::Forms::Button());
			this->b_Room1 = (gcnew System::Windows::Forms::Button());
			this->b_Room2 = (gcnew System::Windows::Forms::Button());
			this->b_Room4 = (gcnew System::Windows::Forms::Button());
			this->b_Room3 = (gcnew System::Windows::Forms::Button());
			this->b_Room5 = (gcnew System::Windows::Forms::Button());
			this->b_Room6 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// b_SearchResultReturn
			// 
			this->b_SearchResultReturn->BackColor = System::Drawing::Color::LawnGreen;
			this->b_SearchResultReturn->Font = (gcnew System::Drawing::Font(L"�l�r �S�V�b�N", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->b_SearchResultReturn->Location = System::Drawing::Point(32, 14);
			this->b_SearchResultReturn->Margin = System::Windows::Forms::Padding(4);
			this->b_SearchResultReturn->Name = L"b_SearchResultReturn";
			this->b_SearchResultReturn->Size = System::Drawing::Size(136, 60);
			this->b_SearchResultReturn->TabIndex = 0;
			this->b_SearchResultReturn->Text = L"�߂�";
			this->b_SearchResultReturn->UseVisualStyleBackColor = false;
			this->b_SearchResultReturn->Click += gcnew System::EventHandler(this, &SearchResultForm::b_SearchResultReturn_Click);
			// 
			// b_Room1
			// 
			this->b_Room1->Font = (gcnew System::Drawing::Font(L"�l�r �S�V�b�N", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->b_Room1->Location = System::Drawing::Point(59, 131);
			this->b_Room1->Margin = System::Windows::Forms::Padding(4);
			this->b_Room1->Name = L"b_Room1";
			this->b_Room1->Size = System::Drawing::Size(241, 125);
			this->b_Room1->TabIndex = 1;
			this->b_Room1->Text = L"��c��1";
			this->b_Room1->UseVisualStyleBackColor = true;
			this->b_Room1->Visible = false;
			this->b_Room1->Click += gcnew System::EventHandler(this, &SearchResultForm::b_Room1_Click);
			// 
			// b_Room2
			// 
			this->b_Room2->Font = (gcnew System::Drawing::Font(L"�l�r �S�V�b�N", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->b_Room2->Location = System::Drawing::Point(374, 131);
			this->b_Room2->Margin = System::Windows::Forms::Padding(4);
			this->b_Room2->Name = L"b_Room2";
			this->b_Room2->Size = System::Drawing::Size(241, 125);
			this->b_Room2->TabIndex = 2;
			this->b_Room2->Text = L"��c��2";
			this->b_Room2->UseVisualStyleBackColor = true;
			this->b_Room2->Visible = false;
			this->b_Room2->Click += gcnew System::EventHandler(this, &SearchResultForm::b_Room2_Click);
			// 
			// b_Room4
			// 
			this->b_Room4->Font = (gcnew System::Drawing::Font(L"�l�r �S�V�b�N", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->b_Room4->Location = System::Drawing::Point(374, 309);
			this->b_Room4->Margin = System::Windows::Forms::Padding(4);
			this->b_Room4->Name = L"b_Room4";
			this->b_Room4->Size = System::Drawing::Size(241, 125);
			this->b_Room4->TabIndex = 3;
			this->b_Room4->Text = L"��z�[��";
			this->b_Room4->UseVisualStyleBackColor = true;
			this->b_Room4->Visible = false;
			this->b_Room4->Click += gcnew System::EventHandler(this, &SearchResultForm::b_Room4_Click);
			// 
			// b_Room3
			// 
			this->b_Room3->Font = (gcnew System::Drawing::Font(L"�l�r �S�V�b�N", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->b_Room3->Location = System::Drawing::Point(55, 314);
			this->b_Room3->Margin = System::Windows::Forms::Padding(4);
			this->b_Room3->Name = L"b_Room3";
			this->b_Room3->Size = System::Drawing::Size(241, 125);
			this->b_Room3->TabIndex = 4;
			this->b_Room3->Text = L"���c��";
			this->b_Room3->UseVisualStyleBackColor = true;
			this->b_Room3->Visible = false;
			this->b_Room3->Click += gcnew System::EventHandler(this, &SearchResultForm::b_Room3_Click);
			// 
			// b_Room5
			// 
			this->b_Room5->Font = (gcnew System::Drawing::Font(L"�l�r �S�V�b�N", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->b_Room5->Location = System::Drawing::Point(55, 477);
			this->b_Room5->Margin = System::Windows::Forms::Padding(4);
			this->b_Room5->Name = L"b_Room5";
			this->b_Room5->Size = System::Drawing::Size(241, 125);
			this->b_Room5->TabIndex = 5;
			this->b_Room5->Text = L"����c��";
			this->b_Room5->UseVisualStyleBackColor = true;
			this->b_Room5->Visible = false;
			this->b_Room5->Click += gcnew System::EventHandler(this, &SearchResultForm::b_Room5_Click);
			// 
			// b_Room6
			// 
			this->b_Room6->Font = (gcnew System::Drawing::Font(L"�l�r �S�V�b�N", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->b_Room6->Location = System::Drawing::Point(374, 477);
			this->b_Room6->Margin = System::Windows::Forms::Padding(4);
			this->b_Room6->Name = L"b_Room6";
			this->b_Room6->Size = System::Drawing::Size(241, 125);
			this->b_Room6->TabIndex = 6;
			this->b_Room6->Text = L"PC��";
			this->b_Room6->UseVisualStyleBackColor = true;
			this->b_Room6->Visible = false;
			this->b_Room6->Click += gcnew System::EventHandler(this, &SearchResultForm::b_Room6_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(201, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(312, 36);
			this->label1->TabIndex = 7;
			this->label1->Text = L"��������\r\n���\��\�ȕ����̃{�^�����\������܂�";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(201, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 18);
			this->label2->TabIndex = 8;
			// 
			// SearchResultForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Turquoise;
			this->ClientSize = System::Drawing::Size(714, 664);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->b_Room6);
			this->Controls->Add(this->b_Room5);
			this->Controls->Add(this->b_Room3);
			this->Controls->Add(this->b_Room4);
			this->Controls->Add(this->b_Room2);
			this->Controls->Add(this->b_Room1);
			this->Controls->Add(this->b_SearchResultReturn);
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(736, 720);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(736, 720);
			this->Name = L"SearchResultForm";
			this->Text = L"��������";
			this->Load += gcnew System::EventHandler(this, &SearchResultForm::SearchResultForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void Result()
		{
			int res;
			this->label2->Text = "�������e\n" + "���t�F" +
				PublicData::Date + "\n" +
				PublicData::StartHour + ":" +
				PublicData::StartMin + "�`" +
				PublicData::EndHour + ":" +
				PublicData::EndMin+"�ɗ\��\�ȕ���";
			for (int i = 1; i < 7; i++) 
			{
				System::Diagnostics::Debug::WriteLine(i);
				res = PublicData::ResearchReserve(i, PublicData::Date, StartHour, EndHour, Num);
				System::Diagnostics::Debug::WriteLine("����"+res);
				if (res==1) {
					switch (i) {
					case 1:
						b_Room1->Visible = true;
						break;
					case 2:
						b_Room2->Visible = true;
						break;
					case 3:
						b_Room3->Visible = true;
						break;
					case 4:
						b_Room4->Visible = true;
						break;
					case 5:
						b_Room5->Visible = true;
						break;
					case 6:
						b_Room6->Visible = true;
						break;
					}
				}
			}
		}

	private: System::Void SearchResultForm_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ path;
		//PublicData::ReadDataFromFile("room1data.txt", PublicData::Room1Array,PublicData::Room1Index);
	}
	private: System::Void b_SearchResultReturn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void b_Room1_Click(System::Object^ sender, System::EventArgs^ e) {
		RoomNumber = 1;
		Fuck::RoomDatailForm^ frmRoom1 = gcnew Fuck::RoomDatailForm();
		frmRoom1->l_Roomdata->Text = "��c��1�@���e�l���U���@���j�^�[�����i�e��PC��������)";
		frmRoom1->ShowDialog();
	}
private: System::Void b_Room2_Click(System::Object^ sender, System::EventArgs^ e) {
	RoomNumber = 2;
	Fuck::RoomDatailForm^ frmRoom2 = gcnew Fuck::RoomDatailForm();
	frmRoom2->l_Roomdata->Text = "��c��2�@���e�l��10���@���j�^�[&�ڑ�PC����";
	frmRoom2->ShowDialog();
	RoomNumber = 0;
}
private: System::Void b_Room3_Click(System::Object^ sender, System::EventArgs^ e) {
	RoomNumber = 3;
	Fuck::RoomDatailForm^ frmRoom3 = gcnew Fuck::RoomDatailForm();
	frmRoom3->l_Roomdata->Text = "���c���@���e�l��15���@���j�^�[&�ڑ�PC����";
	frmRoom3->ShowDialog();
	RoomNumber = 0;
}
private: System::Void b_Room4_Click(System::Object^ sender, System::EventArgs^ e) {
	RoomNumber = 4;
	RoomDatailForm^ frmRoom4 = gcnew RoomDatailForm();
	frmRoom4->l_Roomdata->Text = "��z�[���@���e�l��50���@���j�^�[&�ڑ�PC�A�}�C�N����";
	frmRoom4->ShowDialog();
	RoomNumber = 0;
}
private: System::Void b_Room5_Click(System::Object^ sender, System::EventArgs^ e) {
	RoomNumber = 5;
	Fuck::RoomDatailForm^ frmRoom5 = gcnew Fuck::RoomDatailForm();
	frmRoom5->l_Roomdata->Text = "����c���@���e�l��4���@�z���C�g�{�[�h����";
	frmRoom5->ShowDialog();
	RoomNumber = 0;
}
private: System::Void b_Room6_Click(System::Object^ sender, System::EventArgs^ e) {
	RoomNumber = 6;
	Fuck::RoomDatailForm^ frmRoom6 = gcnew Fuck::RoomDatailForm();
	frmRoom6->l_Roomdata->Text = "PC���@���@MacPC�����@Adobe�g�p�\";
	frmRoom6->ShowDialog();
	RoomNumber = 0;
}
};
}
