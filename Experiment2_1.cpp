#include <iostream>
using namespace std;
int main ()
{
	char a;
	int b; 
	cout << "Enter package and total number of hours used separated by a space: ";
	cin >> a >> b;
	switch (a)
	{
		case 'A':
			if(b<=710)
			cout << "Total Amount: " << 995;
			else if (b>710)
			cout << "Total Amount: " << (b-710)*20 + 995;
			break;
		case 'B':
			if(b<=700)
			cout << "Total Amount: " << 1495;
			else if(b>700)
			cout << "Total Amount: " << (b-700)*10 + 1495;
			break; 
		case 'C':
			cout << "Total Amount: " << 1995;
			break;
		default:
			cout << "Invalid Input";
	}
	return 0;
}
