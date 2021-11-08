#include <stdio.h>
#include "NumClass.h"
int numLength(int);
int Pow(int,int);


int numLength(int num){
int mone=0;
while (num>0)
{
    mone++;
    num=num/10;
    /* code */
}
return mone-1;
}int Pow(int num,int level){
  if(level==0) return 1;
  return num*Pow(num,level-1);
}
int isPalindrome(int num){
    int temp=0,newNum=0;
    if(num<0) return 0;
    int numTemp=num;
while (num>0)
{
    temp=num%10;
    newNum=newNum+(temp*Pow(10,numLength(num)));
    num=num/10;
    /* code */
}
 if(numTemp==newNum) return 1;
 else return 0;
}

int isArmstrong(int num){
    int temp=0,newNum=0,numTemp=num;
    if(num<0) return 0;
    while(num>0){
    temp=num%10;
    newNum=newNum+Pow(temp,numLength(numTemp)+1);
    num=num/10;
    }
   if(numTemp==newNum) return 1;
   else return 0;
}
