#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// #Course_4_Solution_33
// Grade A,B,C,E,F.

int ReadNumberInRange(int From , int To )
{
	int Grade;
	do
	{
		cout << "Please enter a Grade between 0 and 100 ? " << endl;
		cin >> Grade;
	} while (Grade < From || Grade > To );

	return Grade;
}

char GetGradeLetter(int Grade)
{
	if (Grade >= 90)
		return 'A';
	else if (Grade >= 80)
		return 'B';
	else if (Grade >= 70)
		return 'C';
	else if (Grade >= 60)
		return 'D';
	else if (Grade >= 50)
		return 'E';
	else
		return 'F';

}

int main()
{
	cout << GetGradeLetter(ReadNumberInRange(0, 100)) << endl;
}
