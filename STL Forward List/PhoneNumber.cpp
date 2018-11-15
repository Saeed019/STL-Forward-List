#include "PhoneNumber.h"

PhoneNumber::PhoneNumber()
{

}

PhoneNumber::PhoneNumber(string mobileNumber, string numberOperator)
{
	add_phone_number(mobileNumber, numberOperator);
}


PhoneNumber::~PhoneNumber()
{

}

void PhoneNumber::add_phone_number(string mobileNumber, string numberOperator)
{
	NumberInfo  number(mobileNumber, numberOperator);
	if (numberList.size() == 15)
	{
		cout << "Already have 15 numbers!" << endl;
	}
	else
	{
		numberList.push_back(number);
	}
}

void PhoneNumber::remove_phone_number(string mobileNumber)
{
	NumberInfo  number(mobileNumber, "");
	if (numberList.size() == 1)
	{
		numberList.clear();
	}
	else
	{
		for (auto it = numberList.begin();it != numberList.end();it++)
		{
			if (it->get_mobile_number().compare(mobileNumber)==0)
			{
				it = numberList.erase(it);
			}
		}
	}
}

bool PhoneNumber::search_mobile_number(string mobileNumber)
{
	for (auto it = numberList.begin();it != numberList.end();it++)
	{
		if (it->get_mobile_number().compare(mobileNumber) == 0)
		{
			return true;
		}
	}
	return false;
}

bool PhoneNumber::change_operator(string mobileNumber, string newOperator)
{

	for (auto it = numberList.begin();it != numberList.end();it++)
	{
			if (it->get_mobile_number().compare(mobileNumber) == 0)
			{
				it->set_number_operator(newOperator);
				return true;
			}
	}
	return false;

}

int PhoneNumber::get_length()
{
	return numberList.size();
}

void PhoneNumber::print()
{
	for (auto it = numberList.begin();it != numberList.end();it++)
	{
		it->print();
	}
	cout << endl;
}

