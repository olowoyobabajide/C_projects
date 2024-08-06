#include <stdio.h>

/*an if program that equality & relational operators*/

int main(void)
{
	int int1, int2;

	printf("Enter two numbers and I'll tell you how they relate: ");
	scanf("%d%d", &int1, &int2);
	
	if (int1 == int2){
		printf("%d is equal to %d\n", int1, int2);
	}
	if (int1 < int2){
		printf("%d is less than %d\n", int1, int2);
	}
	if (int1 > int2){
		printf("%d is greater than %d\n", int1, int2);
	}
	if (int1 <= int2){
		printf("%d is less than or equal to %d\n", int1, int2);
	}
	if (int1 >= int2){
		printf("%d is greater than or equal to %d\n", int1, int2);
	}
	return 0;
}
