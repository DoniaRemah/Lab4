#include <iostream>
# include "Exercise4.h"
using namespace std;

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
	E1.Leave();
	E1.PrintInfo();
	E2.PrintInfo();
	E3.PrintInfo();
	return 0;

}