#pragma once
#include <iostream>
#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>
//std namespace 일부 사용
using std::string;
class studentdata
{
public:
	studentdata(int, string, string, string);
	studentdata();
	~studentdata();
	int studentnum;
	void setstudata(int ,string, string, string);
	void printdata();
	int stunumdata();
	string stunamedata();
	string stumajordata();
	string stugradedata();
private:
	string name;
	string major;
	string grade;
};
