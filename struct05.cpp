#include <iostream>
using namespace std;

/* Syntax for array within structure */
/*
	struct structure-name
	{
		datatype var1;                    // normal variable
		datatype array [size];          // array variable
		- - - - - - - - - -
			- - - - - - - - - -
			datatype varN;
	};

	structure-name obj;
*/

struct Student
{
	int Roll;
	char Name[25];
	int Marks[3];              //Statement 1 : array of marks
	int Total;
	float Avg;
};
	
int main(int argc, char *argv[]) {
	
	/*Example for array within structure */
	
	int i;
	Student S;
	
	cout << "\n\nEnter Student Roll : ";
	cin >> S.Roll;
	
	cout << "\n\nEnter Student Name : ";
	cin >> S.Name;
	
	S.Total = 0;
	
	for(i=0;i<3;i++)
	{
		cout << "\n\nEnter Marks " << i+1 << " : ";
		cin >> S.Marks[i];
		
		S.Total = S.Total + S.Marks[i];
	}
	
	S.Avg = S.Total / 3;
	
	cout << "\nRoll : " << S.Roll;
	cout << "\nName : " << S.Name;
	cout << "\nTotal : " << S.Total;
	cout << "\nAverage : " << S.Avg;
	
	return 0;
}

