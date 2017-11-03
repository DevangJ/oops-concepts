#include <iostream>
#define MAX_SIZE 5
using namespace std;

class queue
{
	int a[MAX_SIZE];
	int f, r;
	public:
	queue()
	{
		f = 0;
		r = -1;
	}
	void enqueue();
	void dequeue();
	void outdata();
};

void queue::enqueue()
{
	if(r < MAX_SIZE - 1)
	{
		int item;
		cout<<"Enter item to enqueue\n";
		cin>>item;
		a[++r] = item;
	}
	else
		cout<<"Queue is full\n";
}

void queue::dequeue()
{
	int item;
	if(f > r)
	{
		cout<<"Queue is empty\n";
	}
	else
	{
		item = a[f++];
		cout<<"Popped element is "<<item<<endl;
		if(f == MAX_SIZE && r == MAX_SIZE - 1)
		{
			f = 0;
			r = -1;
		}
	}
}

void queue::outdata()
{
	if(f > r)
		cout<<"Queue is empty\n";
	else
	{
		cout<<"Contents of queue are\n";
		for(int i = f; i <= r; i ++)
			cout<<a[i]<<' ';
		cout<<endl;
	}
}

int main()
{
	int item, choice = 1;
	queue q;
	while(choice)
	{
		cout<<"enqueue = 1, dequeue = 2, display = 3\n";
		cin>>choice;
		switch(choice)
		{
		case 1:
			q.enqueue();
		break;	
		case 2:
			q.dequeue();
		break;
		case 3:
			q.outdata();
		break;
		default:
			choice = 0;
		}
	}
	return 0;
}
				
