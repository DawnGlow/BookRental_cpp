#pragma once
#include <iostream>
using std::string;

namespace encrypted 
{
	void setpassword();
	void readpassword();
	void readdata();
	void outputdata();
	void setbook();
	void setstu();
	int booknum;
	int stunum;
	string password;
}