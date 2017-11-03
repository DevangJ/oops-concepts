#include <iostream>
#include <stdlib.h>
using namespace std;

class student
{
	char usn[11], name[20];
	float marks[3];
	float avg();
	void srt();
	public:
	void indata();
	void outdata();
};

void student::srt()
{
	int flag = 0;
	for(int i = 0; i < 3; i ++)
	{
		flag = 1;
		for(int j = 0; i < 3; j ++)
		{
			if(marks[j] < marks[j + 1])
			{
				marks[j] += marks[j + 1];
				marks[j + 1] = marks[j] - marks[j + 1];
				marks[j] -= marks[j + 1];
				flag = 0;
			}
		}
		if(flag == 1)
			break;
	}
}


void student::indata()
{
	cout<<"Enter the USN\n";
	cin>>usn;
	cout<<"Enter the Name\n";
	cin>>name;
	cout<<"Enter the marks of a subject procured in three tests\n";
	for(int i = 0; i < 3; i ++)
		cin>>marks[i];
	srt();
}

void student::outdata()
{
	cout<<"USN: "<<usn<<endl
	<<"Name: "<<name<<endl
	<<"Average Test score: "<<avg()<<endl;
}

float student::avg()
{
	float avg = 0;
	for(int i = 0; i < 2; i ++)
		avg += marks[i];
	avg /= 2;
	return avg;
}

int main()
{
	system("clear");
	int choice = 1, n = 0, m, i;
	student s[100];
	while(choice)
	{
		cout<<endl<<endl;
		cout<<"Enter the choie to execute"<<endl
		<<"1. Add student"<<endl
		<<"2. Print database"<<endl
		<<"Any other number to exit"<<endl;
		cin>>choice;
		system("clear");
		switch(choice)
		{
			case 1:
				cout<<"Enter number of students you want to add"<<endl;
				cin>>m;
				for(i = n; i < n + m; i ++)
					s[i].indata();
				n += m;
			break;
			case 2:
				if(n == 0)
				{
					cout<<"Database empty"<<endl;
					break;
				}
				for(i = 0; i < n; i ++)
				{	
					cout<<endl;
					s[i].outdata();
				}
			break;
			default:
				choice = 0;
		}
	}
	return 0;
}
