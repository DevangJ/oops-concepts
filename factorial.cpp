#include <iostream>
using namespace std;
int main()
{
	int a;
	unsigned long int f = 1;
	cout<<"Enter a number"<<endl;
	cin>>a;
	while(a)
		f *= a--;
	cout<<"Factorial of the guiven number is "<<f<<endl;
	return 0;
}
