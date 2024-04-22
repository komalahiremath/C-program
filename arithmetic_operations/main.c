/*************************************************************
 * Author 	   : Komala  
 * Date  	   : 22/4/24
 * Description : This program implements the basic arithmetic 
 *                operations suppoprted in C.
 ************************************************************/

#include <stdio.h>


int main()
{
	int num1,num2;
	int add_result, sub_result, mul_result, div_result;

	printf("User Inputs : \n");
	scanf("%d %d", &a, &b);

	/* Addition */
	add_result = num1 + num2;

	/* Subtraction */
	sub_result = num1 - num2;

	/* Multiplication */
	mul_result = num1 * num2;

	/* Division */
	div_result = num1 / num2;

	/* Print the results */
	printf("Addition Result : %d \n", add_result);
	printf("Subtraction Result : %d \n", sub_result);
	printf("Multiplication Result : %d \n", mul_result);
	printf("Division Result : %d \n", div_result);

	return 0;
}
