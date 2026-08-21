#include<stdio.h>
int binarysearch (int n, int key, int arr[])
{
    int low=0;
    int high=n-1;
    int mid=0;
    
    while(low <= high)
    {
        mid= (low+high)/2;
        
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
           low = mid+1;
        
        }
        else
          high =mid-1;
            
        }
        return -1;
    }
    
  int main (){
     int n;
     printf("enter size of array:");
     scanf("%d",&n);
     
     int key;
     printf("enter key to find:");
     scanf("%d",&key);
     
     int arr[n];
          printf("enter sorted array elements:");
          for (int i=0; i<n; i++){
              scanf("%d",&arr[i]);
          }
          
          int ans;
          ans=binarysearch(n,key,arr);
          
          if (ans==-1){
          printf("element not found");
          }
          else
          printf("element found at index %d position",ans);
          
          
    return 0;

 }