#include <iostream>
using namespace std;
class complex
{
	int x, y;
	public:
	void indata();
	void outdata();
	complex add(int a, complex s2);
	complex add(complex s1, complex s2);
};
void complex::indata()
{
	cout<<"x = ";
	cin>>x;
	cout<<"y = ";
	cin>>y;
}

void complex::outdata()
{
	cout<<"x = "<<x<<endl<<"y = "<<y<<endl;
}

complex complex::add(int a, complex s2)
{
	x = a + s2.x;
	y = s2.y;
}
/*complex complex::add(complex s1, complex s2)
{
        this->x = s1.x + s2.x;
        this->y = s1.y + s2.y;
}*/

int main()
{
	int x;
	complex a, b, c, d;
	cout<<"int = ";
	cin>>x;
//	a.indata();
	b.indata();
//	c.add(a, b);
	d.add(x, b);
//	c.outdata();
	d.outdata();
	return 0;
}
