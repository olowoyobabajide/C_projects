#include <stdio.h>
int factorial(int num);
/*this program gives the factorial of any number inputted*/

int main()
{
	int dig = 5;
	printf("%d\n", factorial(dig));
}

int factorial(int fact)
{
	if (fact == 1)
	{
		return 1;
	}
	else
	{
		return (fact * factorial(fact - 1));
	}
}
