#include <iostream>
using namespace std;
int main()
{
	int a,b,c,x;
	cout<<"Enter three numbers"<<endl;
	cin>>a>>b>>c;
	if(a < b)
		if(a < c)
			cout<<a<<" is the lowest"<<endl;
		else
			cout<<c<<" is the lowest"<<endl;
	else 
		if(b < c)
			cout<<b<<" is the lowest"<<endl;
		else
			cout<<c<<" is the lowest"<<endl;
	//x = (a < b) ? ((a < c) ? 1 : 3) :( (b < c) ? 2 : 3);
	switch(x):
	{
		case 1:
			cout<<a<<" is the lowest"<<endl;
		break;
		case 2:
			cout<<b<<" is the lowest"<<endl;
		break;
		case 3:
			cout<<c<<" is the lowest"<<endl;
		break;
	} 
	return 0; 
}
