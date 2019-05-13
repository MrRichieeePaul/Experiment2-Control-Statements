#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout << "Enter number of gallons used and the amount of unpaid balance separated by a space:";
	cin >> a >> b;
	if (b==0)
	cout << "Water Bill: " << a*1.10 + 35;
	else if (b>0)
	cout << "Water Bill: " << a*1.10 + b + 55;
	else
	cout << "Invalid Input";
	return 0;
}
