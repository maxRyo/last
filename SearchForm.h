#pragma once
#include "SearchResultForm.h"
#include "PublicData.h"
namespace Fuck {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// SearchForm �̊T�v
	/// </summary>
	public ref class SearchForm : public System::Windows::Forms::Form
	{
	public:
		SearchForm(void)
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
		~SearchForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DateTimePicker^ dtp_Calender;
	protected:

	protected:

	private: System::Windows::Forms::Button^ b_SearchReturn;
	private: System::Windows::Forms::ComboBox^ cb_StartHour;
	private: System::Windows::Forms::ComboBox^ cb_StartMin;
	private: System::Windows::Forms::ComboBox^ cb_EndHour;
	private: System::Windows::Forms::ComboBox^ cb_EndMin;
	private: System::Windows::Forms::TextBox^ tb_NumData;








	private: System::Windows::Forms::Label^ l_Start;
	private: System::Windows::Forms::Label^ l_End;
	private: System::Windows::Forms::Label^ l_Num;

	private: System::Windows::Forms::Label^ l_NumData;









	private: System::Windows::Forms::Label^ l_EndMin;

	private: System::Windows::Forms::Label^ l_StartMin;

	private: System::Windows::Forms::Label^ l_StartHour;
	private: System::Windows::Forms::Label^ l_EndHour;
	private: System::Windows::Forms::Button^ b_Search;



	private: System::Windows::Forms::Label^ l_Date;




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
			this->dtp_Calender = (gcnew System::Windows::Forms::DateTimePicker());
			this->b_SearchReturn = (gcnew System::Windows::Forms::Button());
			this->cb_StartHour = (gcnew System::Windows::Forms::ComboBox());
			this->cb_StartMin = (gcnew System::Windows::Forms::ComboBox());
			this->cb_EndHour = (gcnew System::Windows::Forms::ComboBox());
			this->cb_EndMin = (gcnew System::Windows::Forms::ComboBox());
			this->tb_NumData = (gcnew System::Windows::Forms::TextBox());
			this->l_Start = (gcnew System::Windows::Forms::Label());
			this->l_End = (gcnew System::Windows::Forms::Label());
			this->l_Num = (gcnew System::Windows::Forms::Label());
			this->l_NumData = (gcnew System::Windows::Forms::Label());
			this->l_EndMin = (gcnew System::Windows::Forms::Label());
			this->l_StartMin = (gcnew System::Windows::Forms::Label());
			this->l_StartHour = (gcnew System::Windows::Forms::Label());
			this->l_EndHour = (gcnew System::Windows::Forms::Label());
			this->b_Search = (gcnew System::Windows::Forms::Button());
			this->l_Date = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// dtp_Calender
			// 
			this->dtp_Calender->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtp_Calender->Location = System::Drawing::Point(12, 136);
			this->dtp_Calender->Name = L"dtp_Calender";
			this->dtp_Calender->Size = System::Drawing::Size(248, 22);
			this->dtp_Calender->TabIndex = 0;
			this->dtp_Calender->Value = System::DateTime(2024, 5, 24, 0, 0, 0, 0);
			// 
			// b_SearchReturn
			// 
			this->b_SearchReturn->Location = System::Drawing::Point(12, 12);
			this->b_SearchReturn->Name = L"b_SearchReturn";
			this->b_SearchReturn->Size = System::Drawing::Size(98, 40);
			this->b_SearchReturn->TabIndex = 2;
			this->b_SearchReturn->Text = L"�߂�";
			this->b_SearchReturn->UseVisualStyleBackColor = true;
			this->b_SearchReturn->Click += gcnew System::EventHandler(this, &SearchForm::b_SearchReturn_Click);
			// 
			// cb_StartHour
			// 
			this->cb_StartHour->FormattingEnabled = true;
			this->cb_StartHour->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"9", L"10", L"11", L"12", L"13", L"14", L"15",
					L"16", L"17", L"18"
			});
			this->cb_StartHour->Location = System::Drawing::Point(290, 135);
			this->cb_StartHour->Name = L"cb_StartHour";
			this->cb_StartHour->Size = System::Drawing::Size(75, 23);
			this->cb_StartHour->TabIndex = 3;
			// 
			// cb_StartMin
			// 
			this->cb_StartMin->FormattingEnabled = true;
			this->cb_StartMin->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"00", L"30" });
			this->cb_StartMin->Location = System::Drawing::Point(448, 135);
			this->cb_StartMin->Name = L"cb_StartMin";
			this->cb_StartMin->Size = System::Drawing::Size(75, 23);
			this->cb_StartMin->TabIndex = 4;
			// 
			// cb_EndHour
			// 
			this->cb_EndHour->FormattingEnabled = true;
			this->cb_EndHour->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"9", L"10", L"11", L"12", L"13", L"14", L"15",
					L"16", L"17", L"18"
			});
			this->cb_EndHour->Location = System::Drawing::Point(290, 272);
			this->cb_EndHour->Name = L"cb_EndHour";
			this->cb_EndHour->Size = System::Drawing::Size(75, 23);
			this->cb_EndHour->TabIndex = 5;
			// 
			// cb_EndMin
			// 
			this->cb_EndMin->FormattingEnabled = true;
			this->cb_EndMin->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"00", L"30" });
			this->cb_EndMin->Location = System::Drawing::Point(448, 272);
			this->cb_EndMin->Name = L"cb_EndMin";
			this->cb_EndMin->Size = System::Drawing::Size(75, 23);
			this->cb_EndMin->TabIndex = 6;
			// 
			// tb_NumData
			// 
			this->tb_NumData->Location = System::Drawing::Point(448, 407);
			this->tb_NumData->Name = L"tb_NumData";
			this->tb_NumData->Size = System::Drawing::Size(75, 22);
			this->tb_NumData->TabIndex = 7;
			// 
			// l_Start
			// 
			this->l_Start->AutoSize = true;
			this->l_Start->Location = System::Drawing::Point(287, 109);
			this->l_Start->Name = L"l_Start";
			this->l_Start->Size = System::Drawing::Size(67, 15);
			this->l_Start->TabIndex = 8;
			this->l_Start->Text = L"�J�n����";
			// 
			// l_End
			// 
			this->l_End->AutoSize = true;
			this->l_End->Location = System::Drawing::Point(287, 245);
			this->l_End->Name = L"l_End";
			this->l_End->Size = System::Drawing::Size(67, 15);
			this->l_End->TabIndex = 9;
			this->l_End->Text = L"�I������";
			// 
			// l_Num
			// 
			this->l_Num->AutoSize = true;
			this->l_Num->Location = System::Drawing::Point(445, 389);
			this->l_Num->Name = L"l_Num";
			this->l_Num->Size = System::Drawing::Size(67, 15);
			this->l_Num->TabIndex = 10;
			this->l_Num->Text = L"�g�p�l��";
			// 
			// l_NumData
			// 
			this->l_NumData->AutoSize = true;
			this->l_NumData->Location = System::Drawing::Point(529, 410);
			this->l_NumData->Name = L"l_NumData";
			this->l_NumData->Size = System::Drawing::Size(22, 15);
			this->l_NumData->TabIndex = 11;
			this->l_NumData->Text = L"�l";
			// 
			// l_EndMin
			// 
			this->l_EndMin->AutoSize = true;
			this->l_EndMin->Location = System::Drawing::Point(529, 275);
			this->l_EndMin->Name = L"l_EndMin";
			this->l_EndMin->Size = System::Drawing::Size(22, 15);
			this->l_EndMin->TabIndex = 12;
			this->l_EndMin->Text = L"��";
			// 
			// l_StartMin
			// 
			this->l_StartMin->AutoSize = true;
			this->l_StartMin->Location = System::Drawing::Point(529, 138);
			this->l_StartMin->Name = L"l_StartMin";
			this->l_StartMin->Size = System::Drawing::Size(22, 15);
			this->l_StartMin->TabIndex = 13;
			this->l_StartMin->Text = L"��";
			// 
			// l_StartHour
			// 
			this->l_StartHour->AutoSize = true;
			this->l_StartHour->Location = System::Drawing::Point(371, 139);
			this->l_StartHour->Name = L"l_StartHour";
			this->l_StartHour->Size = System::Drawing::Size(22, 15);
			this->l_StartHour->TabIndex = 14;
			this->l_StartHour->Text = L"��";
			// 
			// l_EndHour
			// 
			this->l_EndHour->AutoSize = true;
			this->l_EndHour->Location = System::Drawing::Point(371, 280);
			this->l_EndHour->Name = L"l_EndHour";
			this->l_EndHour->Size = System::Drawing::Size(22, 15);
			this->l_EndHour->TabIndex = 15;
			this->l_EndHour->Text = L"��";
			// 
			// b_Search
			// 
			this->b_Search->Location = System::Drawing::Point(241, 467);
			this->b_Search->Name = L"b_Search";
			this->b_Search->Size = System::Drawing::Size(98, 40);
			this->b_Search->TabIndex = 16;
			this->b_Search->Text = L"����";
			this->b_Search->UseVisualStyleBackColor = true;
			this->b_Search->Click += gcnew System::EventHandler(this, &SearchForm::b_Search_Click);
			// 
			// l_Date
			// 
			this->l_Date->AutoSize = true;
			this->l_Date->Location = System::Drawing::Point(12, 109);
			this->l_Date->Name = L"l_Date";
			this->l_Date->Size = System::Drawing::Size(52, 15);
			this->l_Date->TabIndex = 17;
			this->l_Date->Text = L"�g�p��";
			// 
			// SearchForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(582, 553);
			this->Controls->Add(this->l_Date);
			this->Controls->Add(this->b_Search);
			this->Controls->Add(this->l_EndHour);
			this->Controls->Add(this->l_StartHour);
			this->Controls->Add(this->l_StartMin);
			this->Controls->Add(this->l_EndMin);
			this->Controls->Add(this->l_NumData);
			this->Controls->Add(this->l_Num);
			this->Controls->Add(this->l_End);
			this->Controls->Add(this->l_Start);
			this->Controls->Add(this->tb_NumData);
			this->Controls->Add(this->cb_EndMin);
			this->Controls->Add(this->cb_EndHour);
			this->Controls->Add(this->cb_StartMin);
			this->Controls->Add(this->cb_StartHour);
			this->Controls->Add(this->b_SearchReturn);
			this->Controls->Add(this->dtp_Calender);
			this->Name = L"SearchForm";
			this->Text = L"�����y�[�W";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		int StartHourint;		//int�^�̊J�n���ԁi���j�̐錾
		int StartMinint;		//int�^�̊J�n���ԁi���j�̐錾
		int EndHourint;			//int�^�̏I�����ԁi���j�̐錾
		int EndMinint;			//int�^�̏I�����ԁi���j�̐錾
		int StartTimeint;		//int�^�̊J�n���ԁi���{���j�̐錾
		int EndTimeint;			//int�^�̏I�����ԁi���{���j�̐錾
		int NumDataint;			//int�^�̎g�p�l���̐錾

		String^ StartHour;		//String^�^�̊J�n���ԁi���j�̐錾
		String^ StartMin;		//String^�^�̊J�n���ԁi���j�̐錾
		String^ EndHour;		//String^�^�̏I�����ԁi���j�̐錾
		String^ EndMin;			//String^�^�̏I�����ԁi���j�̐錾
		String^ Day;			//String^�^�̊J�n�E�I�����̐錾
		String^ NumData;		//String^�^�̎g�p�l���̐錾
		String^ WholeSearchData;//String^�^�̌����f�[�^(���t�{���ԁ{�l��)�̐錾 
		//yyyy//mm//ddHHMMhhmmN�œn���܂�( HH-�J�n�� MM-�J�n�� hh-�I���� mm-�I���� N-�l��)

	private: System::Void b_Search_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			StartHour = this->cb_StartHour->Text; //String^�^�̊J�n���ԁi���j�̑��
			StartHourint = (Convert::ToInt32(this->cb_StartHour->Text)); //int�^�̊J�n���ԁi���j�̑��
		}
		catch (Exception^ ex) {
			StartHourint = -1; //�G���[�����̂��߂ɒl��n���Ă��܂�
		}

		try {
			StartMin = this->cb_StartMin->Text;
			StartMinint = (Convert::ToInt32(this->cb_StartMin->Text));
		}
		catch (Exception^ ex) {
			StartMinint = -1;
		}

		try {
			EndHour = this->cb_EndHour->Text;
			EndHourint = (Convert::ToInt32(this->cb_EndHour->Text));
		}
		catch (Exception^ ex) {
			EndHourint = -1;
		}

		try {
			EndMin = this->cb_EndMin->Text;
			EndMinint = (Convert::ToInt32(this->cb_EndMin->Text));
		}
		catch (Exception^ ex) {
			EndMinint = -1;
		}

		try {
			NumDataint = (Convert::ToInt32(this->tb_NumData->Text));
			NumData = this->tb_NumData->Text;
		}
		catch (Exception^ ex) {
			NumDataint = 0;
		}

		Day = gcnew String(dtp_Calender->Value.ToShortDateString()); //String^�^�̊J�n�E�I�����̑���@�`��yyyy//mm//dd�ł�

		StartTimeint = (StartHourint * 100) + StartMinint; //�J�n����(���{��)�̑���@�i�Ⴆ��11:30�Ȃ�1130��int�^�œn���܂��j
		EndTimeint = (EndHourint * 100) + EndMinint; //�I������(���{��)�̑���@�i�Ⴆ��11:30�Ȃ�1130��int�^�œn���܂��j

		WholeSearchData = Day + StartHour + StartMin + EndHour + EndMin + NumData;

		if ((StartHourint >= 0) &&
			(StartMinint >= 0) &&
			(EndHourint >= 0) &&
			(EndMinint >= 0) &&
			(NumDataint > 0) &&
			StartTimeint < EndTimeint
			) {
			SearchResultForm^ frm = gcnew SearchResultForm();

			//�K�v�ȏ����͂����ɏ�������ł�������
			PublicData::Date = Day;
			//StartHour = StartHour + StartMin;
			//EndHour = EndHour + EndMin;
			Num = NumDataint;
			PublicData::Start = StartHourint;
			PublicData::End = EndHourint;
			PublicData::StartHour = StartHour;
			PublicData::StartMin = StartMin;
			PublicData::EndHour = EndHour;
			PublicData::EndMin = EndMin;

			frm->ShowDialog();
		}
		else
		{
			MessageBox::Show("�l�����������͂���Ă��܂���");
		}
	}
	private: System::Void b_SearchReturn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	};
}
