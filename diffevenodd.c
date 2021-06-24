/*Write a program which accept number from user and return difference between summation of even digits and summation of odd digits.
Input:2395
Output:-15
Input:1018
Output:6
*/
#include<stdio.h>
int diffevenodd(int iNo)
{
int iDigit=0;
int iEvenSum=0,iOddSum=0;
if(iNo<0)
{
    iNo=-iNo;
}
while(iNo!=0)
 {
    iDigit=iNo%10;
    if(iDigit%2==0)
    {
      iEvenSum=iEvenSum+iDigit;
    }
    else
    {
        iOddSum=iOddSum+iDigit;
    }
    iNo=iNo/10;
 }
return (iEvenSum-iOddSum);
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Please Enter Number");
    scanf("%d",&iValue);
    iRet=doffevenodd(iValue);
    printf("%d",iRet);
    return 0;
}

