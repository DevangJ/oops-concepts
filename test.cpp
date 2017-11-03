#include <iostream>
int add(int a, int b)
{
	return a+b;
}

float add(int a, int b)
{
	return a+b;
}
int main()
{
	int a;
	float b;
	b = (float)add(1, 1);
	a = (int)add(2,2);
	cout<<a<<endl<<b;
	return 0;
}
