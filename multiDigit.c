/*Write a program which accept number from user and return multiplication of all digits.
Input:2395
Output:270
Input:1018
Output:8
*/
#include<stdio.h>
int multiDigit(int iNo)
{
  int iDigit=0;
  int iret=1;
  while(iNo!=0)
  {
      iDigit=iNo%10;
      if(iDigit!=0)
      {
          iret=iDigit*iret;
      }
      iNo=iNo/10;
  }
  return iret;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Please Enter Number");
    scanf("%d",&iValue);
    iRet=multiDigit.c(iValue);
    printf("%d",iRet);
    return 0;
}

