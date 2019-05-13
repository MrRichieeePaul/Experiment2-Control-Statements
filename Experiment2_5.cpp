#include<iostream>
using namespace std;
int main()
{
   int a,b,c,d,n;
   b=0;
   c=1;
   n=22;
   cout << "0,1, and the next 20 Fibonacci numbers: ";
   for (a=0;a<n;a++)
   {
      if (a<=1)
         d=a;
      else
      {
         d=b+c;
         b=c;
         c=d;
      }
      cout << d << ",";
   }
 
   return 0;
}
