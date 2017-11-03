#include <iostream>
using namespace std;
int main()
{
	int A[10], n, key, check = 0, b, l, m;
	cout<<"Enter number of elelments (<10)"<<endl;
	cin>>n;
	cout<<"Enter "<<n<<" elements"<<endl;
	for(int i = 0; i < n; i ++)
		cin>>A[i];
	cout<<"Enter element to search for"<<endl;
	cin>>key;
	l = n - 1;
	b = 0;
	while(b <= l)
	{
		m = (l + b) / 2;
		if(key == A[m])
		{
			check = 1;
			break;
		}
		else if(key >= A[m])
			b = m + 1;
		else if(key <= A[m])
			l = m - 1;
	}
	if(check == 1)
		cout<<"Element found at position: "<<m + 1<<endl;
	else
		cout<<"Element not found"<<endl;
	return 0;
}
