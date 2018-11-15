#pragma once
#include<string>
using namespace std;
class Person
{
public:
	Person();
	Person(string, string, string, string, string, string, string, string, float, float, string, string);
	~Person();
	void set_name(string);
	void set_father_name(string);
	void set_mother_name(string);
	void set_marital_status(string);
	void set_national_id(string);
	void set_spouse_name(string);	//if not married write not applicable. 
	void set_present_address(string);
	void set_permanent_address(string);
	void set_height(float);
	void set_weight(float);
	void set_eye_color(string);
	void set_hair_color(string);


	string get_name();
	string get_father_name();
	string get_mother_name();
	string get_marital_status();
	string get_national_id();
	string get_spouse_name();
	string get_present_address();
	string get_permanent_address();
	float get_height();
	float get_weight();
	string get_eye_color();
	string get_hair_color();

	void print_person();

protected:
	string name;
	string fatherName;
	string motherName;
	string maritalStatus;
	string nationalId;
	string spouseName;
	string presentAddress;
	string permanentAddress;
	float height;
	float weight;
	string eyeColor;
	string hairColor;



};

