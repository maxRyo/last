#pragma once
#include<fstream>
static int RoomNumber;
static int StartHour;
static int StartMin;
static int EndHour;
static int EndMin;
static int Num;
static int Id = 1;
static int flag ;
namespace Fuck{
	using namespace System;
	ref class PublicData
	{
		static property PublicData^ Instance {
			PublicData^ get() {
				if (instance == nullptr) {
					instance = gcnew  PublicData();
				}
				return instance;
			}
		}

	private:
		static  PublicData^ instance = nullptr;
	public:
		static int Start;
		static int End;
		//���O�C���Ŏg�p����ϐ�
		static String^ Id = "";
		static String^ PassWord;
		static int Flag = 1;

		//�V�K�o�^�Ŏg�p����ϐ�
		static String^ NewId = "";
		static String^ NewPassword = "";

		//�I�𕔉��ԍ���ۊǂ���ϐ�
		static int RoomNumber = 0;

		//�\��Ŏg�p����ϐ�
		static String^ Date = "";
		static String^ StartHour = "";
		static String^ StartMin = "";
		static String^ EndHour = "";
		static String^ EndMin = "";
		static int Num = 0;

		//�F�؏���ۊǂ���z��
		static cli::array<String^, 1>^ UserArray = gcnew cli::array<String^, 1>(100);

		//�F�؏��z��̍Ō�̗v�f���w���v�f�ԍ�
		static int UserInfoIndex = 0;

		//�������ꂼ��̃e�L�X�g�f�[�^��ۊǂ���z��
		static cli::array<String^, 2>^ Room1Array = gcnew cli::array<String^, 2>(100, 6);
		static cli::array<String^, 2>^ Room2Array = gcnew cli::array<String^, 2>(100, 6);
		static cli::array<String^, 2>^ Room3Array = gcnew cli::array<String^, 2>(100, 6);
		static cli::array<String^, 2>^ Room4Array = gcnew cli::array<String^, 2>(100, 6);
		static cli::array<String^, 2>^ Room5Array = gcnew cli::array<String^, 2>(100, 6);
		static cli::array<String^, 2>^ Room6Array = gcnew cli::array<String^, 2>(100, 6);

		//�����z��̍Ō�̗v�f���w���v�f�ԍ�
		static int Room1Index = 0;
		static int Room2Index = 0;
		static int Room3Index = 0;
		static int Room4Index = 0;
		static int Room5Index = 0;
		static int Room6Index = 0;


		//�����̃t�@�C������f�[�^��ǂݍ��ފ֐�
		static void ReadDataFromFile(String^ Filename, cli::array<String^, 2>^ DataArray, int% RoomIndex);

		//�F�؏��t�@�C������f�[�^��ǂݍ��ފ֐�
		static void UserDataFromFile(String^ Filename, cli::array<String^, 2>^ DataArray, int% UserIndex);

		//�f�[�^���d�����Ă��Ȃ����̊֐�
		static int ResearchReserve(int RoomNumber, String^ Date, int Start, int End, int people);

		// �z������X�g�{�b�N�X�ɕ\������֐�
		static void LoadDataToListBox(cli::array<String^, 2>^ dataArray, int currentIndex, System::Windows::Forms::ListBox^ listBox);

		// �t�@�C���Ƀf�[�^���������ފ֐�
		static void SaveDataToFile(String^ fileName, String^ data, String^ mokuteki, String^ Start, String^ End, String^ User, String^ num,cli::array<String^, 2>^ dataArray,int%index);

	};
};