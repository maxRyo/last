#pragma once
#include"ReserveForm.h"
#include"PublicData.h"
namespace Fuck {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// RoomDatailForm �̊T�v
	/// </summary>
	public ref class RoomDatailForm : public System::Windows::Forms::Form
	{
	public:
		RoomDatailForm(void)
		{
			InitializeComponent();
			//
			//TODO: �����ɃR���X�g���N�^�[ �R�[�h��ǉ����܂�
			//
			LoadData();
		}

	protected:
		/// <summary>
		/// �g�p���̃��\�[�X�����ׂăN���[���A�b�v���܂��B
		/// </summary>
		~RoomDatailForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ b_RoomdataReturn;
	private: System::Windows::Forms::Button^ b_Reserve;
	public: System::Windows::Forms::Label^ l_Roomdata;
	private:
	protected:


	private: System::Windows::Forms::ListBox^ lb_ReserveState;


	private: System::Windows::Forms::DateTimePicker^ dtp_Calendar;


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
			this->b_RoomdataReturn = (gcnew System::Windows::Forms::Button());
			this->b_Reserve = (gcnew System::Windows::Forms::Button());
			this->l_Roomdata = (gcnew System::Windows::Forms::Label());
			this->lb_ReserveState = (gcnew System::Windows::Forms::ListBox());
			this->dtp_Calendar = (gcnew System::Windows::Forms::DateTimePicker());
			this->SuspendLayout();
			// 
			// b_RoomdataReturn
			// 
			this->b_RoomdataReturn->Location = System::Drawing::Point(20, 35);
			this->b_RoomdataReturn->Margin = System::Windows::Forms::Padding(5);
			this->b_RoomdataReturn->Name = L"b_RoomdataReturn";
			this->b_RoomdataReturn->Size = System::Drawing::Size(184, 60);
			this->b_RoomdataReturn->TabIndex = 0;
			this->b_RoomdataReturn->Text = L"�߂�";
			this->b_RoomdataReturn->UseVisualStyleBackColor = true;
			this->b_RoomdataReturn->Click += gcnew System::EventHandler(this, &RoomDatailForm::b_RoomdataReturn_Click);
			// 
			// b_Reserve
			// 
			this->b_Reserve->Location = System::Drawing::Point(274, 651);
			this->b_Reserve->Margin = System::Windows::Forms::Padding(5);
			this->b_Reserve->Name = L"b_Reserve";
			this->b_Reserve->Size = System::Drawing::Size(287, 58);
			this->b_Reserve->TabIndex = 1;
			this->b_Reserve->Text = L"�\��";
			this->b_Reserve->UseVisualStyleBackColor = true;
			this->b_Reserve->Click += gcnew System::EventHandler(this, &RoomDatailForm::b_Reserve_Click);
			// 
			// l_Roomdata
			// 
			this->l_Roomdata->AutoSize = true;
			this->l_Roomdata->Location = System::Drawing::Point(105, 132);
			this->l_Roomdata->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->l_Roomdata->Name = L"l_Roomdata";
			this->l_Roomdata->Size = System::Drawing::Size(0, 18);
			this->l_Roomdata->TabIndex = 2;
			this->l_Roomdata->Click += gcnew System::EventHandler(this, &RoomDatailForm::l_Roomdata_Click);
			// 
			// lb_ReserveState
			// 
			this->lb_ReserveState->FormattingEnabled = true;
			this->lb_ReserveState->ItemHeight = 18;
			this->lb_ReserveState->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"�Y���̕����̗\��͂���܂���" });
			this->lb_ReserveState->Location = System::Drawing::Point(109, 246);
			this->lb_ReserveState->Margin = System::Windows::Forms::Padding(5);
			this->lb_ReserveState->Name = L"lb_ReserveState";
			this->lb_ReserveState->Size = System::Drawing::Size(593, 346);
			this->lb_ReserveState->TabIndex = 3;
			// 
			// dtp_Calendar
			// 
			this->dtp_Calendar->Location = System::Drawing::Point(109, 209);
			this->dtp_Calendar->Margin = System::Windows::Forms::Padding(5);
			this->dtp_Calendar->Name = L"dtp_Calendar";
			this->dtp_Calendar->Size = System::Drawing::Size(330, 25);
			this->dtp_Calendar->TabIndex = 4;
			this->dtp_Calendar->ValueChanged += gcnew System::EventHandler(this, &RoomDatailForm::dtp_Calendar_ValueChanged);
			// 
			// RoomDatailForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(974, 841);
			this->Controls->Add(this->dtp_Calendar);
			this->Controls->Add(this->lb_ReserveState);
			this->Controls->Add(this->l_Roomdata);
			this->Controls->Add(this->b_Reserve);
			this->Controls->Add(this->b_RoomdataReturn);
			this->Margin = System::Windows::Forms::Padding(5);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(996, 897);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(996, 897);
			this->Name = L"RoomDatailForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"RoomDatailForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &RoomDatailForm::RoomDatailForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ head1;
		String^ tail1;
		String^ head2;
		String^ tail2;
		void LoadDataToListBox(cli::array<String^, 2>^ dataArray, int currentIndex) {
			int num = 1;
			for (int i = 0; i < currentIndex; i++) {
				head1 = dataArray[i, 2]->ToString()->Substring(0, dataArray[i, 2]->ToString()->Length - 2);
				tail1 = dataArray[i, 2]->Substring(dataArray[i, 2]->Length - 2);
				head2 = dataArray[i, 3]->Substring(0, dataArray[i, 3]->Length - 2);
				tail2 = dataArray[i, 3]->Substring(dataArray[i, 3]->Length - 2);
				lb_ReserveState->Items->Add("�\��" + num + ":" +
					dataArray[i, 1] + ", " +
					head1 + ":" +
					tail1 + "�`" +
					head2 + ":" +
					tail2 + 
					"�l���F" + dataArray[i, 4] +
					"�p�r" + dataArray[i, 5]);
				num += 1;
			}
		}

		void dayname(cli::array<String^, 2>^ dataArray, int currentIndex, String^ Dateday) {
			lb_ReserveState->Items->Clear();
			for (int i = 0; i < currentIndex; i++)
			{
				int num = 1;
				if (dataArray[i, 1] == Dateday)
				{
					
					head1 = dataArray[i, 2]->Substring(0, dataArray[i, 2]->Length - 2);
					tail1 = dataArray[i, 2]->Substring(dataArray[i, 2]->Length - 2);
					head2 = dataArray[i, 3]->Substring(0, dataArray[i, 3]->Length - 2);
					tail2 = dataArray[i, 3]->Substring(dataArray[i, 3]->Length - 2);
					lb_ReserveState->Items->Add("�\��" + num+":"+
						dataArray[i, 1] + ", " +
						head1 + ":" +
						tail1 + "�`" +
						head2 + ":" +
						tail2 + "\n" +
						"�l���F" +dataArray[i, 4] + "\n"+
						"�p�r" +dataArray[i, 5]);
					num += 1;
				}
			}

		}
		void LoadData() {
			lb_ReserveState->Items->Clear();
			switch (RoomNumber)
			{
			case 1:
				lb_ReserveState->Items->Add("�\����\n");
				LoadDataToListBox(PublicData::Room1Array, PublicData::Room1Index);
				break;
			case 2:
				lb_ReserveState->Items->Add("�\����\n");
				LoadDataToListBox(PublicData::Room2Array, PublicData::Room2Index);
				break;
			case 3:
				lb_ReserveState->Items->Add("�\����\n"); 
				LoadDataToListBox(PublicData::Room3Array, PublicData::Room3Index);
				break;
			case 4:
				lb_ReserveState->Items->Add("�\����\n"); 
				LoadDataToListBox(PublicData::Room4Array, PublicData::Room4Index);
				break;
			case 5:
				lb_ReserveState->Items->Add("�\����\n"); 
				LoadDataToListBox(PublicData::Room5Array, PublicData::Room5Index);
				break;
			case 6:
				lb_ReserveState->Items->Add("�\����\n"); 
				LoadDataToListBox(PublicData::Room6Array, PublicData::Room6Index);
				break;
			default:
				lb_ReserveState->Items->Add("�Y���̕����̗\��͂���܂���");
				break;
			}
		}
	private: System::Void l_Roomdata_Click(System::Object^ sender, System::EventArgs^ e) {


	}
	private: System::Void b_Reserve_Click(System::Object^ sender, System::EventArgs^ e) {
		//if (flag == 1) {
		ReserveForm^ frm = gcnew ReserveForm();
		frm->Show();
		MessageBox::Show("���O�C�����Ă�������");
		//}

	}
	private: System::Void b_RoomdataReturn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();

	}
	private: System::Void RoomDatailForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void dtp_Calendar_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		lb_ReserveState->Items->Clear();
		DateTime dt = dtp_Calendar->Value;
		int year = dt.Year;
		int month = dt.Month;
		int day = dt.Day;

		// �i�[�l
		String^ setmonth;
		if (month < 10) {
			setmonth = "0" + month.ToString();
		}
		else {
			setmonth = month.ToString();
		}
		String^ setday;
		if (day < 10) {
			setday = "0" + day.ToString();
		}
		else {
			setday = day.ToString();
		}
		String^ setyear = year + "/" + setmonth + "/" + setday;

		switch (RoomNumber)
		{
		case 1:
			lb_ReserveState->Items->Add("�\����\n");
			dayname(PublicData::Room1Array, PublicData::Room1Index, setyear);
			break;
		case 2:
			lb_ReserveState->Items->Add("�\����\n");
			dayname(PublicData::Room2Array, PublicData::Room2Index, setyear);
			break;
		case 3:
			lb_ReserveState->Items->Add("�\����\n");
			dayname(PublicData::Room3Array, PublicData::Room3Index, setyear);
			break;
		case 4:
			lb_ReserveState->Items->Add("�\����\n");
			dayname(PublicData::Room4Array, PublicData::Room4Index, setyear);
			break;
		case 5:
			lb_ReserveState->Items->Add("�\����\n");
			dayname(PublicData::Room5Array, PublicData::Room5Index, setyear);
			break;
		case 6:
			lb_ReserveState->Items->Add("�\����\n");
			dayname(PublicData::Room6Array, PublicData::Room6Index, setyear);
			break;
		default:
			lb_ReserveState->Items->Add("�Y���̕����̗\��͂���܂���");
			break;
		}



	}
	};
}
