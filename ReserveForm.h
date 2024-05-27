#pragma once

#include "PublicData.h"

namespace Fuck{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ReserveForm の概要
	/// </summary>
	public ref class ReserveForm : public System::Windows::Forms::Form
	{
	public:
		ReserveForm(void)
		{
			InitializeComponent();
			//
			//TODO: ここにコンストラクター コードを追加します
			//
		}

	protected:
		/// <summary>
		/// 使用中のリソースをすべてクリーンアップします。
		/// </summary>
		~ReserveForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ b_ReserveReturn;
	private: System::Windows::Forms::Button^ b_Reserve;
	private: System::Windows::Forms::DateTimePicker^ dtp_Calendar;
	private: System::Windows::Forms::Label^ l_Start;
	private: System::Windows::Forms::ComboBox^ cb_StartHour;
	private: System::Windows::Forms::Label^ l_Day;
	private: System::Windows::Forms::Label^ l_StartHour;


	private: System::Windows::Forms::ComboBox^ cb_StartMin;
	private: System::Windows::Forms::Label^ l_StartMin;
	private: System::Windows::Forms::Label^ l_End;
	private: System::Windows::Forms::ComboBox^ cb_EndHour;
	private: System::Windows::Forms::Label^ l_EndHour;
	private: System::Windows::Forms::ComboBox^ cb_EndMin;
	private: System::Windows::Forms::Label^ l_EndMin;
	private: System::Windows::Forms::Label^ l_Num;
	private: System::Windows::Forms::TextBox^ tb_Numdata;

	private: System::Windows::Forms::Label^ l_Purpose;
	private: System::Windows::Forms::ComboBox^ cb_Purpose;








	protected:

	protected:

	private:
		/// <summary>
		/// 必要なデザイナー変数です。
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// デザイナー サポートに必要なメソッドです。このメソッドの内容を
		/// コード エディターで変更しないでください。
		/// </summary>
		void InitializeComponent(void)
		{
			this->b_ReserveReturn = (gcnew System::Windows::Forms::Button());
			this->b_Reserve = (gcnew System::Windows::Forms::Button());
			this->dtp_Calendar = (gcnew System::Windows::Forms::DateTimePicker());
			this->l_Start = (gcnew System::Windows::Forms::Label());
			this->cb_StartHour = (gcnew System::Windows::Forms::ComboBox());
			this->l_Day = (gcnew System::Windows::Forms::Label());
			this->l_StartHour = (gcnew System::Windows::Forms::Label());
			this->cb_StartMin = (gcnew System::Windows::Forms::ComboBox());
			this->l_StartMin = (gcnew System::Windows::Forms::Label());
			this->l_End = (gcnew System::Windows::Forms::Label());
			this->cb_EndHour = (gcnew System::Windows::Forms::ComboBox());
			this->l_EndHour = (gcnew System::Windows::Forms::Label());
			this->cb_EndMin = (gcnew System::Windows::Forms::ComboBox());
			this->l_EndMin = (gcnew System::Windows::Forms::Label());
			this->l_Num = (gcnew System::Windows::Forms::Label());
			this->tb_Numdata = (gcnew System::Windows::Forms::TextBox());
			this->l_Purpose = (gcnew System::Windows::Forms::Label());
			this->cb_Purpose = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// b_ReserveReturn
			// 
			this->b_ReserveReturn->Location = System::Drawing::Point(62, 60);
			this->b_ReserveReturn->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->b_ReserveReturn->Name = L"b_ReserveReturn";
			this->b_ReserveReturn->Size = System::Drawing::Size(125, 30);
			this->b_ReserveReturn->TabIndex = 0;
			this->b_ReserveReturn->Text = L"戻る";
			this->b_ReserveReturn->UseVisualStyleBackColor = true;
			this->b_ReserveReturn->Click += gcnew System::EventHandler(this, &ReserveForm::b_ReserveReturn_Click);
			// 
			// b_Reserve
			// 
			this->b_Reserve->Location = System::Drawing::Point(250, 540);
			this->b_Reserve->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->b_Reserve->Name = L"b_Reserve";
			this->b_Reserve->Size = System::Drawing::Size(250, 60);
			this->b_Reserve->TabIndex = 1;
			this->b_Reserve->Text = L"予約";
			this->b_Reserve->UseVisualStyleBackColor = true;
			this->b_Reserve->Click += gcnew System::EventHandler(this, &ReserveForm::b_Reserve_Click);
			// 
			// dtp_Calendar
			// 
			this->dtp_Calendar->Location = System::Drawing::Point(66, 144);
			this->dtp_Calendar->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dtp_Calendar->Name = L"dtp_Calendar";
			this->dtp_Calendar->Size = System::Drawing::Size(249, 25);
			this->dtp_Calendar->TabIndex = 2;
			// 
			// l_Start
			// 
			this->l_Start->AutoSize = true;
			this->l_Start->Location = System::Drawing::Point(344, 120);
			this->l_Start->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->l_Start->Name = L"l_Start";
			this->l_Start->Size = System::Drawing::Size(80, 18);
			this->l_Start->TabIndex = 3;
			this->l_Start->Text = L"開始時刻";
			// 
			// cb_StartHour
			// 
			this->cb_StartHour->FormattingEnabled = true;
			this->cb_StartHour->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"9", L"10", L"11", L"12", L"13", L"14", L"15",
					L"16", L"17", L"18"
			});
			this->cb_StartHour->Location = System::Drawing::Point(371, 143);
			this->cb_StartHour->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->cb_StartHour->Name = L"cb_StartHour";
			this->cb_StartHour->Size = System::Drawing::Size(93, 26);
			this->cb_StartHour->TabIndex = 4;
			// 
			// l_Day
			// 
			this->l_Day->AutoSize = true;
			this->l_Day->Location = System::Drawing::Point(62, 120);
			this->l_Day->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->l_Day->Name = L"l_Day";
			this->l_Day->Size = System::Drawing::Size(62, 18);
			this->l_Day->TabIndex = 5;
			this->l_Day->Text = L"使用日";
			// 
			// l_StartHour
			// 
			this->l_StartHour->AutoSize = true;
			this->l_StartHour->Location = System::Drawing::Point(472, 146);
			this->l_StartHour->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->l_StartHour->Name = L"l_StartHour";
			this->l_StartHour->Size = System::Drawing::Size(26, 18);
			this->l_StartHour->TabIndex = 6;
			this->l_StartHour->Text = L"時";
			// 
			// cb_StartMin
			// 
			this->cb_StartMin->FormattingEnabled = true;
			this->cb_StartMin->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"00", L"30" });
			this->cb_StartMin->Location = System::Drawing::Point(531, 143);
			this->cb_StartMin->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->cb_StartMin->Name = L"cb_StartMin";
			this->cb_StartMin->Size = System::Drawing::Size(93, 26);
			this->cb_StartMin->TabIndex = 7;
			// 
			// l_StartMin
			// 
			this->l_StartMin->AutoSize = true;
			this->l_StartMin->Location = System::Drawing::Point(634, 146);
			this->l_StartMin->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->l_StartMin->Name = L"l_StartMin";
			this->l_StartMin->Size = System::Drawing::Size(26, 18);
			this->l_StartMin->TabIndex = 8;
			this->l_StartMin->Text = L"分";
			// 
			// l_End
			// 
			this->l_End->AutoSize = true;
			this->l_End->Location = System::Drawing::Point(344, 210);
			this->l_End->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->l_End->Name = L"l_End";
			this->l_End->Size = System::Drawing::Size(80, 18);
			this->l_End->TabIndex = 9;
			this->l_End->Text = L"終了時刻";
			// 
			// cb_EndHour
			// 
			this->cb_EndHour->FormattingEnabled = true;
			this->cb_EndHour->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"9", L"10", L"11", L"12", L"13", L"14", L"15",
					L"16", L"17", L"18"
			});
			this->cb_EndHour->Location = System::Drawing::Point(371, 232);
			this->cb_EndHour->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->cb_EndHour->Name = L"cb_EndHour";
			this->cb_EndHour->Size = System::Drawing::Size(93, 26);
			this->cb_EndHour->TabIndex = 10;
			// 
			// l_EndHour
			// 
			this->l_EndHour->AutoSize = true;
			this->l_EndHour->Location = System::Drawing::Point(476, 240);
			this->l_EndHour->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->l_EndHour->Name = L"l_EndHour";
			this->l_EndHour->Size = System::Drawing::Size(26, 18);
			this->l_EndHour->TabIndex = 11;
			this->l_EndHour->Text = L"時";
			// 
			// cb_EndMin
			// 
			this->cb_EndMin->FormattingEnabled = true;
			this->cb_EndMin->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"00", L"30" });
			this->cb_EndMin->Location = System::Drawing::Point(531, 230);
			this->cb_EndMin->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->cb_EndMin->Name = L"cb_EndMin";
			this->cb_EndMin->Size = System::Drawing::Size(93, 26);
			this->cb_EndMin->TabIndex = 12;
			// 
			// l_EndMin
			// 
			this->l_EndMin->AutoSize = true;
			this->l_EndMin->Location = System::Drawing::Point(634, 239);
			this->l_EndMin->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->l_EndMin->Name = L"l_EndMin";
			this->l_EndMin->Size = System::Drawing::Size(26, 18);
			this->l_EndMin->TabIndex = 13;
			this->l_EndMin->Text = L"分";
			// 
			// l_Num
			// 
			this->l_Num->AutoSize = true;
			this->l_Num->Location = System::Drawing::Point(62, 330);
			this->l_Num->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->l_Num->Name = L"l_Num";
			this->l_Num->Size = System::Drawing::Size(53, 18);
			this->l_Num->TabIndex = 14;
			this->l_Num->Text = L"人数：";
			// 
			// tb_Numdata
			// 
			this->tb_Numdata->Location = System::Drawing::Point(126, 326);
			this->tb_Numdata->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tb_Numdata->Name = L"tb_Numdata";
			this->tb_Numdata->Size = System::Drawing::Size(124, 25);
			this->tb_Numdata->TabIndex = 15;
			// 
			// l_Purpose
			// 
			this->l_Purpose->AutoSize = true;
			this->l_Purpose->Location = System::Drawing::Point(62, 390);
			this->l_Purpose->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->l_Purpose->Name = L"l_Purpose";
			this->l_Purpose->Size = System::Drawing::Size(53, 18);
			this->l_Purpose->TabIndex = 16;
			this->l_Purpose->Text = L"目的：";
			// 
			// cb_Purpose
			// 
			this->cb_Purpose->FormattingEnabled = true;
			this->cb_Purpose->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"会議", L"プレゼンテーション", L"その他" });
			this->cb_Purpose->Location = System::Drawing::Point(126, 386);
			this->cb_Purpose->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->cb_Purpose->Name = L"cb_Purpose";
			this->cb_Purpose->Size = System::Drawing::Size(374, 26);
			this->cb_Purpose->TabIndex = 17;
			// 
			// ReserveForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(728, 664);
			this->Controls->Add(this->cb_Purpose);
			this->Controls->Add(this->l_Purpose);
			this->Controls->Add(this->tb_Numdata);
			this->Controls->Add(this->l_Num);
			this->Controls->Add(this->l_EndMin);
			this->Controls->Add(this->cb_EndMin);
			this->Controls->Add(this->l_EndHour);
			this->Controls->Add(this->cb_EndHour);
			this->Controls->Add(this->l_End);
			this->Controls->Add(this->l_StartMin);
			this->Controls->Add(this->cb_StartMin);
			this->Controls->Add(this->l_StartHour);
			this->Controls->Add(this->l_Day);
			this->Controls->Add(this->cb_StartHour);
			this->Controls->Add(this->l_Start);
			this->Controls->Add(this->dtp_Calendar);
			this->Controls->Add(this->b_Reserve);
			this->Controls->Add(this->b_ReserveReturn);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(750, 720);
			this->MinimumSize = System::Drawing::Size(750, 720);
			this->Name = L"ReserveForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"予約フォーム";
			this->Load += gcnew System::EventHandler(this, &ReserveForm::ReserveForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// フォーム読みコメれたときの処理
	private: System::Void ReserveForm_Load(System::Object^ sender, System::EventArgs^ e) {
		// グローバルで格納してある値をテキストに格納
		if (StartHour != 0) {
			cb_StartHour->Text = StartHour.ToString();
		}
		if (StartMin != 0) {
			cb_StartMin->Text = StartMin.ToString();
		}
		else {
			cb_StartMin->Text = "00";
		}
		if (EndHour != 0) {
			cb_EndHour->Text = EndHour.ToString();
		}
		if (EndMin != 0) {
			cb_EndMin->Text = EndHour.ToString();
		}
		else {
			cb_EndMin->Text = "00";
		}
		if (Num != 0) {
			tb_Numdata->Text = Num.ToString();
		}
	}
		   // 予約ボタンが押されたときの処理
	private: System::Void b_Reserve_Click(System::Object^ sender, System::EventArgs^ e) {
		int noterror = 0;
		// すべてを入力させる処理
		if ((cb_StartHour->Text == "") ||
			(cb_StartMin->Text == "") ||
			(cb_EndHour->Text == "") ||
			(cb_EndMin->Text == "") ||
			(tb_Numdata->Text == "") ||
			(cb_Purpose->Text == ""))
		{
			MessageBox::Show("すべての値を入力してください。", "エラー", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else {
			noterror++;
		}

		// 時間の格納
		int starttime;
		int endtime;
		try
		{
			starttime = (Convert::ToInt32(this->cb_StartHour->Text)) * 100 + (Convert::ToInt32(this->cb_StartMin->Text));
			//MessageBox::Show(starttime.ToString());
			endtime = (Convert::ToInt32(this->cb_EndHour->Text)) * 100 + (Convert::ToInt32(this->cb_EndMin->Text));
			//MessageBox::Show(endtime.ToString());
		}
		catch (Exception^ ex)
		{
			System::Diagnostics::Debug::WriteLine("エラー" + ex->Message);
		}

		// 入力時間規制
		if (starttime >= endtime) {
			MessageBox::Show("時間の指定に誤りがあります。", "エラー", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else {
			noterror++;
		}

		// 人数の格納
		int num;
		try
		{
			num = Convert::ToInt32(this->tb_Numdata->Text);
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("正しい人数を設定してください。", "エラー", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			System::Diagnostics::Debug::WriteLine("エラー" + ex->Message);
		}

		// 入力人数規制
		if (num <= 0) {
			MessageBox::Show("正しい人数を設定してください。", "エラー", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else {
			noterror++;
		}
		// 日付格納
		DateTime dt = dtp_Calendar->Value;
		int year = dt.Year;
		int month = dt.Month;
		int day = dt.Day;

		// 格納値
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
		String^ purpose = cb_Purpose->Text;

		// 予約可能か判定

		int ans = PublicData::ResearchReserve(RoomNumber, setyear, starttime, endtime, num);

		//FILE* fp;
		// ファイルへの書き込み
		if (ans && (noterror == 3)) {
			switch (RoomNumber)
			{
			case 1:
				// room1data.txtを開く（存在しない場合は新規作成）

				/*fp = fopen("room1data.txt", "a");
				if (fp == NULL) {
					exit(1);
				}
				else {
					fprintf(fp, "%d,%d/%s/%s,%d,%d,%d,%s\n", Id, year, setmonth, setday, starttime, endtime, num, purpose);
					
					// 書き込み完了メッセージ
					MessageBox::Show("予約が完了しました。\n" + year.ToString() + "/" + month.ToString() + "/" + day.ToString() + "\t" + cb_StartHour->Text + "：" + cb_StartMin->Text + "\n\t\t" + "　S\n" + "\t\t" + cb_EndHour->Text + "：" + cb_EndMin->Text + "\n人数：\t" + tb_Numdata->Text + "\n用途：\t" + cb_Purpose->Text);
					cb_StartHour->Text == "";
					cb_StartMin->Text == "";
					cb_EndHour->Text == "";
					cb_EndMin->Text == "";
					tb_Numdata->Text == "";
					cb_Purpose->Text == "";
				}
				fclose(fp);*/

				PublicData::SaveDataToFile("room1data.txt", setyear,purpose,
															starttime.ToString(), 
															endtime.ToString(), 
															Id.ToString(), 
															num.ToString(), 
															PublicData::Room1Array,
															PublicData::Room1Index);
				cb_StartHour->Text == "";
				cb_StartMin->Text == "";
				cb_EndHour->Text == "";
				cb_EndMin->Text == "";
				tb_Numdata->Text == "";
				cb_Purpose->Text == "";
				break;
			case 2:
				// room2data.txtを開く（存在しない場合は新規作成）
				/*fp = fopen("room2data.txt", "a");
				if (fp == NULL) {
					exit(1);
				}
				else {
					fprintf(fp, "%d,%d/%s/%s,%d,%d,%d,%s\n", Id, year, setmonth, setday, starttime, endtime, num, purpose);

					// 書き込み完了メッセージ
					MessageBox::Show("予約が完了しました。\n" + year.ToString() + "/" + month.ToString() + "/" + day.ToString() + "\t" + cb_StartHour->Text + "：" + cb_StartMin->Text + "\n\t\t" + "　S\n" + "\t\t" + cb_EndHour->Text + "：" + cb_EndMin->Text + "\n人数：\t" + tb_Numdata->Text + "\n用途：\t" + cb_Purpose->Text);
					cb_StartHour->Text == "";
					cb_StartMin->Text == "";
					cb_EndHour->Text == "";
					cb_EndMin->Text == "";
					tb_Numdata->Text == "";
					cb_Purpose->Text == "";
				}
				fclose(fp);*/
				PublicData::SaveDataToFile("room2data.txt", setyear, purpose,
					starttime.ToString(),
					endtime.ToString(),
					Id.ToString(),
					num.ToString(),
					PublicData::Room2Array,
					PublicData::Room2Index);
				
				cb_StartHour->Text == "";
				cb_StartMin->Text == "";
				cb_EndHour->Text == "";
				cb_EndMin->Text == "";
				tb_Numdata->Text == "";
				cb_Purpose->Text == "";
				break;
			case 3:
				// room3data.txtを開く（存在しない場合は新規作成）
				/*fp = fopen("room3data.txt", "a");
				if (fp == NULL) {
					exit(1);
				}
				else {
					fprintf(fp, "%d,%d/%s/%s,%d,%d,%d,%s\n", Id, year, setmonth, setday, starttime, endtime, num, purpose);

					// 書き込み完了メッセージ
					MessageBox::Show("予約が完了しました。\n" + year.ToString() + "/" + month.ToString() + "/" + day.ToString() + "\t" + cb_StartHour->Text + "：" + cb_StartMin->Text + "\n\t\t" + "　S\n" + "\t\t" + cb_EndHour->Text + "：" + cb_EndMin->Text + "\n人数：\t" + tb_Numdata->Text + "\n用途：\t" + cb_Purpose->Text);
					cb_StartHour->Text == "";
					cb_StartMin->Text == "";
					cb_EndHour->Text == "";
					cb_EndMin->Text == "";
					tb_Numdata->Text == "";
					cb_Purpose->Text == "";
				}
				fclose(fp);*/
				PublicData::SaveDataToFile("room3data.txt", setyear, purpose,
					starttime.ToString(),
					endtime.ToString(),
					Id.ToString(),
					num.ToString(),
					PublicData::Room3Array,
					PublicData::Room3Index); 
				cb_StartHour->Text == "";
				cb_StartMin->Text == "";
				cb_EndHour->Text == "";
				cb_EndMin->Text == "";
				tb_Numdata->Text == "";
				cb_Purpose->Text == "";
				break;
			case 4:
				// room4data.txtを開く（存在しない場合は新規作成）
				/*fp = fopen("room4data.txt", "a");
				if (fp == NULL) {
					exit(1);
				}
				else {
					fprintf(fp, "%d,%d/%s/%s,%d,%d,%d,%s\n", Id, year, setmonth, setday, starttime, endtime, num, purpose);

					// 書き込み完了メッセージ
					MessageBox::Show("予約が完了しました。\n" + year.ToString() + "/" + month.ToString() + "/" + day.ToString() + "\t" + cb_StartHour->Text + "：" + cb_StartMin->Text + "\n\t\t" + "　S\n" + "\t\t" + cb_EndHour->Text + "：" + cb_EndMin->Text + "\n人数：\t" + tb_Numdata->Text + "\n用途：\t" + cb_Purpose->Text);
					cb_StartHour->Text == "";
					cb_StartMin->Text == "";
					cb_EndHour->Text == "";
					cb_EndMin->Text == "";
					tb_Numdata->Text == "";
					cb_Purpose->Text == "";
				}
				fclose(fp);*/
				PublicData::SaveDataToFile("room4data.txt", setyear, purpose,
					starttime.ToString(),
					endtime.ToString(),
					Id.ToString(),
					num.ToString(),
					PublicData::Room4Array,
					PublicData::Room4Index); 
				cb_StartHour->Text == "";
				cb_StartMin->Text == "";
				cb_EndHour->Text == "";
				cb_EndMin->Text == "";
				tb_Numdata->Text == "";
				cb_Purpose->Text == "";
				break;
			case 5:
				// room5data.txtを開く（存在しない場合は新規作成）
				/*fp = fopen("room5data.txt", "a");
				if (fp == NULL) {
					exit(1);
				}
				else {
					fprintf(fp, "%d,%d/%s/%s,%d,%d,%d,%s\n", Id, year, setmonth, setday, starttime, endtime, num, purpose);

					// 書き込み完了メッセージ
					MessageBox::Show("予約が完了しました。\n" + year.ToString() + "/" + month.ToString() + "/" + day.ToString() + "\t" + cb_StartHour->Text + "：" + cb_StartMin->Text + "\n\t\t" + "　S\n" + "\t\t" + cb_EndHour->Text + "：" + cb_EndMin->Text + "\n人数：\t" + tb_Numdata->Text + "\n用途：\t" + cb_Purpose->Text);
				}
				fclose(fp);*/
				PublicData::SaveDataToFile("room5data.txt", setyear, purpose,
					starttime.ToString(),
					endtime.ToString(),
					Id.ToString(),
					num.ToString(),
					PublicData::Room5Array,
					PublicData::Room5Index);
				cb_StartHour->Text == "";
				cb_StartMin->Text == "";
				cb_EndHour->Text == "";
				cb_EndMin->Text == "";
				tb_Numdata->Text == "";
				cb_Purpose->Text == "";
				break;
			case 6:
				// room6data.txtを開く（存在しない場合は新規作成）
				/*fp = fopen("room6data.txt", "a");
				if (fp == NULL) {
					exit(1);
				}
				else {
					fprintf(fp, "%d,%d/%s/%s,%d,%d,%d,%s\n", Id, year, setmonth, setday, starttime, endtime, num, purpose);

					// 書き込み完了メッセージ
					MessageBox::Show("予約が完了しました。\n" + year.ToString() + "/" + month.ToString() + "/" + day.ToString() + "\t" + cb_StartHour->Text + "：" + cb_StartMin->Text + "\n\t\t" + "　S\n" + "\t\t" + cb_EndHour->Text + "：" + cb_EndMin->Text + "\n人数：\t" + tb_Numdata->Text + "\n用途：\t" + cb_Purpose->Text);
					cb_StartHour->Text == "";
					cb_StartMin->Text == "";
					cb_EndHour->Text == "";
					cb_EndMin->Text == "";
					tb_Numdata->Text == "";
					cb_Purpose->Text == "";
				}

				fclose(fp);
				*/
				PublicData::SaveDataToFile("room6data.txt", setyear, purpose,
					starttime.ToString(),
					endtime.ToString(),
					Id.ToString(),
					num.ToString(),
					PublicData::Room6Array,
					PublicData::Room6Index);
				cb_StartHour->Text == "";
				cb_StartMin->Text == "";
				cb_EndHour->Text == "";
				cb_EndMin->Text == "";
				tb_Numdata->Text == "";
				cb_Purpose->Text == "";
				break;
			default:
				MessageBox::Show("何らかのエラーが発生し、予約出来ませんでした" + dtp_Calendar->Value);
				break;
			}
		}
		else
		{
			MessageBox::Show("すでに予約されている時間です" + dtp_Calendar->Value);
		}
	}
		   // 戻るボタンが押されたときの処理
	private: System::Void b_ReserveReturn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}
