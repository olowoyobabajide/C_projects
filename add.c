#include <stdio.h>
/*this program gives the sum of two integers using the scanf function*/

int main(void)
{
	int int1;/*first integer*/
	int int2;/*second integer*/
	int sum;

	printf("Enter the first number: ");
	scanf("%d", &int1);
	printf("Enter the next digit: ");
	scanf("%d", &int2);
	
	sum = int1 + int2;
	printf("%d\n", sum);	

}
