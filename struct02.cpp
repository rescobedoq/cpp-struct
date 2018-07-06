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
	
	/*
	
	structure-name obj;
	
	*/
	
	/* Example for creating object & accessing structure members */
	
	Employee E;             //Statement  1
	
	cout << "\nEnter Employee Id : ";
	cin >> E.Id;
	
	cout << "\nEnter Employee Name : ";
	cin >> E.Name;
	
	cout << "\nEnter Employee Age : ";
	cin >> E.Age;
	
	cout << "\nEnter Employee Salary : ";
	cin >> E.Salary;
	
	cout << "\n\nEmployee Id : " << E.Id;
	cout << "\nEmployee Name : " << E.Name;
	cout << "\nEmployee Age : " << E.Age;
	cout << "\nEmployee Salary : " << E.Salary;
	
	return 0;
}

