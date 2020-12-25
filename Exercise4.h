#pragma once
using namespace std;

class Department
{
private:

	char Name[100];
	int Code;

public:

		Department();
		void setName(char depname[100]);
		void setCode(int depcode);
		void ReadData(char depname[100], int depcode);
		void PrintInfo();
		int getcode();
		char* getName();
		~Department();

};

class Employee
{
private:
	char* Name;
	int Age;
	double Salary;
	Department * dep;
public:
	Employee();
	void Join(Department * edep);
	void Leave();
	void ReadData(char * eName, int eage, double sal);
	void PrintInfo();
	void setName(char * ename);
	char* getName();
	int getAge();
	void setAge(int eAge);
	int GetDepCode();
	~Employee();
};