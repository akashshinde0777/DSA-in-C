#include <stdio.h>

int main(){
    int n;
    printf("enter size of array:");
    scanf("%d",&n);
    
    int key;
    printf("enter element to find:");
     scanf("%d",&key);
     
    int arr[n];
    
    printf("enter array elements:");
    for(int i=0; i<n;i++)
     scanf("%d",&arr[i]);
     
     int ans =0;
     
    for(int i=0; i<n;i++)
    {
        if(arr[i]==key){
            printf("element found at index %d",i);
            ans=1;
            break;
        }
    }
    if (ans==0){
       printf("element not found "); 
    }
    return 0;
     
}
