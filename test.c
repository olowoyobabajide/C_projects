#include <stdio.h>

/*a program that collects input of 2 numbers and checks if the second is a multiple of the first*/

int main()
{
	int num;
	
	printf("Enter a 5 digit number: ");
	scanf("%d", &num);
	
	printf("%d %d ", num/10000, (num%10000)/1000);
	printf("%d %d ", ((num%10000)%1000)/100, (((num%10000)%1000)%100)/10);
	printf("%d\n", (((num%10000)%1000)%100)%10);	
}
