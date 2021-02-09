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
	//복호화 데이터 이용 파트
	encrypted::readdata();


	//메인 메뉴
	while (1)
	{
		int a;
		cout << "----------------------------------------" << endl;
		cout << "도서 대여 시스템에 접속합니다" << endl;
		cout << "수행하실 작업을 선택해주세요" << endl;
		cout << "0. 프로그램 종료" << endl;
		cout << "1. 학생(대출, 반납, 도서 검색" << endl;
		cout << "2. 관리자(도서 list 추가, 삭제" << endl;
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
			cout << "잘못입력하셨습니다" << endl;
			exit(1);
		}
	}
}