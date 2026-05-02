#include<stdio.h>
 
int factorial(int n){
    if(n==0){
        return 1;
    }
    else if(n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int main(){
    int num;
    printf("Enter the number whoses factorial you want :\t");
    scanf("%d",&num);
    printf("The factorial of %d is %d",num ,factorial(num)); 
    return 0;
}