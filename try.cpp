#include <iostream>
#include <stdlib.h>
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
        exit(0);
    }
}


void indata(int *a, int *b)
{
	try
	{
		double x, y;
		int choice = 1;
		while(choice)
		{
		    cout<<"Enter two integer numbers\n";
            cin>>x>>y;
            if(x > floor(x) || y > floor(y))
                throw -1;
            *a = (int)x;
            *b = (int)y;
            cout<<"a/b = "<< divide(*a, *b)<<endl;
            cout<<"To exit enter 0, else enter any other number\n";
            cin>>choice;
		}
	}
	catch(int x)
	{
		cout<<"Error: Wrong type entered\n";
		exit(0);
	}
}

int main()
{
	int a, b;
	indata(&a, &b);
	return 0;
}
