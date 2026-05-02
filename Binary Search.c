#include<stdio.h>

int binarysearch(int arr[],int size,int data){
    int l=0 , r=size-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(data == arr[mid]){
            return mid ;
        }
        else if(data < arr[mid]){
            l = mid-1 ;
        }
        else{
            l = mid + 1;
        }
    }
}
int main(){
   int size , data , swap;
   printf("Enter the size of the array : ");
   scanf("%d",&size);
   int arr[size] ;
   printf("Enter the %d elements in the array : \t" , size);
   for (int i = 0; i < size; i++)
   {
    scanf("%d",&arr[i]);
   }
   for (int i = 0; i < size ; i++)
   {
    for (int j = 0; j < size - i-1; j++)
    {
         if(arr[j]>arr[j+1]){
                swap = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = swap ;
       }  
    }
}  
printf("Enter the data to be searched : \t");
scanf("%d",&data);
binarysearch(arr,size,data);
    return 0;
}