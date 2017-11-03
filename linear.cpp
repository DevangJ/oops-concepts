#include <iostream>
using namespace std;
int main()
{
	int A[10], n, key, check = 0; 
	cout<<"Enter number of elements (<10)"<<endl;
	cin>>n;
	cout<<"Enter "<<n<<" elements"<<endl;
	for(int i = 0; i < n; i ++)
		cin>>A[i];
	cout<<"Enter element to search for"<<endl;
	cin>>key;
	for(int i = 0; i < n; i ++)
	{
		if(A[i] == key)
		{
			check = 1;
			break;
		}
	}
	if(check == 1)
		cout<<"Element found"<<endl;
	else
		cout<<"Element not found"<<endl;
	return 0;
}
