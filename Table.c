/* Problem Statment: Write a program which accept numbers from user and display its table.
Input :  2  Output :  2 4 6 8 10 12 14 16 18 20
Input :  5  Output :  5 10 15 20 25 30 35 40 45 50
Input : -5  Output :  5 10 15 20 25 30 35 40 45 50 */

/*
   Algorithm:
   START
	Enter numbers
	Using For loop
      display its table
   END
*/
	  ////////////////////////////////////////////////
	  // Function Name: Table
	  //Input: 			integer
	  //Output:			intger
	  //Description:	display its table
	  //Date:			6 August 2020
	  //Author:		    Ankita A Javalekar
	  ////////////////////////////////////////////////
#include<stdio.h>
 void Table(int iNo)
{
     int i=0,itable=0;
		if (iNo<0)
		{
			iNo=-iNo;
		}
        for(i=1;i<=10;i++)
        {
            itable=iNo*i;
            printf("%d\t",itable);
        }

}
int main()
{
    int iValue=0;
    printf("enter number:\t");
    scanf("%d",&iValue);
    Table(iValue);
    return 0;
}
