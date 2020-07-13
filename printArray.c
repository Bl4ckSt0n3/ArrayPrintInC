#include<stdio.h>

int prntArr(int[], int);

int main()
{
	int a[] = {0,1,2,3,4,5,6,7,8,9};
	prntArr(a,sizeof(a)/4);
	return 0;
}

int prntArr(int arr[], int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		printf("%d\n",arr[i]);
	}
}
