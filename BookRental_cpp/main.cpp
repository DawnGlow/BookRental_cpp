#include <iostream>
#include <string>
#include <cstdlib>
#include <windows.h>
#include <ctime>
#include "info.h"
#include "info.cpp"
#include "encrypted.h"
#include "encrypted.cpp"

using namespace std;



int main(void)
{
	//��ȣȭ ������ �̿� ��Ʈ
	encrypted::readdata();


	//���� �޴�
	while (1)
	{
		int a;
		cout << "----------------------------------------" << endl;
		cout << "���� �뿩 �ý��ۿ� �����մϴ�" << endl;
		cout << "�����Ͻ� �۾��� �������ּ���" << endl;
		cout << "0. ���α׷� ����" << endl;
		cout << "1. �л�(����, �ݳ�, ���� �˻�" << endl;
		cout << "2. ������(���� list �߰�, ����" << endl;
		cout << "----------------------------------------" << endl;
		cin >> a;
		switch (a)
		{
		case 1:
			studentmenu();
			break;
		case 2:
			adminmenu();
			break;
		case 0:
			return 0;
		default:
			cout << "�߸��Է��ϼ̽��ϴ�" << endl;
			exit(1);
		}
	}
}