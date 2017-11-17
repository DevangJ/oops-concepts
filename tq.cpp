#include <iostream>
using namespace std;
#define MAX 5

template <class T>
class queue
{
	T data[MAX];
	int front, rear;
public:
	queue()
	{
		front = rear = -1;
	}
	void inQueue(T item)
	{
		if(front == -1)
			front++;
		data[++rear] = item;
	}
	T deQueue()
	{
		if(front == -1 || front > rear)
		{
			cout << "Queue underflow.\n";
			return -1000;
		}
		else
			return data[front++];
	}
	void display()
	{
		if(front == -1 || front > rear)
			cout <<"Queue is empty.\n";
		else
		{
			for(int i = front; i <= rear; i++)
				cout << data[i] << " ";
			cout << "\n";
		}
	}
	bool full()
	{
		if(rear == MAX - 1)
			return true;
		else
			return false;
	}
};

int main()
{
	int choice = 1, item;
	queue <int>q;
	while(choice)
	{
		cout<<"1. Enqueue\n2. Dequeue\n3. Display\n";
      		cout << "Enter choice: ";
      		cin >> choice;
		switch (choice)
		{
        		case 1:
				if(q.full())
					cout<<"Queue overflow\n";
				else
					cout<<"Enter element\n";
					cin>>item;
					q.inQueue(item);
               		break;
        		case 2:
				item = q.deQueue();
				if(item != -1000)
					cout<<"Deleted element is "<<item<<endl;
	                break;
			case 3:
				q.display();
			break;
        		default: choice = 0;
      		}
    	}
	choice = 1;
	queue <double>p;
	while(choice)
        {
		cout<<"1. Enqueue\n2. Dequeue\n3. Display\n";
                cout << "Enter choice: ";
                cin >> choice;
                switch (choice)
                {
                        case 1:
                                if(p.full())
                                        cout<<"Queue overflow\n";
                                else
                                        cout<<"Enter element\n";
                                        cin>>item;
                                        p.inQueue(item);
                        break;
                        case 2:
                                item = p.deQueue();
                                if(item != -1000)
                                        cout<<"Deleted element is "<<item<<endl;
                        break;
                        case 3:
                                p.display();
                        break;
                        default: choice = 0;
                }
        }
    	return 0;
}
