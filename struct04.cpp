#include <iostream>
using namespace std;

/* Syntax for declaring structure array */
/*
	struct structure-name
	{
	datatype var1;
	datatype var2;
	- - - - - - - - - -
	- - - - - - - - - -
	datatype varN;
	};

	structure-name obj [ size ];
*/

struct Employee
{
	int Id;
	char Name[25];
	int Age;
	long Salary;
};

int main(int argc, char *argv[]) {
	
	/* Example for declaring structure array */
	
	int i;
	Employee Emp[ 3 ];         //Statement   1
	
	for(i=0;i<3;i++)
	{
		
		cout << "\nEnter details of " << i+1 << " Employee";
		
		cout << "\n\tEnter Employee Id : ";
		cin >> Emp[i].Id;
		
		cout << "\n\tEnter Employee Name : ";
		cin >> Emp[i].Name;
		
		cout << "\n\tEnter Employee Age : ";
		cin >> Emp[i].Age;
		
		cout << "\n\tEnter Employee Salary : ";
		cin >> Emp[i].Salary;
	}
	
	cout << "\nDetails of Employees";
	for(i=0;i<3;i++)
		cout << "\n"<< Emp[i].Id <<"\t"<< Emp[i].Name <<"\t"<< Emp[i].Age <<"\t"<< Emp[i].Salary;
	
	return 0;
}

