/* Problem Statment: write a program which accept number from user and print even factors of that number*/

/*
   Algorithm:
   START
     Enter Number
	   Using for loop
	     print even factors of that number
   END

*/
#include<stdio.h>           //Header file

//////////////////////////////////////////////////////////
//
// Function Name:    DisplayEvenFactor
// Input:            integer
// Output:           integer
// Description :     It is used to print even factor of that number .
// Date:           31 July 2020
// Author:           Ankita A Javalekar
//
//////////////////////////////////////////////////////////

void DisplayEvenFactor(int iNo)
{
	int i = 0;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(i = 1; i<iNo ;++i)
    {
        if(i%2==0 && iNo%i==0)
        {
            printf("\t%d",i);
        }
    }
}

int main()
{
int iValue = 0;
    printf("enter number:\n");
    scanf("%d",&iValue);
    DisplayEvenFactor(iValue);
    return 0;
}
