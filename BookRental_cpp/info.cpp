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

string landinfo = "대여중\n";
string landinfo2 = "대여가능\n";
string landinfo3 = "대여불가\n";
string line = "\n";

studentinfo::studentinfo() : studentnum(0) { }

studentinfo::studentinfo(int studentnum) : studentnum(studentnum) { }

studentinfo::~studentinfo() { }

void studentinfo::setdata()
{
	cout << "학번을 입력해주세요: ";
	cin >> studentnum;
}

void studentinfo::printdata()
{
	cout << "학번: " << studentnum << endl;
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
		fprintf(stderr, "파일출력에러!\n");
		exit(1);
	}

	for (int i = 0; i < StudentnumMax; i++)
	{
		studentnum = (char*)malloc(sizeof(char) * MAX);
		fgets(studentnum, MAX, fp);
		n[i] = studentnum;
	}

	fclose(fp);

	printf("학번을 입력해 주세요: ");
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
		printf("입력하신 수의 자리수가 8자리보다 크거나 작습니다.\n");
		printf("학번을 다시 입력해 주세요: ");
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
		printf("학번을 잘못입력하셨습니다\n");
	while (cnt == StudentnumMax)
	{
		cnt = 0;
		printf("학번을 다시 입력해주세요: ");
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
			printf("입력하신 수의 자리수가 8자리보다 크거나 작습니다.\n");
			printf("학번을 다시 입력해 주세요: ");
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
			printf("학번을 잘못입력하셨습니다\n");
	}
	for (int i = 0; i < StudentnumMax; i++)
		free(n[i]);
	printf("학생모드에 접속했습니다\n");
	while (1)
	{
		int choice;
		printf("----------------------------------------\n");
		printf("0. 메인 메뉴로 돌아가기\n");
		printf("1. 도서 검색\n");
		printf("2. 도서 대출\n");
		printf("3. 도서 반납\n");
		printf("4. 도서 리스트 출력\n");
		printf("5. 프로그램 종료\n");
		printf("----------------------------------------\n");
		printf("수행하실 작업을 선택(숫자입력)해주세요: ");
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
					printf("제목: %s일련번호(ISBN): %s저자: %s출판사: %s출판년도: %s분야: %s대여정보: %s\n", b[i].title, b[i].ISBN, b[i].author, b[i].publishhouse, b[i].publishyear, b[i].category, b[i].land);
			}
			break;
		case 5:
			exit(1);
		default:
			printf("메뉴 번호를 잘못 입력하셨습니다\n");
		}
	};
}