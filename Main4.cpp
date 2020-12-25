#include <iostream>
# include "Exercise4.h"
using namespace std;

int CountEmployees(int DepCode,Employee * earr[],int N)
{
	int count = 0;
	for (int i=0;i<N;i++)
	{
		if (DepCode == earr[i]->GetDepCode())
		{
			count++;
		}
	}
	return count;
}

int main ()
{
	char n[] = "Thomas Edison";
	char n2[] = "Ola Ahmed";
	char n3[] = "Donia Remah";
	Employee E1;
	E1.ReadData(n, 20, 5000);
	Employee E2;
	E2.ReadData(n2, 30, 34567);
	Employee E3;
	E3.ReadData(n3, 25, 57389);
	Department D1;
	char d[] = "Sales";
	char d2[] = "IT";
	D1.ReadData(d, 10);
	Department D2;
	D2.ReadData(d2,20);
	E1.Join(& D1);
	E2.Join(& D2);
	E3.Join(& D1);
	E1.PrintInfo();
	E2.PrintInfo();
	E3.PrintInfo();
	Employee* Earr[3];
	Earr[0] = &E1;
	Earr[1] = &E2;
	Earr[2] = &E3;
	cout << "Count Staff of Department 10: "<< CountEmployees(10, Earr,3) << endl;
	cout << "Count Staff of Department 20: " << CountEmployees(30, Earr, 3) << endl;
	E1.Leave();
	cout << "Count Staff of Department 10: " << CountEmployees(10, Earr, 3) << endl;
	E1.PrintInfo();
	E2.PrintInfo();
	E3.PrintInfo();
	return 0;

}