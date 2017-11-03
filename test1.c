#include<stdio.h>
void main()
{
	
	int A[10], x, i, key = 0;
	printf("10 Elements -\n");
	for(i = 0; i < 10; i++)
		scanf("%d", &A[i]);
	printf("key\n");
	scanf("%d", &x);
	for(i = 0; i < 10; i++)
		if(A[i]==x)
			key = 1;
	if(key == 0)
		printf("No\n");
	else
		printf("Yes\n");
	/*int A[10], n, i, x, l, b, m;
	printf("size\n");
	scanf("%d", &n);
	printf("%d elements\n", n);
	for(i = 0; i <n; i++)
		scanf("%d", &A[i]);
	printf("Key\n");
	scanf("%d", &x);
	b = 0;
	l = n - 1;
	while(l >= b)
	{
		m = (l + b) / 2;
		if(A[m] == x)
		{
			printf("found at %d position\n", m+1);
			break;
		}
		else if(x > A[m])
			b = m + 1;
		else if(x < A[m])
			l = m - 1;
		else
			printf("Not found\n");
	}
	if( b > l)
		printf("Not found\n");*/
}
