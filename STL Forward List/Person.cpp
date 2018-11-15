#include "Person.h"
#include<iostream>
using namespace std;

Person::Person()
{
	 name = "";
	 fatherName = "";
	 motherName = "";
	 maritalStatus;
	 nationalId = "";
	 spouseName = "";
	 presentAddress = "";
	 permanentAddress = "";
	 height = 0.0;
	 weight = 0.0;
	 eyeColor = "";
	 hairColor = "";

}

Person::Person(string name, string fatherName, string motherName, string maritalStatus, string nationalId, string spouseName, string presentAddress, string permanentAddress, float height, float weight, string eyeColor, string hairColor)
{
		this->name = name;
		this->fatherName = fatherName;
		this->motherName = motherName;
		this->maritalStatus = maritalStatus;
		this->nationalId = nationalId;
		this->spouseName = spouseName;
		this->presentAddress = presentAddress;
		this->permanentAddress = permanentAddress;
		this->height = height;
		this->weight = weight;
		this->eyeColor = eyeColor;
		this->hairColor = name;
	
}

Person::~Person()
{
	name = "";
	fatherName = "";
	motherName = "";
	maritalStatus;
	nationalId = "";
	spouseName = "";
	presentAddress = "";
	permanentAddress = "";
	height = 0.0;
	weight = 0.0;
	eyeColor = "";
	hairColor = "";
}
void Person::set_name(string name)
{
	this->name = name;
}
void Person::set_father_name(string fatherName)
{
	this->fatherName = fatherName;
}
void Person::set_mother_name(string motherName)
{
	this->motherName = motherName;
}
void Person::set_marital_status(string maritalStatus)
{
	this->maritalStatus = maritalStatus;
}

void Person::set_national_id(string nationalId)
{
		this->nationalId = nationalId;
}
void Person::set_spouse_name(string spouseName)
{
	this->spouseName = spouseName;
}
void Person::set_present_address(string presentAddress)
{
	this->presentAddress = presentAddress;

}
void Person::set_permanent_address(string permanentAddress)
{
	this->permanentAddress = permanentAddress;

}
void Person::set_height(float height)
{
	this->height = height;
}
void Person::set_weight(float weight)
{
	this->weight = weight;
}
void Person::set_eye_color(string eyeColor)
{
	this->eyeColor = eyeColor;
}
void Person::set_hair_color(string hairColor)
{
	this->hairColor = hairColor;
}
string Person::get_name()
{
	return name;
}
string Person::get_father_name()
{
	return fatherName;
}
string Person::get_mother_name()
{
	return motherName;
}
string Person::get_marital_status()
{
	return maritalStatus;
}
string Person::get_national_id()
{
	return nationalId;
}
string Person::get_spouse_name()
{
	return spouseName;
}
string Person::get_present_address()
{
	return presentAddress;
}
string Person::get_permanent_address()
{
	return permanentAddress;
}
float Person::get_height()
{
	return height;
}
float Person::get_weight()
{
	return weight;
}
string Person::get_eye_color()
{
	return eyeColor;
}
string Person::get_hair_color()
{
	return hairColor;
}
void Person::print_person()
{
	cout << "Personal information: " << endl;
	cout << "Name: " << name << endl;
	cout << "Father Name: " << fatherName << endl;
	cout << "Mother Name: " << motherName << endl;
	cout << "Marital Status: " << maritalStatus << endl;
	cout << "National ID: " << nationalId << endl;
	cout << "Spouse Name: " << spouseName << endl;
	cout << "Present Address: " << presentAddress << endl;
	cout << "Permanent Address: " << permanentAddress << endl;
	cout << "Height: " << height << endl;
	cout << "Weight: " << weight << endl;
	cout << "Eye Color: " << eyeColor << endl;
	cout << "Hair Color: " << hairColor << endl;
}
