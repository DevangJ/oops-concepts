#include <iostream>
using namespace std;

class complex
{
	int x;
	float y;
	public:
/*	complex()
	{
		x = 0; 
		y = 0.0;
	}*/
	void indata();
	void outdata();
	void change_real(int a)
	{
		x += a;
	}
	int ret_real()
	{
		return x;
	}	
	void change_img(float b)
	{
		y += b;
	}
	float ret_img()
	{
		return y;
	}
};

complex add(int, complex);
complex add(complex, complex);

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

complex add(int a, complex s2)
{
	complex n;
	n.change_real(a + s2.ret_real());
	n.change_img(s2.ret_img());
	return  n;
}

complex add(complex s1, complex s2)
{
	complex n;
	n.change_real(s1.ret_real() + s2.ret_real());
        n.change_img(s1.ret_img() + s2.ret_img());
	return n;
}

int main()
{
	complex a, b, c, d;
	int z;
	a.indata();
	b.indata();
	cout<<"Enter the real part to add"<<endl;
	cin>>z;
	c = add(z, b);
	d = add(a, b);
	a.outdata();
	b.outdata();
	c.outdata();
	d.outdata();
	return 0;
}
