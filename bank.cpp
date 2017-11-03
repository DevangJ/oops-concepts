#include <iostream>
#include <stdlib.h>

const int N = 100;

using namespace std;
class bank
{
	char name[20];
	int acc_no;
	char type[20];
	float balance;
    public:
	void indata();
	void deposit(float);
	void withdraw(float );
	void outdata(int);
	int ret_acc_no()
	{
		return acc_no;
	} 
};

void bank::indata()
{
	cout<<"Enter Name\n";
	cin>>name;
        cout<<"Enter Account number\n";
	cin>>acc_no;
	cout<<"Enter Account type\n";
	cin>>type;
	cout<<"Enter Balance\n";
	cin>>balance;
}

void bank::deposit(float amount)
{
	cout<<"Old balance: "<<balance<<endl;
	balance += amount;
	cout<<"New balance: "<<balance<<endl;
}

void bank::withdraw(float amount)
{
	if(balance >= amount)
	{
		cout<<"Old balance: "<<balance<<endl;
		balance -= amount;
		cout<<"New balance: "<<balance<<endl;
	}
	else
		cout<<"Insufficient funds"<<endl;
}

void bank::outdata(int key)
{
	if(key == acc_no)
	{
		cout<<"Name: "<<name<<endl
		<<"Balance: "<<balance<<endl;
	}
}

/*********************************************/
void add_choice(bank customer[], int n)
{
	customer[n - 1].indata();
}

void dep_choice(bank customer[], int n)
{
	int key, i;
	float amount;
	cout<<"Enter account number you want to deposit into"<<endl;
        cin>>key;
        for(i = 0; i < n; i ++)
        {
        	if(key == customer[i].ret_acc_no())
                {
			cout<<"Enter amount you want to deposit"<<endl;
		        cin>>amount;
                	customer[i].deposit(amount);
                        break;
                }
        }
	if(i == n)
		cout<<"Invalid account number"<<endl;
}

void with_choice(bank customer[], int n)
{
	int key, i;
	float amount;
	cout<<"Enter account number you want to withdraw from"<<endl;
	cin>>key;
	for(i = 0; i < n; i ++)
	{
		if(key == customer[i].ret_acc_no())
		{
			cout<<"Enter amount you want to withdraw"<<endl;
        		cin>>amount;
			customer[i].withdraw(amount);
			break;
		}
	}
	if(i == n)
		cout<<"Invalid account number"<<endl;
}

void det_choice(bank customer[], int n)
{
	int key, i;
	cout<<"Enter account you want details of"<<endl;
        cin>>key;
        for(i = 0; i < n; i ++)
        	customer[i].outdata(key);
}


int main()
{
	int n = 2, i, s;
	bank customer[N];
	int key, choice = 100;
	float amount;
	system("clear");
	cout<<"Input details of "<<n<<"  customers"<<endl;
	for(i = 0; i < n; i ++)
	{
		cout<<"Customer "<<i + 1<<endl;
		customer[i].indata();
	}
	while(choice)
	{
		system("clear");
        	cout<<"Enter your choice"<<endl
        	<<"1. Add customer"<<endl
        	<<"2. Deposit amount"<<endl
        	<<"3. Withdraw amount"<<endl
        	<<"4. Show details"<<endl
        	<<"5. Exit program"<<endl;
		cin>>choice;
		switch(choice)
		{
		case 1:
			cout<<"Enter the number of customers you want to add\n;
			cin>>s;
			for(i = n; i < s + n; i ++)
				add_choice(customer, i);
			n += s;
		break;
		case 2:
			dep_choice(customer, n);
		break;
		case 3:
			with_choice(customer, n);
		break;
		case 4:
			det_choice(customer, n);
		break;
		case 5:
			exit(0);
		break;
		default:
			cout<<"Invalid input"<<endl;
		break;
		}
		cout<<"Enter any non zero value to rerun the program"<<endl;
		cin>>choice;
	}
	return 0;
}
