#include <iostream>
#include <cstring>
#include "Exercise4.h"
using namespace std;

Department::Department()

{
	cout << "Department Constructor is Called." << endl;
}

void Department::setName(char depname[100])
{
	if (strlen(depname) <= 100)
		strcpy_s(Name, depname);
}

void Department::setCode(int depcode)
{
	Code = depcode;
}

int Department :: getcode()
{
	return Code;
}

char* Department::getName()
{
	return Name;
}


void Department::ReadData(char depname[100], int depcode)
{
	setName(depname);
	setCode(depcode);
}

void Department::PrintInfo()
{
	cout << Name << endl;
	cout << Code << endl;
}
Department :: ~Department()
{
	cout << "Department Destructor is Called." << endl;
}

Employee:: Employee()
{
	cout << "Employee Constructor is Called." << endl;
}

void Employee::setName(char * ename)
{
	if (Name != NULL)
	{
		delete[] Name;
		Name = NULL;
	}
	int length = strlen(ename)+1;
	Name = new char[length];
	strcpy_s(Name, length, ename);
}

void Employee::setAge(int eage)
{
	Age = eage;
}

int Employee:: getAge()
{
	return Age;
}

char* Employee::getName()
{
	return Name;
}

void Employee :: Join(Department * edep)
{
	dep = edep;
}

void Employee::Leave()
{
	if (dep != NULL)
		dep = NULL;
}

void Employee::ReadData(char *eName, int eage, double sal)
{
	setName(eName);
	Age = eage;
	Salary = sal;
}
void Employee::PrintInfo()
{
	if (Name != NULL)
	{
		cout << "Employee Name: " << Name << endl;
	}

	cout << "Age:" << Age << endl;
	if (dep -> getName() != NULL)
	cout << "Department: " << dep->getName() << endl;
	cout << "Salary: " << Salary << endl;
}
Employee :: ~Employee()
{
	cout << "Employee Destructor is Called." << endl;
	delete[] Name;
}