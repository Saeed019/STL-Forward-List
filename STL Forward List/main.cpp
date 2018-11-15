#include<iostream>
using namespace std;
#include "CustomerList.h"

int main()
{
	cout <<"Creating customer list by inserting a customer-> " << endl;
	CustomerList a("Name", "FatherName", "MotherName", "Marital Status", "11111111111", "Spouse Name", "Present Address", "Permanant Address",
		105.0, 24, "eyeColor", "Hair Color", "01752411511", "Grameen Phone");
	a.print();

	cout << endl << endl << "Inserting a new customer-> " << endl;
	a.insert_customer("Name", "FatherName", "MotherName", "Marital Status", "22222222222", "Spouse Name", "Present Address", "Permanant Address",
		106.0, 24, "eyeColor", "Hair Color", "01752411512", "Grameen Phone");
	a.print();

	cout << endl << endl << "Inserting a new mobile number in a existing customer-> " << endl;
	a.insert_mobile_number("11111111111", "01952411521", "Grameen Phone");
	a.print();

	cout << endl << endl << "Inserting 5 new customer-> " << endl;
	a.insert_customer("Name", "FatherName", "MotherName", "Marital Status", "33333333333", "Spouse Name", "Present Address", "Permanant Address",
		106.0, 24, "eyeColor", "Hair Color", "01752411513", "Grameen Phone");
	a.insert_customer("Name", "FatherName", "MotherName", "Marital Status", "44444444444", "Spouse Name", "Present Address", "Permanant Address",
		106.0, 24, "eyeColor", "Hair Color", "01752411514", "Grameen Phone");
	a.insert_customer("Name", "FatherName", "MotherName", "Marital Status", "55555555555", "Spouse Name", "Present Address", "Permanant Address",
		106.0, 24, "eyeColor", "Hair Color", "01752411515", "Grameen Phone");
	a.insert_customer("Name", "FatherName", "MotherName", "Marital Status", "66666666666", "Spouse Name", "Present Address", "Permanant Address",
		106.0, 24, "eyeColor", "Hair Color", "01752411516", "Grameen Phone");
	a.insert_customer("Name", "FatherName", "MotherName", "Marital Status", "77777777777", "Spouse Name", "Present Address", "Permanant Address",
		106.0, 24, "eyeColor", "Hair Color", "01752411517", "Grameen Phone");
	a.insert_customer("Name", "FatherName", "MotherName", "Marital Status", "88888888888", "Spouse Name", "Present Address", "Permanant Address",
		106.0, 24, "eyeColor", "Hair Color", "01752411518", "Grameen Phone");
	a.print();

	cout << endl << endl << "Removing a mobile number from a existing customer-> " << endl;
	a.remove_mobile_number("01752411511");
	cout << "Changing mobile number operator of a existing customer-> " << endl;
	a.change_operator("01952411521", "Bangla Link");
	a.print();

	cout << endl << endl << "Trying to insert more than fifteen number in a existing customer-> " << endl;
	a.insert_mobile_number("11111111111", "01952411531", "Grameen Phone");
	a.insert_mobile_number("11111111111", "01952411541", "Grameen Phone");
	a.insert_mobile_number("11111111111", "01952411551", "Grameen Phone");
	a.insert_mobile_number("11111111111", "01952411561", "Grameen Phone");
	a.insert_mobile_number("11111111111", "01952411571", "Grameen Phone");
	a.insert_mobile_number("11111111111", "01952411581", "Grameen Phone");
	a.insert_mobile_number("11111111111", "01952411591", "Grameen Phone");
	a.insert_mobile_number("11111111111", "01952411101", "Grameen Phone");
	a.insert_mobile_number("11111111111", "01952411111", "Grameen Phone");
	a.insert_mobile_number("11111111111", "01952411121", "Grameen Phone");
	a.insert_mobile_number("11111111111", "01952411131", "Grameen Phone");
	a.insert_mobile_number("11111111111", "01952411141", "Grameen Phone");
	a.insert_mobile_number("11111111111", "01952411151", "Grameen Phone");
	a.insert_mobile_number("11111111111", "01952411161", "Grameen Phone");
	a.insert_mobile_number("11111111111", "01952411171", "Grameen Phone");

	cout<<endl<<endl<<"By removing last number deleting the existing customer from list-> " << endl;
	cout << "Removing a mobile number from a customer who have only one number: " << endl;
	a.remove_mobile_number("01752411518");
    a.print();

	getchar();
	return 0;

}