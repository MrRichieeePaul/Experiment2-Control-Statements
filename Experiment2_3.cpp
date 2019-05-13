#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main ()
{
	int x,y;
	double z;
	z=2.5;
	cout << "Enter x and y values separated by a space: ";
	cin >> x >> y;
	switch (x)
	{
		case 1:	
			if(y>1 && y<5)
			{
			cout << setw(10) << setprecision(2);
			cout << "V= " << x*y*z;
			}
			else if(y>=5)
			{
			cout << setw(10) << setprecision(2);
			cout << "V= " << x+y/z;
			}
			else
			{
			cout << setw(10) << setprecision(2);
			cout << "V= " << x+y+z;	
			}
			break;
		case 2:
			if(y<=5)
			{
			cout << setw(10) << setprecision(2);
			cout << "V= " << abs((x-y)/z);
			}
			else if(y>5)
			{
			cout << setw(10) << setprecision(2);
			cout << "V= " << x-sqrt(y + z);
			}
			else
			{
			cout << setw(10) << setprecision(2);
			cout << "V= " << x+y+z;; 	
			} 
			break;
		default:
			cout << setw(10) << setprecision(2);
			cout << "V= " << x+y+z;;	
	}
	return 0;
}
