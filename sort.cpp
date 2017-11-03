#include <iostream>

using namespace std;
template <class T>
void swap(T *a, T *b)
{
	T temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

template <class T>
int partition(T arr[], int low, int high)
{
	T pivot = arr[high];
	int i = low - 1;
	for(int j = low; j < high; j ++)
	{
		if(arr[j] <= pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[++i], &arr[high]);
	return i;			
}

template <class T>
void quicksort(T arr[],int low,int high)
{
	if(low < high)
	{
		int pi = partition(arr, low, high);
		quicksort(arr, low, pi - 1);
		quicksort(arr, pi + 1, high);
	}
}

int main()
{
	int arr[10];
	cout<<"Input integer array of 10 elements\n";
	for(int i = 0; i < 10; i ++)
		cin>>arr[i];
	quicksort(arr, 0, 9);
	cout<<"Sprted array 
	for(int i = 0; i < 10; i ++)
		cout<<arr[i]<<" ";
	float arr[10];
        for(int i = 0; i < 10; i ++)
                cin>>arr[i];
        quicksort(arr, 0, 9);
        for(int i = 0; i < 10; i ++)
                cout<<arr[i]<<" ";

	return 0;
}
