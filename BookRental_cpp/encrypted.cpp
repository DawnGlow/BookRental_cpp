#include <iostream>
#include <string>
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

}