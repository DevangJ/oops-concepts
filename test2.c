#include<stdio.h>
void main()
{
	int A[10], n, i, j;
	printf("size\n");
	scanf("%d", &n);
	printf("%d elements\n", n);
	for(i = 0 ; i < n; i++)
		scanf("%d", &A[i]);
	for(i = 0; i < n - 1; i++)
		for(j = i; j < n - 1; j++)
			if(A[j] > A[j + 1])
			{
				A[j] += A[j + 1];
				A[j + 1] = A[j] - A[j + 1];
				A[j] = A[j] - A[j + 1];
			}
	printf("Sorted\n");
	for(i = 0; i < n; i++)
		printf("%d\n", A[i]);
} 
