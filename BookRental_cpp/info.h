#pragma once
#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>
//std namespace 일부 사용
using std::string;
// 학생 정보 클래스
class studentinfo
{
public:
	studentinfo(int studentnum);//constructor
	studentinfo();//constructor
	~studentinfo();//destructor
	void setdata();//temp
	void printdata();//temp
	int getdata();//temp
private:
	int studentnum;//학번
};

class Bookinfo//책 정보를 담는 Bookinfo 클래스(학생 클래스 중첩 구조)
{
public:
	Bookinfo();//constructor
	~Bookinfo();//destructor
	virtual void setdata();//temp
	virtual void getdata();//temp
	int getsize(int n);
private:
	string title;// 책 제목
	int ISBN;//책 일련번호
	string author;// 첵 저자
	string publishhouse;// 책 출판사
	int publishyear;// 책 출판년도
	string category;// 책 카테고리
	string land;// 책 대출 상태
	int timestamp;// 책 대출 타임스탬프(ctime 라이브러리 사용)
	int returnday;// 책 반납일까지 남은 일수
	int bookcount;// 책 개수
		/* 크기 동적으로 저장 어떻게??*/
	studentinfo* p1 = new studentinfo[bookcount];// 학생 클래스 내부에서 선언
};
/* 클래스 static 함수로 대체 가능*/
void listadd();//책 정보를 추가하는 함수
void listdelete();//책 정보를 삭제하는 함수

int adminmenu();//관리자모드에서 추가,삭제 메뉴를 출력하고 입력받는 함수
int studentmenu();//검색, 대여, 반납 메뉴를 출력하고 입력받는 함수
int booksearch();//책을 검색하는 함수
void allsearch(char* m, char* n);// 구조체 배열포인터를 받아서 비교하는 함수

/* 멤버 메서드로 대채 가능한 함수*/
void bookrent(int studentnumber);//책을 대여하는 함수
void bookreturn(int studentnumber);//책을 반납하는 함수

void password();//관리자 비밀번호를 검사하는 함수

/* string class 메서드로 대체 가능한 함수*/
void clearBuffer();//버퍼를 지우는 함수

/* 파일입출력을 담당하는 함수*/
void listload();//파일입출력을 통해 리스트 불러오기
void listwrite();//파일입출력을 통해 리스트 쓰기