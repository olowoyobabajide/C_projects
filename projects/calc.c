#include <stdio.h>

/*this is a simple calaculator to perform basic logical operations. For now it works with 2 digit inputs*/

int main()
{
	int dig; /*the variable for picking what calculation to be done*/
	int num1, num2;
	float mul, div, add, sub;

	printf("Pls enter the type of calculation to be done\n");
	printf("1 for add\n2 for sub\n3 for div\n4 for mul\n");
	scanf("%d", &dig);

	if (dig == 1)
	{
	
		printf("Enter the 2 numbers: ");
		scanf("%d%d", &num1, &num2);

		add = (float) num1 + num2;
		printf("The sum of the 2 numbers = %.2f\n", add);

	}
	if (dig == 2)
	{

		printf("Enter the 2 numbers: ");
		scanf("%d%d", &num1, &num2);

		sub = (float) num1 - num2;
		printf("The subtraction of the second number from the first = %.2f\n", sub);
	}
	if (dig == 3)
	{
		printf("Enter the 2 numbers: ");
		scanf("%d%d", &num1, &num2);

		div = (float) num1/ num2;
		printf("The division of the first number by the second = %.2f\n", div);
	}
	if (dig == 4)
	{
		printf("Enter the 2 numbers: ");
		scanf("%d%d", &num1, &num2);

		mul = (float) num1 * num2;
		printf("The multiplication of the 2 numbers = %.2f\n", mul);
	}
		
}
