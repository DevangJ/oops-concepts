#include <iostream>
using namespace std;
struct node
{
	node *llink, *rlink;
	int item;
};

class list
{
	node *first;
	static int count;
	public:
	list()
	{
		first = NULL;
	}
	void ins_spec(int item, int pos);
	int del_spec(int pos);
	void display();
	bool ret_first()
	{
		if(first == NULL)
			return 0;
		return 1;
	}
};

int list::count = 0;

void list::ins_spec(int item, int pos)
{
	count++;
	node *temp = new node;
	temp->item = item;
	if(ret_first())
	{
		node *cur = first;
		while(cur->rlink != NULL && pos)
		{
			cur = cur->rlink;
			pos--;
		}
		temp->rlink = cur->rlink;
		cur->rlink = temp;
		temp->llink = cur;
	}
	else
	{
		temp->llink = temp->rlink = NULL;
		first = temp;
	}
}


int list::del_spec(int pos)
{
	if(pos > count)
		cout<<"Not enough elements\n";
	else if(first->rlink == NULL)
	{
		int item = first->item;
		delete first;
		return item;
	}
		
	else
	{
		node *cur = first, *prev = first, *next = first;
		while(next != NULL && pos)
		{
			
			prev = cur;
			cur = next;
			next = next->rlink;
			pos--;
		}
		prev->rlink = cur->rlink;
		if(next != NULL)
			next->llink = cur->llink;
		first = next;
		int item = cur->item;
		delete cur;	
		return item;
	}
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
			cur = cur->rlink;
		}
		cout<<endl;
	}
	else
		cout<<"List is empty\n";
}

int main()
{
	list list1;
	int choice = 1, item, pos;
	while(choice)
	{
		cout<<"1. Insert\n2. Delete\n3. Display\n";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"Enter element\n";
				cin>>item;
				cout<<"Enter position\n";
				cin>>pos;
				list1.ins_spec(item, pos);
			break;
			case 2:
				if(list1.ret_first())
				{
					cout<<"Enter position\n";
					cin>>pos;
					cout<<"Deleted element is "<<list1.del_spec(pos)<<endl;
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
