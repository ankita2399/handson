/* Accept two numbers from user and display first number in second number of times.
Input :  12 5
Output : 12 12 12 12 12

Input :  -2 3
Output : -2 -2 -2


Input :  21 -3
Output : 21 21 21

Input :  -2 0
Output : */

/*
   Algorithm:
        START
        Accept two Number
        In Function using for loop
           display 1st no in 2nd number of time
        Main function call Display
		END
*/

#include<stdio.h>           //Header file

//////////////////////////////////////////////////////////
//
// Function Name:    Display1
// Input:            integer,integer
// Output:           integer
// Description :     Accept two number and display 1st number in 2nd number of time.
// Date:             24 July 2020
// Author:           Ankita A Javalekar
//
//////////////////////////////////////////////////////////

void Display1(int iNo,int iFrequency)
{
    int i=0;
    for(i=0;i<iFrequency;i++)
    {

        printf("\t%d",iNo);

    }
}


int main()
{
    int iValue=0;
    int iCount=0;

    printf("enter number:");
    scanf("%d",&iValue);

    printf("enter frequency:");
    scanf("%d",&iCount);

    Display1(iValue,iCount);
    return 0;
}
