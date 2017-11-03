#include <iostream>
using namespace std;
int main()
{
	int A[10], n, key, count = 0;
	cout<<"Enter number of elements( < 10 )"<<endl;
	cin>>n;
	cout<<"Enter "<<n<<" numbers"<<endl;
	for(int i = 0; i < n; i++)
		cin>>A[i];
	cout<<"Enter number to count"<<endl;
	cin>>key;
	for(int i = 0; i < n; i ++)
		if(key == A[i])
			count++;
	cout<<"Number of occurences is "<<count<<endl;
	return 0;
}

