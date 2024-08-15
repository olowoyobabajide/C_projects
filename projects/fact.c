#include <stdio.h>
int factorial(int num);
/*this program gives the factorial of any number inputted*/

int main()
{
	int dig;

	printf("Pls input a number\nThe computer would give the factorial of that number: ");
	scanf("%d", &dig);
	printf("\nThe factorial of %d is %d\n", dig, factorial(dig));
}

int factorial(int fact)
{
	if (fact == 1 || fact == 0)
	{
		return 1;
	}
	else
	{
		return (fact * factorial(fact - 1));
	}
}
