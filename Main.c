/* Problem Statment: 1.Write a program which accept number from user and display its digits in reverse
order. */
#include<stdio.h>           //Header file
void DisplayDigit(int iNo)
{

int r,sum=0,t;
 if(iNo<0)
 {
 iNo = -iNo;
 }
 for(t=iNo;iNo!=0;iNo=iNo/10)
 {
	 r=iNo%10;
	 sum=sum*10+r;
 }
 printf("%d\t",sum);
 }
int main()
{
 int iValue = 0;
 printf("enter number");
 scanf("%d",&iValue);
 DisplayDigit(iValue);
 return 0;
}
