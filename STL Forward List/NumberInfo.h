#pragma once
#include<iostream>
using namespace std;
class NumberInfo
{
public:
	NumberInfo();
	NumberInfo(string,string);

	~NumberInfo();
	void set_mobile_number(string);
	void set_number_operator(string);
	bool is_equal(string);

	string get_mobile_number();
	string get_number_operator();
	void print();

private:
	string mobileNumber;
	string numberOperator;
};

