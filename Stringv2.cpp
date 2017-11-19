#include <iostream>
#include <string.h>
using namespace std;
class String
{
	char a[200];
public:
	String(void)
	{
		strcpy(a, "");
	}
	String(const char temp[])
	{
		strcpy(a, temp);
	}
	String(String &s1,String &s2)
	{
		strcpy(a, s1.a);
		strcat(a, s2.a);
	}
	String operator + (String &s1)
	{
		strcat(a, s1.a);
		return *this;
	}
	friend ostream & operator << (ostream &out, String &s1);
	void outdata()
	{
		cout<<a<<endl;
	}
};

ostream & operator << (ostream &out, String &s1)
{
	out<<s1.a;
	return out;
}

int main()
{
	String s1, s2("Good Luck"), s3("Good Bye");
	String s4(s2, s3);
	String s5, s6;
	s5 = s5 + s2;
	s6 = s5 + s4;
	cout<<s1<<endl<<s2<<endl<<s3<<endl<<s4<<endl<<s5<<endl<<s6<<endl;
	return 0;
}
