#include <iostream>
#include <math.h>

using namespace std;

double divide(int a, int b)
{
        try
        {
                if(b==0)
                        throw -1;
      		double x = a;
		x /= b;
	        return x;
        }
        catch(int x)
        {
                cout<<"Error: Divisor is 0\n";
        }
}


void indata(int *a, int *b)
{
	try
	{
		double x, y;
		cout<<"Enter two integer numbers\n";
		cin>>x>>y;
		if(x > floor(x) || y > floor(y))
			throw -1;
		*a = (int)x;
		*b = (int)y;
		cout<<"a/b = "<< divide(*a, *b);		
	}
	catch(int x)
	{
		cout<<"Error: Wrong type entered\n";
	}
	
}

int main()
{
	int lel;
	int a, b;
	return 0;
}
