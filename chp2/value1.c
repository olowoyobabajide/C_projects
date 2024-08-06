#include <stdio.h>

/*a program that inputs 3 numbers and guves the sum, product, average etc.*/

int main(void)
{
	int num1, num2, num3;
	
	printf("Input three different numbers: ");
	scanf("%d%d%d", &num1,&num2, &num3);

	printf("Sum is %d\n", num1 + num2 + num3);
	printf("Average is %d\n", (num1 + num2 + num3)/3);
	printf("Product is %d\n", num1 * num2 * num3);
	if (num1 < num2 && num1 < num3)
	{
		printf("Smallest is %d\n", num1);
	}
	if (num2 < num1 && num2 < num3)
	{
		printf("Smallest is %d\n", num2);
	}
	if (num3 < num1 && num3 < num2)
	{
		printf("Smallest is %d\n", num3);
	}
	return 0;

}
