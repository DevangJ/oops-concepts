#include <iostream>
using namespace std;
class temp
{
	float F, C;
	void calc();
public:
	void indata();
	void outdata();
};
void temp::calc()
{
	C = (F - 32) * 5 / 9;
}
void temp::indata()
{
	cout<<"Enter temperature in Fahrenheit"<<endl;
	cin>>F;
	calc();
}
void temp::outdata()
{
	cout<<"The temperature in Celcius is "<<C<<endl;
}
int main()
{
	temp t1;
	t1.indata();
	t1.outdata();
	return 0;
}
