#include "PublicData.h"

namespace Fuck {
	using namespace System;
	using namespace System::Windows::Forms;
	void PublicData::ReadDataFromFile(String^ Filename, cli::array<String^, 2>^ DataArray, int% RoomIndex) {
		try {
			//StreamReader���g���ăt�@�C������ǂݍ���
			System::IO::StreamReader^ sr = gcnew System::IO::StreamReader(Filename);
			String^ line;

			while ((line = sr->ReadLine()) != nullptr) {
				cli::array<String^>^ parts = line->Split(',');
				if (parts->Length == 6) {
					DataArray[RoomIndex, 0] = parts[0];
					DataArray[RoomIndex, 1] = parts[1];
					DataArray[RoomIndex, 2] = parts[2];
					DataArray[RoomIndex, 3] = parts[3];
					DataArray[RoomIndex, 4] = parts[4];

					RoomIndex++;
				}
				else {
					throw gcnew Exception("�f�[�^�z�񂪂����ς��ł�");
				}
			}
			sr->Close();
		}
		catch (Exception^ e) {
			throw gcnew Exception("�t�@�C���ǂݍ��݃G���[" + e->Message);
		}

	};
	void PublicData::UserDataFromFile(String^ Filename, cli::array<String^, 2>^ DataArray, int% UserIndex) {
		ReadDataFromFile(Filename, DataArray, UserIndex);
	}
	void PublicData::SaveDataToFile(String^ fileName ,String^ data, String^ mokuteki, String^ Start, String^ End, String^ User,String^num,cli::array<String^, 2>^ dataArray,int%index) {
		try
		{
			// �t�@�C�����J��
			System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(fileName, true);

			// �f�[�^���t�@�C���ɏ�������
			sw->WriteLine(User+ "," + data  + "," + Start + "," + End+ "," + num +"," + mokuteki);
			dataArray[index, 0] = User;
			dataArray[index, 1] = data;
			dataArray[index, 2] = Start;
			dataArray[index, 3] = End;
			dataArray[index, 4] = num;
			dataArray[index, 5] = mokuteki;
			index++;
			// �t�@�C�������
			sw->Close();


			// �ۑ������̃��b�Z�[�W��\��
			MessageBox::Show("�f�[�^���t�@�C���ɕۑ�����܂����B", "���", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ e)
		{
			// �G���[���b�Z�[�W��\��
			MessageBox::Show("�t�@�C���ɏ������ލۂɃG���[���������܂���: " + e->Message, "�G���[", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	int PublicData::ResearchReserve(int RoomNumber, String^ Date, int Start, int End, int people) {
		int Max;
		switch (RoomNumber) {
		case 1:

			Max = 6;
			for (int i = 0; i < Room1Index; i++) {
				if (Room1Array == nullptr)
				{
					return 1;
				}else if (people <= Max)
				{
					if (Room1Array[i, 1] != Date)
					{
						return 1;
					}
					else if ((Room1Array[i, 1] == Date) && (Convert::ToInt32(Room1Array[i, 2]) <= End) && ((Convert::ToInt32(Room1Array[i, 3]) < Start)))
					{
						return 1;
					}
					else { return 0; }
				}
				else { return 0; }
			}
		case 2:
			Max = 10;
			for (int i = 0; i < Room1Index; i++) {
				if(Room2Array == nullptr)
				{
					return 1;
				}else if (people <= Max)
				{
					if (Room2Array[i, 1] != Date) {
						return 1;
					}
					else if ((Room2Array[i, 1] == Date) && (Convert::ToInt32(Room2Array[i, 2]) <= End) && ((Convert::ToInt32(Room2Array[i, 3]) < Start)))
					{
						return 1;
					}
					else { return 0; }
				}
				else { return 0; }
			}
		case 3:
			Max = 15;
			for (int i = 0; i < Room3Index; i++) {
				if (Room3Array == nullptr)
				{
					return 1;
				}
				else if (people <= Max)
				{
					if (Room3Array[i, 1] != Date)
					{
						return 1;
					}
					else if ((Room3Array[i, 1] == Date) && (Convert::ToInt32(Room3Array[i, 2]) <= End) && ((Convert::ToInt32(Room3Array[i, 3]) < Start)))
					{
						return 1;
					}
					else { return 0; }
				}
				else { return 0; }
			}
		case 4:
			Max = 50;
			for (int i = 0; i < Room4Index; i++) {
				if (Room4Array == nullptr)
				{
					return 1;
				}
				else if (people <= Max)
				{
					if (Room4Array[i, 1] != Date)
					{
						return 1;

					}
					else if ((Room4Array[i, 1] == Date) && (Convert::ToInt32(Room4Array[i, 2]) <= End) && ((Convert::ToInt32(Room4Array[i, 3]) < Start)))
					{
						return 1;
					}
					else { return 0; }
				}
				else { return 0; }
			}
		case 5:
			Max = 4;
			for (int i = 0; i < Room5Index; i++) {
				if (Room5Array == nullptr)
				{
					return 1;
				}
				else if (people <= Max)
				{
					if (Room5Array[i, 1] != Date)
					{
						return 1;
					}
					else if ((Room5Array[i, 1] == Date) && (Convert::ToInt32(Room5Array[i, 2]) <= End) && ((Convert::ToInt32(Room5Array[i, 3]) < Start)))
					{
						return 1;
					}
					else { return 0; }
				}
				else { return 0; }
			}
		case 6:
			Max = 1;
			for (int i = 0; i < Room6Index; i++) {
				if (Room6Array == nullptr)
				{
					return 1;
				}
				else if (people <= Max)
				{
					if (Room6Array[i, 1] != Date)
					{
						return 1;
					}
					else if ((Room6Array[i, 1] == Date) && (Convert::ToInt32(Room6Array[i, 2]) <= End) && ((Convert::ToInt32(Room6Array[i, 3]) < Start)))
					{
						return 1;
					}
					else { return 0; }
				}
				else { return 0; }
			}
		}
	}
	void PublicData::LoadDataToListBox(array<String^, 2>^ dataArray, int currentIndex, System::Windows::Forms::ListBox^ listBox)
	{
		String^ head1;
		String^ tail1;
		String^ head2;
		String^ tail2;
		listBox->Items->Clear();
		for (int i = 0; i < currentIndex; i++) {
			if (dataArray[i, 0] == nullptr || dataArray[i, 1] == nullptr || dataArray[i, 2] == nullptr) {
				System::Diagnostics::Debug::WriteLine("Null value in dataArray at index: " + i);
			}
			else {
				head1 = dataArray[i, 2]->Substring(0, dataArray[i, 2]->Length - 2);
				tail1 = dataArray[i, 2]->Substring(dataArray[i, 2]->Length - 2);
				head2 = dataArray[i, 2]->Substring(0, dataArray[i, 3]->Length - 2);
				tail2 = dataArray[i, 2]->Substring(dataArray[i, 3]->Length - 2);
				listBox->Items->Add("�\��: " +
					dataArray[i, 1] + ", " +
					head1 + ":" +
					tail1 + "�`" +
					head2 + ":" +
					tail2 + "," +
					dataArray[i, 4] + ", " +
					dataArray[i, 5]);
			}
		}
	}
}