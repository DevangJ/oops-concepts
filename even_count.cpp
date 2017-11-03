#include <iostream>
using namespace std;
int main()
{
	int A[10], n, count = 0;
	cout<<"Enter number of elements(< 10)"<<endl;
	cin>>n;
	cout<<"Enter "<<n<<" elements"<<endl;
	for(int i = 0; i < n; i ++)
	{
		cin>>A[i];
		if(A[i] % 2 == 0)
			count++;
	}
	cout<<"Number of even numbers in array is "<<count<<endl;
	return 0;
}
