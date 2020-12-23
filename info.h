#pragma once
#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>
//std namespace 일부 사용
using std::endl;
using std::cout;
using std::cin;
using std::string;
// 학생 정보 클래스
class studentinfo
{
public:
	studentinfo(int studentnum);//constructor
	void setdata();//temp
	void getdata();//temp
private:
	int studentnum;//학번
};

class Bookinfo//책 정보를 담는 Bookinfo 클래스(학생 클래스 중첩 구조)
{
public:
	virtual void setdata();//temp
	virtual void getdata();//temp
private:
	string title;// 책 제목
	int ISBN;//책 일련번호
	string author;// 첵 저자
	string publishhouse;// 책 출판사
	string publishyear;// 책 출판년도
	string category;// 책 카테고리
	string land;// 책 대출 상태
	string timestamp;// 책 대출 타임스탬프(ctime 라이브러리 사용)
	int returnday;// 책 반납일까지 남은 일수
	studentinfo p1;//
};
/* */
void listadd();//책 정보를 추가하는 함수
void listdelete();//책 정보를 삭제하는 함수


/*
void listdelete();//책 정보를 삭제하는 함수
int studentmenu();//검색, 대여, 반납 메뉴를 출력하고 입력받는 함수
int booksearch();//책을 검색하는 함수
void bookrent(int studentnumber);//책을 대여하는 함수
void bookreturn(int studentnumber);//책을 반납하는 함수
void password();//관리자 비밀번호를 검사하는 함수
void clearBuffer();
void listload();
void listwrite();
void allsearch(char *m, char *n);// 구조체 배열포인터를 받아서 비교하는 함수








*/