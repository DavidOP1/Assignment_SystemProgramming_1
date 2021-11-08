#include <stdio.h>
#include "NumClass.h"
int main(){
    int num1,num2,temp;
    scanf("%d %d",&num1,&num2);  
    if(num2<num1) {temp=num2; num2=num1; num1=temp;}
    for(int i=num1;i<=num2;i++){
       if(i==num1) printf("The Armstrong numbers are:");
       if(isArmstrong(i)) printf(" %d",i);
       if(i==num2) printf("\n");
    } 
     for(int i=num1;i<=num2;i++){
       if(i==num1) printf("The Palindromes are:");
       if(isPalindrome(i)) printf(" %d",i);
       if(i==num2) printf("\n");
    } 
     for(int i=num1;i<=num2;i++){
       if(i==num1) printf("The Prime numbers are:");
       if(isPrime(i)) printf(" %d",i);
       if(i==num2) printf("\n");
    } 
     for(int i=num1;i<=num2;i++){
       if(i==num1) printf("The Strong numbers are:");
       if(isStrong(i)) printf(" %d",i);
       if(i==num2) printf("\n");
    } 
    return 0;
}