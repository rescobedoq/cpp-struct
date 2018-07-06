#include <iostream>
using namespace std;

struct Employee
{
	int Id;
	char Name[25];
	int Age;
	long Salary;
};

/* Function Returning Structure */
Employee Input();            //Statement   1

int main(int argc, char *argv[]) {
	
	Employee Emp;
	
	Emp = Input();
	
	cout << "\n\nEmployee Id : " << Emp.Id;
	cout << "\nEmployee Name : " << Emp.Name;
	cout << "\nEmployee Age : " << Emp.Age;
	cout << "\nEmployee Salary : " << Emp.Salary;
		
	return 0;
}

/* Function Returning Structure */
Employee Input()
{
	Employee E;
	
	cout << "\nEnter Employee Id : ";
	cin >> E.Id;
	
	cout << "\nEnter Employee Name : ";
	cin >> E.Name;
	
	cout << "\nEnter Employee Age : ";
	cin >> E.Age;
	
	cout << "\nEnter Employee Salary : ";
	cin >> E.Salary;
	
	return E;             //Statement   2
}

