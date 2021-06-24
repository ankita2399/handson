/*Problem statement:
    Accept single digit number from user and print it int word.
	Input:7
	Output:seven
	Input:-3
	Output:three
	Input:74
	Output:invalid Number*/
	
/*Algorithm:
       START
			Enter the number 
			 Useing switch  case 
			 print 0 to 9 Number in word
	   END*/
	   
	  ////////////////////////////////////////////////
	  // Function Name: Display
	  //Input: 			integer
	  //Output:			-
	  //Description:	single digit number from user and print it int word
	  //Date:			6 August 2020
	  //Author:		    Ankita A Javalekar
	  ////////////////////////////////////////////////
#include<Stdio.h>
void Display(int iNo)
{
	if(iNo<0)
	{
		iNo=-iNo;
	}
	switch(iNo)
	{
		case 0:
			printf("Zero");
			break;
		case 1:
		     printf("One");
			 break;
		case 2:
			printf("Two");
			break;
		case 3:
			printf("Three");
			break;
		case 4:
			printf("Four");
			break;
		case 5:
			printf("Five");
			break;
		case 6:
			printf("Six");
			break;
		case 7:
			printf("Seven");
			break;
		case 8:
			printf("Eight");
			break;
		case 9:
			printf("Nine");
			break;
		default:
		    printf("Invalid Number");
			break;
	}	
}
int main()
{
    int iValue = 0;
    printf("enter number:");
    scanf("%d",&iValue);
	Display(iValue);
    return 0;
}
