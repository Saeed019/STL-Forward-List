#pragma once
#include<string>
#include<iostream>
#include<list>
#include "NumberInfo.h"
using namespace std;

class PhoneNumber
{
public:
	PhoneNumber();
	PhoneNumber(string, string);
	~PhoneNumber();
	void add_phone_number(string, string);
	void remove_phone_number(string);
	bool search_mobile_number(string);
	bool change_operator(string,string);
	int get_length();
	void print();
private:
	list<NumberInfo> numberList;
};

