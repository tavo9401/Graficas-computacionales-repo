#pragma once
#include<string>

class Employee
{
public:
	Employee(int id, std::string firstName, std::string lastName, int salary);

	int GetID();
	std::string GetFirstName();
	std::string GetLastName();
	std::string GetName();
	int GetSalary();
	int GetAnnualSalary();
	std::string Print();
	

	void SetSalary(int salary);
	int RaiseSalary(int percent);

private:
	int _id;
	std::string _firstName;
	std::string _lastName;
	int _salary;
	std::string _name = _firstName + _lastName;
	int _percent = _salary + 25;
};