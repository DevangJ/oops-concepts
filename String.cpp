#include <iostream>
using namespace std;

class String
{
	char data[100];
	public:
	String(void)
	{
		data[0] = '\0';
	}
	String(const char temp[])
	{
		int j = 0;
		for(int i = 0; temp[i] != '\0'; i++) 
			data[j++] = temp[i];
		data[j] = '\0';
	}
	String(String &s1, String &s2)
	{
		int j = 0;
		for(int i = 0; s1.data[i] != '\0'; i ++)
			data[j++] = s1.data[i];
		data[j++] = ' ';
		for(int i = 0; s2.data[i] != '\0'; i ++)
			data[j++] = s2.data[i];
		data[j] = '\0';
	}
	void outdata(void)
	{
		cout<<data<<endl;
	}
};

int main()
{
	String s1, s2("Good Luck"), s3("Anubhav");
	String s4(s2, s3);
	s1.outdata();
	s2.outdata();
	s3.outdata();
	s4.outdata();
	return 0;
}
