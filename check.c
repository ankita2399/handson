/* Problem Statment: Accept One number and its check whether it is divisible by 5 or not. */


#include<stdio.h>           //Header file
typedef int BOOL;
#define TRUE 1
#define FALSE 0

//////////////////////////////////////////////////////////
//
// Function Name:    Check
// Input:            integer
// Output:           integer
// Description :     check whether it is divisible by 5 or not .
// Date:             24 July 2020
// Author:           Ankita A Javalekar
//
//////////////////////////////////////////////////////////

int check(int iNo)
{
    if(iNo%5==0)
    {
      return TRUE;
    }
    else
    {
        return FALSE;
    }

}

  int main()
{
 int iValue = 0;
 int iRet = 0;
 printf("enter number");
 scanf("%d",&iValue);
 iRet = check(iValue);
 if(iRet==TRUE)
    {
      printf("divisible by 5");
    }
    else
    {
       printf("not divisible by 5");
    }
    return 0;
}

