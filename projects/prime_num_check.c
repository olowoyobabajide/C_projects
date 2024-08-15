#include <stdio.h>
int prime_num(int num);

/*this program returns the output of 1 if a number is a prime number and 0 if not*/

int main(void)
{
	int dig;

	printf("Enter a number and let the system check if its prime: ");
	scanf("%d", &dig);
	printf("The number is either 1 for true and 0 for false: %d\n", prime_num(dig));
	return 0;
}
int prime_num(int num)
{
	if (num == 1 || num == 2)
	{
		return 1;
	}
	if (num % 2 != 0 && num % 3 != 0 && num % 3 != 0 && num % 4 != 0 && num % 5 != 0 && num % 6 != 0 && num % 7 != 0 && num % 8 != 0 && num % 9 != 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
