#include "CustomerList.h"

CustomerList::CustomerList()
{
}

CustomerList::CustomerList(string name, string fatherName, string motherName, string maritalStatus,
	string nationalId, string spouseName, string presentAddress, string permanentAddress, float height,
	float weight, string eyeColor, string hairColor, string mobile_number, string number_operator)
{
	insert_customer(name, fatherName, motherName, maritalStatus,
		nationalId, spouseName, presentAddress, permanentAddress, height,
		weight, eyeColor, hairColor, mobile_number, number_operator);
}


CustomerList::~CustomerList()
{
}

bool CustomerList::search_nid(string nid)
{
	for (auto it = customerList.begin();it != customerList.end();it++)
	{
		if (it->get_national_id().compare(nid) == 0)
			return true;
    }
	return false;
}

bool CustomerList::search_mobile(string mobileNumber)
{
	bool found = false;
	for (auto it = customerList.begin();it != customerList.end();it++)
	{
		found = it->check_mobile(mobileNumber);
		if (found)
			break;
	}
	return found;
}
bool check_nid(string nationalId)
{
	return nationalId.length() == 11;
}
void CustomerList::insert_customer(string name, string fatherName, string motherName, string maritalStatus,
	string nationalId, string spouseName, string presentAddress, string permanentAddress, float height,
	float weight, string eyeColor, string hairColor, string mobileNumber, string numberOperator)
{

	CustomerData customer(name, fatherName, motherName, maritalStatus,
		nationalId, spouseName, presentAddress, permanentAddress, height,
		weight, eyeColor, hairColor, mobileNumber, numberOperator);
	if (check_nid(nationalId))
	{
		if (search_nid(nationalId))
		{
			cout << "This National Id is Already Resistered." << endl;
		}
		else
		{
			if (!search_mobile(mobileNumber))
			{
				customerList.push_back(customer);
			}
			else
				cout << "This Mobile Number is already Resistered." << endl;
		}
	}
	else
	{
		cout << "This National Id is Not Correct." << endl;
	}
}

void CustomerList::insert_mobile_number(string nationalId, string mobileNumber,string numberOperator)
{
	bool found = false;
	if (check_nid(nationalId))
	{
		if (!(search_mobile(mobileNumber)))
		{
			for (auto it = customerList.begin();it != customerList.end();it++)
			{
				found = it->insert_phone(nationalId, mobileNumber, numberOperator);
				if (found)
					break;
			}
			if (!found)
			{
				cout << "This National Id is Not Resistered." << endl;
			}
		}
		else
			cout << "This Number is Already Resistered" << endl;

	}
	else
	{
		cout << "National Id is National Id Correct." << endl;
	}
}

void CustomerList::delete_customer(string nId)
{
	for (auto it = customerList.begin();it != customerList.end();it++)
	{
		if (it->get_national_id().compare(nId) == 0)
		{
			it = customerList.erase(it);
			break;
		}
	}


}

void CustomerList::remove_mobile_number(string mobileNumber)
{
	bool found = false;
		if (search_mobile(mobileNumber))
		{
			for (auto it = customerList.begin();it != customerList.end();it++)
			{
				if (it->check_mobile(mobileNumber))
				{
					if (it->count_number() == 1)
					{
						delete_customer(it->get_national_id());
					}
					else
						it->delete_phone(mobileNumber);
					found = true;
				}
				if (found)
					break;
			}
			if (!found)
			{
				cout << "This National Id is Not Resistered." << endl;
			}
		}
		else
			cout << "This Number is Not Resistered." << endl;
}

void CustomerList::change_operator(string mobileNumber, string newOperator)
{
	bool found = false;
	if (search_mobile(mobileNumber))
	{
		for (auto it = customerList.begin();it != customerList.end();it++)
		{
			found = it->change_operator(mobileNumber, newOperator);
			if (found)
				break;
		}
		if (!found)
		{
			cout << "This National Id is Not Resistered." << endl;
		}
	}
	else
		cout << "This Number is Not Resistered." << endl;
}

void CustomerList::print()
{
	cout << "List Content-> "<<std::endl;
	for (auto it = customerList.begin();it != customerList.end();it++)
	{
		it->print();
	}
}
