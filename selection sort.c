#include <stdio.h>

int main() {
	int n;
	printf("enter the size of array:");
	scanf("%d",&n);
	int arr[n];
	printf("enter the array elements:");
	for(int i=0; i<n; i++)
		scanf("%d",&arr[i]);
	//selection short
	int minIndex;

	for(int i=0; i<n-1; i++)
	{
		minIndex=i;
		for(int j=i; j<n; j++)
		{
			if(arr[minIndex]>arr[j])
			{
				minIndex=j;
			}
		}

		// swapping
		int temp;
		temp=arr[i];
		arr[i]=arr[minIndex];
		arr[minIndex]=temp;
	}

	printf("here is our sorted array:\n");
	for(int i=0; i<n; i++)
		printf("%d ",arr[i]);

	return 0;
}