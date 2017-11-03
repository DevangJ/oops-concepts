#include <iostream>
using namespace std;

struct node
{
	int item;
	node *link;
};

class list
{
	node *first;
	public:
	list()
	{
		first = NULL;
	}
	void ins_front(int item);
	int del_front();
	void display();
	bool ret_first()
	{
		if(first == NULL)
			return 0;
		return 1;
	}
};

void list::ins_front(int item)
{
	node *temp = new node;
	temp->item = item;
	temp->link = first;
	first = temp;
}

int list::del_front()
{
	int item;
	node *temp = first;
	first = first->link;
	item = temp->item;
	delete temp;
	return item;
}

void list::display()
{
	if(ret_first())
	{
		cout<<"List is ";
		node *cur = first;
		while(cur != NULL)
		{
			cout<<cur->item<<" ";
			cur = cur->link;
		}
		cout<<endl;
	}
	else
		cout<<"List is empty\n";
}

int main()
{
	list list1;
	int choice = 1, item;
	while(choice)
	{
		cout<<"1. Insert front\n2. Delete front\n3. Display\n";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"Enter item to enter\n";
				cin>>item;
				list1.ins_front(item);
				list1.display();
			break;
			case 2:	
				if(list1.ret_first())
				{
					cout<<"Deleted element is "<<list1.del_front()<<endl;
					list1.display();
				}
				else
					cout<<"List is empty\n";
			break;
			case 3:
				list1.display();
			break;
			default:
				choice = 0;
		}
	}
	return 0;

}
