#include <iostream>
using namespace std;

struct Employee
{
	int Id;
	char Name[25];
	int Age;
	long Salary;
};

/* Passing Structure by Reference */
void Display(struct Employee*);
	
int main(int argc, char *argv[]) {
	
	Employee Emp = {1,"Kumar",29,45000};
	
	/* Example for passing structure object by reference */
	Display(&Emp);
	
	return 0;
}

void Display(struct Employee *E)
{
	cout << "\n\nEmployee Id : " << E->Id;
	cout << "\nEmployee Name : " << E->Name;
	cout << "\nEmployee Age : " << E->Age;
	cout << "\nEmployee Salary : " << E->Salary;
}

