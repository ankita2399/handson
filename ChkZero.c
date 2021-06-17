/*Write a program which accept number from user and display it contains zero or not
Input:2395
Output:There is no zero
Input:1018
Output:It contains zero
*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkZero(int iNo)
{
int iDigit=0;
if(iNo<0)
{
    iNo=-iNo;
}
while(iNo!=0)
 {
    iDigit=iNo%10;
    if(iDigit==0)
    {
      return TRUE;
    }
    else
    {
      return FALSE;
    }
    iNo=iNo/10;
 }
}
int main()
{
    int iValue=0;
    BOOL bRet=FALSE;
    printf("Please Enter Number");
    scanf("%d",&iValue);
    bRet=ChkZero(iValue);
    if(bRet==TRUE)
    {
      printf("it contains zero");
    }
    else
    {
       printf("There is no zero");
    }
    return 0;
}

