#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a, b, c = 0;
	cout<<"Enter number to check"<<endl;
	cin>>a;
	b = a;
	while(a)
	{
		c += pow(a%10,3);
		a/= 10;
	}
	if(c == b)
	cout<<"Number is an armstrong number"<<endl;
	else
	cout<<"Number is not an armstrong number"<<endl;
	return 0;
}
