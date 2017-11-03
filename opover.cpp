#include <iostream>
#define MAX_SIZE 10
using namespace std;
class stack
{
	int a[MAX_SIZE];
	int top;
public:
	stack(void)
	{
		top = -1;
	}
	stack operator + (int item)
	{
		if(top == MAX_SIZE - 1)
			cout<<"Stack is full\n";
		else
			a[++top] = item;
		return *this;
	}
	int ret_top()
	{
		return top;
	}
	void operator - (void)
	{
		if(top == -1)
			cout<<"Stack is empty\n";
		else
		cout<<"Popped element is "<<a[top--]<<endl;	
	}
	friend ostream & operator << (ostream & out, stack &s1);
};

ostream & operator << (ostream & out, stack &s1)
{
	out<<"contents of stack are\n";
	for(int i = 0; i <= s1.top; i ++)
		out << s1.a[i]<<' ';
	out<<endl;
	return out;
}

int main()
{
	stack s1;
	int x = 1, choice = 1;
	while(choice)
	{
		cout<<"push = 1, pop = 2, display = 3\n";
		cin>>choice;
		switch(choice)
		{
		case 1:
			if(s1.ret_top() == MAX_SIZE - 1)
				cout<<"Stack is full\n";
			else
			{
				cout<<"Enter element to push\n";
				cin>>x;
				s1 = s1 + x;
			}
			break;
		case 2:
			-s1;
			break;
		case 3:
			if(s1.ret_top() == -1)
				cout<<"Stack is empty\n";
			else
				cout<<s1;
			break;
		default:
			choice = 0;
		}
	}
	return 0;
}
