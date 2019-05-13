#include <iostream>
using namespace std;
int main()
{
	int a,b,n;
	b=0;
	cout << "Enter a number: ";
	cin >> n;	
	if (n>0)
	{
	for (a=1;a<=n;a++)
	{
		b=b+a;
	}
	cout << "Sum of all whole numbers from 1 up to the number entered: " << b;
    }
	else
	cout << "Thank you!"; 
	return 0;
}
