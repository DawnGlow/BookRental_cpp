#include <iostream>
#include <string>
#include <fstream>
#include "encrypted.h"
using namespace std;

void encrypted::setbook()
{
	cout << "책 권수를 설정해 주세요: ";
	cin >> booknum;
}

void encrypted::setstu()
{
	cout << "학생 수를 입력해주세요: ";
	cin >> stunum;
}

void encrypted::readdata()
{
	int enc_stunum;
	int enc_booknum;
	ifstream fin;
	fin.open("encrypted.txt");
	fin >> enc_booknum;
	fin >> enc_stunum;
	cout << "데이터 프레임 입력 성공" << endl;
	stunum = enc_stunum / 2 - 48;
	booknum = enc_booknum / 5 + 40;
}

void encrypted::outputdata()
{
	int enc_stunum;
	int enc_booknum;
	enc_stunum = (stunum + 48) * 2;
	enc_booknum = (booknum - 40) * 5;
	ofstream fout;
	fout.open("encrypted.txt");
	fout << enc_booknum << "\n" << enc_stunum << "\n";
	cout << "데이터 프레임 출력 성공" << endl;
}

void encrypted::setpassword()
{
	cout << "Plz, Input password" << endl;
	cin >> password;
	cout << "Completely save password!" << endl;
}

void encrypted::readpassword()
{
	string u_password;
	cout << "Plz, input password" << endl;
	cin >> u_password;
	if(strcmp())
}