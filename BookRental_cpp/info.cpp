#include <iostream>
#include <string>
#include <ctime>
#include <windows.h>
#include "info.h"
<<<<<<< HEAD
#include "studentdata.h"
=======
>>>>>>> 5d658cfeca5c47067c3522a76c1600c9b819688a
#include <fstream>
#define MAX 100
#define BooknumMax 30
#define StudentnumMax 10
using std::endl;
using std::cout;
using std::cin;
using std::string;
using std::ofstream;
using std::ifstream;
using std::fstream;

string landinfo = "�뿩��\n";
string landinfo2 = "�뿩����\n";
string landinfo3 = "�뿩�Ұ�\n";
string line = "\n";

studentinfo::studentinfo() : studentnum(0) { }

studentinfo::studentinfo(int studentnum) : studentnum(studentnum) { }

studentinfo::~studentinfo() { }

void studentinfo::setdata()
{
	cout << "�й��� �Է����ּ���: ";
	cin >> studentnum;
}

void studentinfo::printdata()
{
	cout << "�й�: " << studentnum << endl;
}

int studentinfo::getdata()
{
	return studentnum;
}

Bookinfo::Bookinfo()
	: title(""), ISBN(0), author(""), publishhouse(""), publishyear(1970), land(""),
	timestamp(0), returnday(7), bookcount(3), p1(NULL) { }

Bookinfo::~Bookinfo()
{
	delete[] p1;
}

void Bookinfo::setdata()
{

}

int studentmenu()
{
	int studentnumber;
	int num_len = 0;
	int p = 1;
	int cnt = 0;
	char* studentnum;
	char* n[10];
	ifstream readfile;
	readfile.open("studentnum.txt");
	if (readfile.is_open())
	{
		while (!readfile.eof())
		{
			char arr[256];
			readfile.getline(arr, 256);
		}
	}
	readfile.close();
	FILE* fp = NULL;

	fp = fopen("studentnum.txt", "r");
	if (fp == NULL)
	{
		fprintf(stderr, "������¿���!\n");
		exit(1);
	}

	for (int i = 0; i < StudentnumMax; i++)
	{
		studentnum = (char*)malloc(sizeof(char) * MAX);
		fgets(studentnum, MAX, fp);
		n[i] = studentnum;
	}

	fclose(fp);

	printf("�й��� �Է��� �ּ���: ");
	scanf("%d", &studentnumber);
	while (studentnumber > p)
	{
		p *= 10;
		num_len++;
	}
	while (num_len != 8)
	{
		p = 1;
		num_len = 0;
		printf("�Է��Ͻ� ���� �ڸ����� 8�ڸ����� ũ�ų� �۽��ϴ�.\n");
		printf("�й��� �ٽ� �Է��� �ּ���: ");
		scanf("%d", &studentnumber);
		while (studentnumber > p)
		{
			p *= 10;
			num_len++;
		}
	}

	for (int i = 0; i < StudentnumMax; i++)
	{
		if (studentnumber != (atoi(n[i])))
			cnt++;
		else
			continue;
	}
	if (cnt == StudentnumMax)
		printf("�й��� �߸��Է��ϼ̽��ϴ�\n");
	while (cnt == StudentnumMax)
	{
		cnt = 0;
		printf("�й��� �ٽ� �Է����ּ���: ");
		scanf("%d", &studentnumber);
		p = 1;
		num_len = 0;
		while (studentnumber > p)
		{
			p *= 10;
			num_len++;
		}
		while (num_len != 8)
		{
			p = 1;
			num_len = 0;
			printf("�Է��Ͻ� ���� �ڸ����� 8�ڸ����� ũ�ų� �۽��ϴ�.\n");
			printf("�й��� �ٽ� �Է��� �ּ���: ");
			scanf("%d", &studentnumber);
			while (studentnumber > p)
			{
				p *= 10;
				num_len++;
			}
		}
		for (int i = 0; i < StudentnumMax; i++)
		{
			if (studentnumber != (atoi(n[i])))
				cnt++;
			else
				continue;
		}
		if (cnt == 10)
			printf("�й��� �߸��Է��ϼ̽��ϴ�\n");
	}
	for (int i = 0; i < StudentnumMax; i++)
		free(n[i]);
	printf("�л���忡 �����߽��ϴ�\n");
	while (1)
	{
		int choice;
		printf("----------------------------------------\n");
		printf("0. ���� �޴��� ���ư���\n");
		printf("1. ���� �˻�\n");
		printf("2. ���� ����\n");
		printf("3. ���� �ݳ�\n");
		printf("4. ���� ����Ʈ ���\n");
		printf("5. ���α׷� ����\n");
		printf("----------------------------------------\n");
		printf("�����Ͻ� �۾��� ����(�����Է�)���ּ���: ");
		clearBuffer();
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			booksearch();
			break;
		case 2:
			bookrent(studentnumber);
			break;
		case 3:
			bookreturn(studentnumber);
			break;
		case 0:
			return 0;
		case 4:
			for (int i = 0; i < BooknumMax; i++)
			{
				if (strlen(b[i].title) != 0)
					printf("����: %s�Ϸù�ȣ(ISBN): %s����: %s���ǻ�: %s���ǳ⵵: %s�о�: %s�뿩����: %s\n", b[i].title, b[i].ISBN, b[i].author, b[i].publishhouse, b[i].publishyear, b[i].category, b[i].land);
			}
			break;
		case 5:
			exit(1);
		default:
			printf("�޴� ��ȣ�� �߸� �Է��ϼ̽��ϴ�\n");
		}
	};
}