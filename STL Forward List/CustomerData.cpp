#include "CustomerData.h"

CustomerData::CustomerData()
{
}
CustomerData::CustomerData(string name, string fatherName, string motherName, string maritalStatus, 
	string nationalId, string spouseName, string presentAddress, string permanentAddress, float height,
	         float weight, string eyeColor, string hairColor,string mobile_number,string number_operator)
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
	numberList.add_phone_number(mobile_number, number_operator);
}

CustomerData::~CustomerData()
{
}

bool CustomerData::check_nid(string nId)
{
	return nId.compare(nId)==0;
}

bool CustomerData::check_mobile(string mobileNumber)
{
	return numberList.search_mobile_number(mobileNumber);
}

void CustomerData::print()
{
	this->print_person();
	numberList.print();
}

bool CustomerData::insert_phone(string nId,string mobileNumber, string numberOperator)
{
	if (nId.compare(nationalId) == 0)
	{
		numberList.add_phone_number(mobileNumber, numberOperator);
		return true;
	}
	else
	{
		return false;
	}
}

void CustomerData::delete_phone(string mobileNumber)
{
		numberList.remove_phone_number(mobileNumber);
}

bool CustomerData::is_equal(string nId)
{
	return (nId.compare(nationalId) == 0);
}

bool CustomerData::change_operator(string mobileNumber, string numberOperator)
{
	return numberList.change_operator(mobileNumber, numberOperator);
}

int CustomerData::count_number()
{
	return numberList.get_length();
}
