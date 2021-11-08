#include <stdio.h>
#include "NumClass.h"
int Pow(int,int);
int isPalindromeHelp(int,int);
int isArmstrongHelp(int,int,int);
int numLength(int);

int numLength(int num){
int mone=0;
while (num>0)
{
    mone++;
    num=num/10;
    /* code */
}
return mone-1;
}
int Pow(int num,int level){
  if(level==0) return 1;
  return num*Pow(num,level-1);
}
int isPalindromeHelp(int num,int temp)
{
if(num==0) return 0;//Stop recursion

return  (temp*Pow(10,numLength(num)))+isPalindromeHelp(num/10,(num/10)%10);
}
int isPalindrome(int num){
    if(num<0) return 0;
 if(isPalindromeHelp(num,num%10)==num) return 1;
 else return 0;
}

int isArmstrongHelp(int num,int temp,int numTemp){
    if(num==0) return 0;
return Pow(temp,numLength(numTemp)+1)+isArmstrongHelp(num/10,(num/10)%10,numTemp);
}


int isArmstrong(int num){
    int numTemp=num;
    if(num<0) return 0;
 if(isArmstrongHelp(num,num%10,numTemp)==num) return 1;
 else return 0;
}

