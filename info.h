#pragma once
#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>
//std namespace �Ϻ� ���
using std::endl;
using std::cout;
using std::cin;
using std::string;
// �л� ���� Ŭ����
class studentinfo
{
public:
	studentinfo(int studentnum);//constructor
	void setdata();//temp
	void getdata();//temp
private:
	int studentnum;//�й�
};

class Bookinfo//å ������ ��� Bookinfo Ŭ����(�л� Ŭ���� ��ø ����)
{
public:
	virtual void setdata();//temp
	virtual void getdata();//temp
	int n;
private:
	string title;// å ����
	int ISBN;//å �Ϸù�ȣ
	string author;// ý ����
	string publishhouse;// å ���ǻ�
	string publishyear;// å ���ǳ⵵
	string category;// å ī�װ�
	string land;// å ���� ����
	string timestamp;// å ���� Ÿ�ӽ�����(ctime ���̺귯�� ���)
	int returnday;// å �ݳ��ϱ��� ���� �ϼ�

	/* ũ�� �������� ���� ���??*/
	studentinfo p1[];// �л� Ŭ���� ���ο��� ����
};
/* Ŭ���� static �Լ��� ��ü ����*/
void listadd();//å ������ �߰��ϴ� �Լ�
void listdelete();//å ������ �����ϴ� �Լ�

int adminmenu();//�����ڸ�忡�� �߰�,���� �޴��� ����ϰ� �Է¹޴� �Լ�
int studentmenu();//�˻�, �뿩, �ݳ� �޴��� ����ϰ� �Է¹޴� �Լ�
int booksearch();//å�� �˻��ϴ� �Լ�
void allsearch(char* m, char* n);// ����ü �迭�����͸� �޾Ƽ� ���ϴ� �Լ�

/* ��� �޼���� ��ä ������ �Լ�*/
void bookrent(int studentnumber);//å�� �뿩�ϴ� �Լ�
void bookreturn(int studentnumber);//å�� �ݳ��ϴ� �Լ�

void password();//������ ��й�ȣ�� �˻��ϴ� �Լ�

/* string class �޼���� ��ü ������ �Լ�*/
void clearBuffer();//���۸� ����� �Լ�

/* ����������� ����ϴ� �Լ�*/
void listload();//����������� ���� ����Ʈ �ҷ�����
void listwrite();//����������� ���� ����Ʈ ����

