#pragma once
#include"SearchForm.h"
#include"MydataForm.h"
#include"RoomDatailForm.h"
#include"PublicData.h"
namespace Fuck {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// AllRoomForm �̊T�v
	/// </summary>
	public ref class AllRoomForm : public System::Windows::Forms::Form
	{
	public:
		AllRoomForm(void)
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
		~AllRoomForm()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Button^ b_Search;
	public: System::Windows::Forms::Button^ b_Mydata;
	public: System::Windows::Forms::Button^ b_Logout;
	protected:



	public: System::Windows::Forms::Button^ b_Room1;
	private:
	public: System::Windows::Forms::Button^ b_Room2;
	public: System::Windows::Forms::Button^ b_Room4;
	public: System::Windows::Forms::Button^ b_Room3;
	public: System::Windows::Forms::Button^ b_Room6;
	public: System::Windows::Forms::Button^ b_Room5;

















	protected:

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
			this->b_Search = (gcnew System::Windows::Forms::Button());
			this->b_Mydata = (gcnew System::Windows::Forms::Button());
			this->b_Logout = (gcnew System::Windows::Forms::Button());
			this->b_Room1 = (gcnew System::Windows::Forms::Button());
			this->b_Room2 = (gcnew System::Windows::Forms::Button());
			this->b_Room4 = (gcnew System::Windows::Forms::Button());
			this->b_Room3 = (gcnew System::Windows::Forms::Button());
			this->b_Room6 = (gcnew System::Windows::Forms::Button());
			this->b_Room5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// b_Search
			// 
			this->b_Search->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->b_Search->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->b_Search->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Lime;
			this->b_Search->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b_Search->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->b_Search->Location = System::Drawing::Point(41, 46);
			this->b_Search->Margin = System::Windows::Forms::Padding(5);
			this->b_Search->Name = L"b_Search";
			this->b_Search->Size = System::Drawing::Size(250, 74);
			this->b_Search->TabIndex = 0;
			this->b_Search->Text = L"����";
			this->b_Search->UseVisualStyleBackColor = true;
			this->b_Search->Click += gcnew System::EventHandler(this, &AllRoomForm::b_Search_Click);
			// 
			// b_Mydata
			// 
			this->b_Mydata->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->b_Mydata->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->b_Mydata->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Blue;
			this->b_Mydata->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b_Mydata->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->b_Mydata->Location = System::Drawing::Point(375, 46);
			this->b_Mydata->Margin = System::Windows::Forms::Padding(5);
			this->b_Mydata->Name = L"b_Mydata";
			this->b_Mydata->Size = System::Drawing::Size(250, 74);
			this->b_Mydata->TabIndex = 1;
			this->b_Mydata->Text = L"�}�C�y�[�W";
			this->b_Mydata->UseVisualStyleBackColor = true;
			this->b_Mydata->Click += gcnew System::EventHandler(this, &AllRoomForm::b_Mydata_Click);
			// 
			// b_Logout
			// 
			this->b_Logout->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->b_Logout->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->b_Logout->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->b_Logout->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b_Logout->Font = (gcnew System::Drawing::Font(L"�l�r �S�V�b�N", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->b_Logout->Location = System::Drawing::Point(709, 46);
			this->b_Logout->Margin = System::Windows::Forms::Padding(5);
			this->b_Logout->Name = L"b_Logout";
			this->b_Logout->Size = System::Drawing::Size(250, 74);
			this->b_Logout->TabIndex = 2;
			this->b_Logout->Text = L"���O�A�E�g";
			this->b_Logout->UseVisualStyleBackColor = true;
			this->b_Logout->Click += gcnew System::EventHandler(this, &AllRoomForm::b_Logout_Click);
			// 
			// b_Room1
			// 
			this->b_Room1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->b_Room1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->b_Room1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->b_Room1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b_Room1->Font = (gcnew System::Drawing::Font(L"�l�r �S�V�b�N", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->b_Room1->Location = System::Drawing::Point(84, 174);
			this->b_Room1->Margin = System::Windows::Forms::Padding(5);
			this->b_Room1->Name = L"b_Room1";
			this->b_Room1->Size = System::Drawing::Size(334, 106);
			this->b_Room1->TabIndex = 3;
			this->b_Room1->Text = L"��c��1";
			this->b_Room1->UseVisualStyleBackColor = true;
			this->b_Room1->Click += gcnew System::EventHandler(this, &AllRoomForm::b_Room1_Click);
			// 
			// b_Room2
			// 
			this->b_Room2->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->b_Room2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->b_Room2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->b_Room2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b_Room2->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->b_Room2->Location = System::Drawing::Point(550, 174);
			this->b_Room2->Margin = System::Windows::Forms::Padding(5);
			this->b_Room2->Name = L"b_Room2";
			this->b_Room2->Size = System::Drawing::Size(334, 106);
			this->b_Room2->TabIndex = 4;
			this->b_Room2->Text = L"��c��2";
			this->b_Room2->UseVisualStyleBackColor = true;
			this->b_Room2->Click += gcnew System::EventHandler(this, &AllRoomForm::b_Room2_Click);
			// 
			// b_Room4
			// 
			this->b_Room4->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->b_Room4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->b_Room4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Aqua;
			this->b_Room4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b_Room4->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->b_Room4->Location = System::Drawing::Point(550, 351);
			this->b_Room4->Margin = System::Windows::Forms::Padding(5);
			this->b_Room4->Name = L"b_Room4";
			this->b_Room4->Size = System::Drawing::Size(334, 106);
			this->b_Room4->TabIndex = 6;
			this->b_Room4->Text = L"��z�[��";
			this->b_Room4->UseVisualStyleBackColor = true;
			this->b_Room4->Click += gcnew System::EventHandler(this, &AllRoomForm::b_Room4_Click);
			// 
			// b_Room3
			// 
			this->b_Room3->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->b_Room3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->b_Room3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Yellow;
			this->b_Room3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b_Room3->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->b_Room3->Location = System::Drawing::Point(84, 351);
			this->b_Room3->Margin = System::Windows::Forms::Padding(5);
			this->b_Room3->Name = L"b_Room3";
			this->b_Room3->Size = System::Drawing::Size(334, 106);
			this->b_Room3->TabIndex = 5;
			this->b_Room3->Text = L"���c��";
			this->b_Room3->UseVisualStyleBackColor = true;
			this->b_Room3->Click += gcnew System::EventHandler(this, &AllRoomForm::b_Room3_Click);
			// 
			// b_Room6
			// 
			this->b_Room6->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->b_Room6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->b_Room6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Fuchsia;
			this->b_Room6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b_Room6->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->b_Room6->Location = System::Drawing::Point(550, 536);
			this->b_Room6->Margin = System::Windows::Forms::Padding(5);
			this->b_Room6->Name = L"b_Room6";
			this->b_Room6->Size = System::Drawing::Size(334, 106);
			this->b_Room6->TabIndex = 8;
			this->b_Room6->Text = L"PC��";
			this->b_Room6->UseVisualStyleBackColor = true;
			this->b_Room6->Click += gcnew System::EventHandler(this, &AllRoomForm::b_Room6_Click);
			// 
			// b_Room5
			// 
			this->b_Room5->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->b_Room5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->b_Room5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Blue;
			this->b_Room5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b_Room5->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->b_Room5->Location = System::Drawing::Point(84, 536);
			this->b_Room5->Margin = System::Windows::Forms::Padding(5);
			this->b_Room5->Name = L"b_Room5";
			this->b_Room5->Size = System::Drawing::Size(334, 106);
			this->b_Room5->TabIndex = 7;
			this->b_Room5->Text = L"����c��";
			this->b_Room5->UseVisualStyleBackColor = true;
			this->b_Room5->Click += gcnew System::EventHandler(this, &AllRoomForm::b_Room5_Click);
			// 
			// AllRoomForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(978, 944);
			this->Controls->Add(this->b_Room6);
			this->Controls->Add(this->b_Room5);
			this->Controls->Add(this->b_Room4);
			this->Controls->Add(this->b_Room3);
			this->Controls->Add(this->b_Room2);
			this->Controls->Add(this->b_Room1);
			this->Controls->Add(this->b_Logout);
			this->Controls->Add(this->b_Mydata);
			this->Controls->Add(this->b_Search);
			this->Margin = System::Windows::Forms::Padding(5);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1000, 1000);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(900, 900);
			this->Name = L"AllRoomForm";
			this->Text = L"AllRoomForm";
			this->Load += gcnew System::EventHandler(this, &AllRoomForm::AllRoomForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion

		//MydataForm^ frm1 = gcnew MydataForm();
		//RoomDatailForm^ frm3 = gcnew RoomDatailForm();
	private: System::Void b_Search_Click(System::Object^ sender, System::EventArgs^ e) {
		SearchForm^ frmSearch = gcnew SearchForm();
		this->Close();
		frmSearch->ShowDialog();

	}
	private: System::Void b_Mydata_Click(System::Object^ sender, System::EventArgs^ e) {
		MydataForm^ frmMydata = gcnew MydataForm();
		if (flag == 0) {
			MessageBox::Show("���O�C�����Ă�������");
		}
		else if (flag == 1) {
			this->Close();
			frmMydata->ShowDialog();
		}
	}
	private: System::Void b_Logout_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();

	}


	private: System::Void b_Room1_Click(System::Object^ sender, System::EventArgs^ e) {
		RoomNumber = 1;
		Fuck::RoomDatailForm^ frmRoom1 = gcnew Fuck::RoomDatailForm();
		frmRoom1->l_Roomdata->Text = "�������F��c��1\n���e�l���F�U���@�ݔ��F���j�^�[�����i�e��PC��������)";
		frmRoom1->ShowDialog();
		RoomNumber = 0;
	}
	private: System::Void b_Room2_Click(System::Object^ sender, System::EventArgs^ e) {
		RoomNumber = 2;
		Fuck::RoomDatailForm^ frmRoom2= gcnew Fuck::RoomDatailForm();
		frmRoom2->l_Roomdata->Text = "�������F��c��2\n���e�l���F10���@�ݔ��F���j�^�[&�ڑ�PC����";
		frmRoom2->ShowDialog();
		RoomNumber = 0;
	}
	private: System::Void b_Room3_Click(System::Object^ sender, System::EventArgs^ e) {
		RoomNumber = 3;
		Fuck::RoomDatailForm^ frmRoom3 = gcnew Fuck::RoomDatailForm();
		frmRoom3->l_Roomdata->Text = "�������F���c��\n���e�l���F15���@�ݔ��F���j�^�[&�ڑ�PC����";
		frmRoom3->ShowDialog();
		RoomNumber = 0;
	}
	private: System::Void b_Room4_Click(System::Object^ sender, System::EventArgs^ e) {
		RoomNumber = 4;
		RoomDatailForm^ frmRoom4 = gcnew RoomDatailForm();
		frmRoom4->l_Roomdata->Text = "�������F��z�[��\n���e�l���F50���@�ݔ��F���j�^�[&�ڑ�PC�A�}�C�N����";
		frmRoom4->ShowDialog();
		RoomNumber = 0;
	}
	private: System::Void b_Room5_Click(System::Object^ sender, System::EventArgs^ e) {
		RoomNumber = 5;
		Fuck::RoomDatailForm^ frmRoom5 = gcnew Fuck::RoomDatailForm();
		frmRoom5->l_Roomdata->Text = "�������F����c��\n���e�l���F4���@�ݔ��F�z���C�g�{�[�h����";
		frmRoom5->ShowDialog();
		RoomNumber = 0;
	}
	private: System::Void b_Room6_Click(System::Object^ sender, System::EventArgs^ e) {
		RoomNumber = 6;
		Fuck::RoomDatailForm^ frmRoom6 = gcnew Fuck::RoomDatailForm();
		frmRoom6->l_Roomdata->Text = "�������FPC��\n���@�ݔ��FMacPC�����@Adobe�g�p�\";
		frmRoom6->ShowDialog();
		RoomNumber = 0;

	}
	private: System::Void AllRoomForm_Load(System::Object^ sender, System::EventArgs^ e) {
		RoomNumber = 0;
	}
	};
}