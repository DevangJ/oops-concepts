#include <iostream>
using namespace std;

class matrix
{
	int a[10][10];
	int r, c;
	public:
	bool operator == (matrix s1);
	matrix operator +(matrix s1);
	matrix operator -(matrix s1);
	friend ostream & operator << (ostream &out, matrix &s1);
	void indata();
};

bool matrix :: operator == (matrix s1)
{
	if(r == s1.r && c == s1.c)
		return 1;
	return 0;
}

matrix matrix :: operator +(matrix s1)
{
	matrix temp;
	temp.r = this->r;
	temp.c = this->c;
	for(int i = 0; i < this->r; i ++)
		for(int j = 0; j < this->c; j ++)
			temp.a[i][j] = this->a[i][j] + s1.a[i][j];
	return temp;
}

matrix matrix :: operator -(matrix s1)
{
	matrix temp;
	temp.r = this->r;
	temp.c = this->c;
	for(int i = 0; i < this->r; i ++)
        	for(int j = 0; j < this->c; j ++)
                	temp.a[i][j] = this->a[i][j] - s1.a[i][j];
        return temp;
}

ostream & operator << (ostream &out, matrix &s1)
{
	for(int i = 0; i < s1.r; i ++)
	{
		for(int j = 0; j < s1.c; j ++)
		{
			out<<s1.a[i][j]<<' ';
		}
		out<<endl;
	}
	return out;
}

void matrix :: indata()
{
	cout<<"Enter number of rows: ";
	cin>>r;
	cout<<"Enter number of columns: ";
	cin>>c;
	cout<<"Enter matrix of "<<r<<" rows and "<<c<<" columns\n";
	for(int i = 0; i < r; i ++)
		for(int j = 0; j < c; j ++)
			cin>>a[i][j];
}

int main()
{
	matrix m1, m2, m3, m4;
	cout<<"For first matrix\n";
	m1.indata();
	cout<<"For second matrix\n";
	m2.indata();
	if(m1 == m2)
	{
		m3 = m1 + m2;
		m4 = m1 - m2;
		cout<<m1<<endl;
		cout<<m2<<endl;
		cout<<m3<<endl<<m4;
	}
	else
		cout<<"Matrices are not operable\n";
	return 0;
}
