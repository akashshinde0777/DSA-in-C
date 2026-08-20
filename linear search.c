#include <stdio.h>

int main()
{
    // taking input from user
   int n=0;
   printf("enter size of array: ");
   scanf("%d",&n);
   
   int arr[n];
   printf("enter element of array: ");
   for(int i=0;i<n;i++)
   scanf("%d",&arr[i]);

  // linear search algorithm
  int temp;
  for(int i=1;i<n;i++){
  
      int temp=arr[i];
         int j;
      for(j=i-1;j>=0 && arr[j]>temp;j--){
          arr[j+1]=arr[j];
      }
        arr[j+1]=temp;
      }
   // printing sorted array
  printf("sorted array: ");
  for(int i=0;i<n;i++)
  printf("%d ",arr[i]);
    return 0;
}