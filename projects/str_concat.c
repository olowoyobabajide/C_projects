#include <stdio.h>

/*A simple string concatenation program*/
char strconcat(char *a, char *b);

char strconcat(char *a, char *b)
{
	while (*a != '\0')
	{
		printf("%c", *a++);
		
	}
	while (*b != '\0')
	{
		a = b;
		printf("%c", *b++);
	
	}
	printf("\n");
}
int main(void)
{
	char first[] ="jide";
	char second[] = "is good";

	strconcat(first, second);

}
