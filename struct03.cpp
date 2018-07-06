#include <iostream>
using namespace std;

struct Employee
{
	int Id;
	char Name[25];
	int Age;
	long Salary;
};

int main(int argc, char *argv[]) {
	
	/* Example for declaring & initializing structure at same time */
	
	Employee E = {2,"Suresh",35,35000};
	
	cout << "\n\nEmployee Id : " << E.Id;
	cout << "\nEmployee Name : " << E.Name;
	cout << "\nEmployee Age : " << E.Age;
	cout << "\nEmployee Salary : " << E.Salary;
	
	
	return 0;
}

