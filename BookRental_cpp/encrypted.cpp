#include <iostream>
#include <string>
#include <fstream>
#include "encrypted.h"
using namespace std;

void encrypted::setbook()
{
	cout << "å �Ǽ��� ������ �ּ���: ";
	cin >> booknum;
}

void encrypted::setstu()
{
	cout << "�л� ���� �Է����ּ���: ";
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
	cout << "������ ������ �Է� ����" << endl;
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
	cout << "������ ������ ��� ����" << endl;
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