#include <stdio.h>
#include "NumClass.h"
int factorial(int);


 int  factorial( int num){
 if(num<=1) return 1;
 return num*factorial(num-1);
}
int isStrong(int num){
    int temp=0,sum=0,tempNum=num;
    if(num<=0) return 0;
while(num>0){
    temp=num%10;
    sum=sum+factorial(temp);
    num=num/10;
}
if(sum==tempNum) return 1;
else return 0;
}
int isPrime(int num){
    if(num<=0) return 0;
    int bool=1;
for (int i = 2; i <=(num/2)&&bool==1; i++)
{
    if(num%i==0) bool=0;
}
return bool;
}