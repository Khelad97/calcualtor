/*************************************************
    @project  calculators
    @author   Khelad Mohamed AL-SAYED
    @data     25/7/2020
    @Time     03:25 AM
    File		: ex.c
Description	: sample calculator program
*************************************************/


/* Start Linking Section */
#include <stdio.h>
#include <stdlib.h>
/* End Linking Section */


/* Start Definition section */
/***************************/
/* End Definition section */


/* Start Global declaration section */
float number1,number2,result;
int operation;
/* End Global declaration section */


/* Start Main Program Section */
int main()
{
    /* Start main application */


here:/*the point which goto up to it  */
    printf("enter number1 , operation , number2 :"); /*print message to user to enter the Equation */
    scanf("%i  %c %i",&number1,&operation, &number2); /*to store value in the variable */
    //fflush(stdin);

    if ('+'== operation)
    {
        result=number1+number2;
        printf("result =%0.2f\n",result);
    }
    else if ('-'== operation)
    {
        result=number1-number2;
        printf("result =%0.2f\n",result);
    }
    else if ('*'== operation)
    {
        result=number1*number2;
        printf("result =%0.2f\n",result);
    }
    else if ('/'== operation)
    {
        result=number1/number2;
        printf("result =%0.2f\n",result);
    }
    else
    {
        printf("error enter operation again !!!\n");
        goto here; /* to return the process form the sign "here: in line 29 "*/
    }
    return 0;
    /* End main application */
}
/* End Main Program Section */


/****************************************************************
				     	Revision History
****************************************************************/
/*
	* MM/DD/YYYY	  Name			        Task Number	     Description
	* ----------	  -------------------           -----------	    -----------------------------------------
	* 25/07/2020	  Khelad Mohamed AL-SAYED        0x000001              change in e from power of 10 to character

*/
