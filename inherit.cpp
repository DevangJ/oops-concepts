#include <iostream>
using namespace std;
class student
{
	protected:
	char usn[11];
	char name[20];
	int age;
	public:		
	student()
	{	
		usn[0] = name[0] = '\0';
		age = 0;
	} 
};

class ugstudent:public student
{
	int sem;
	float fees, stipend;
	public:
	ugstudent()
	{
		sem = fees = stipend = 0;
	}
	friend float avg_age(ugstudent u[], int n);
	void indata();
	void outdata();	
};
class pgstudent:public student
{
	int sem;
	float fees, stipend;
	public:
	pgstudent()
	{
		sem = fees = stipend = 0;
	}
	friend float avg_age(pgstudent p[], int n);
	void indata();
	void outdata();
};

void ugstudent::indata()
{
	cout<<"USN: ";
	cin>>usn;
        cout<<"Name: ";
	cin>>name;
        cout<<"Age: ";
	cin>>age;
        cout<<"Sem: ";
	cin>>sem;
        cout<<"Fees: ";
	cin>>fees;
        cout<<"Stipend: ";
	cin>>stipend;
}

void ugstudent::outdata()
{
	cout<<"USN: "<<usn<<endl
	<<"Name: "<<name<<endl
	<<"Age: "<<age<<endl
	<<"Sem: "<<sem<<endl
	<<"Fees: "<<fees<<endl
	<<"Stipend: "<<stipend<<endl;
}

float avg_age(ugstudent u[], int n)
{
	float avg = 0;
	for(int i = 0; i < n; i ++)
		avg += u[i].age;
	avg /= n;
	return avg;
}

void pgstudent::indata()
{
        cout<<"USN: ";
        cin>>usn;
        cout<<"Name: ";
        cin>>name;
        cout<<"Age: ";
        cin>>age;
        cout<<"Sem: ";
        cin>>sem;
        cout<<"Fees: ";
        cin>>fees;
        cout<<"Stipend: ";
        cin>>stipend;
}
void pgstudent::outdata()
{
	cout<<"USN: "<<usn<<endl
        <<"Name: "<<name<<endl
        <<"Age: "<<age<<endl
        <<"Sem: "<<sem<<endl
        <<"Fees: "<<fees<<endl
        <<"Stipend: "<<stipend<<endl;
}

float avg_age(pgstudent p[], int n)
{
        float avg = 0;
        for(int i = 0; i < n; i ++)
                avg += p[i].age;
        avg /= n;
        return avg;
}

int main()
{
	const int n = 2;
	ugstudent u[n];
	pgstudent p[n];
	cout<<"Data for ug students"<<endl;
	for(int i = 0; i < n; i ++)
		u[i].indata();
	cout<<"Data for pg students"<<endl;
        for(int i = 0; i < n; i ++)
                p[i].indata();
	cout<<"Avg age for ug is "<<avg_age(u, n)<<endl;
	cout<<"Avg age for pg is "<<avg_age(p, n)<<endl;
	cout<<"Data for ug students"<<endl;
	for(int i = 0; i < n; i ++)
		u[i].outdata();
	cout<<"Data for pg students"<<endl;
	for(int i = 0; i < n; i ++)
		p[i].outdata();
	return 0;
}
