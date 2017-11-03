#include <iostream>
using namespace std;

class complex
{
	int x;
	float y;
	public:
	complex()
	{
		x = 0;
		y = 0.0;
	}
	void indata();
	void outdata();
	friend complex add(int, complex);
	friend complex add(complex, complex);
};

void complex::indata()
{
	cout<<"Enter the real part"<<endl;
	cin>>x;
	cout<<"Enter the imaginary part"<<endl;
	cin>>y;
}

void complex::outdata()
{
	cout<<x<<" + (i * "<<y<<")"<<endl;
}

complex add(int a, complex s1)
{
	complex temp;
	temp.x = a + s1.x;
	temp.y = s1.y;
	return temp;
}

complex add(complex s1, complex s2)
{
	complex temp;
	temp.x = s1.x + s2.x;
	temp.y = s1.y + s2.y;
	return temp;
}

int main()
{
	complex a, b, c, d;
	int z;
	a.indata();
	b.indata();
	cout<<"Enter real number"<<endl;
	cin>>z;
	c = add(z, b);
	d = add(a, b);
	a.outdata();
	b.outdata();
	c.outdata();
	d.outdata();
	return 0;
}
