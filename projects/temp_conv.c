#include <stdio.h>

/*this program converts temperature from celsius to fahrenheit and vice versa */

int main()
{
	int val;

	int fahr, cel;
	float ccalc, fcalc;/*this contains the formulas for the conversion to celsius and fahrenheit respectively*/
 
	printf("Enter a 1 for conversion to Celsisus &\n2 for conversion to Fahrenheit: ");
	scanf("%d", &val);

	if (val == 1){
		printf("Please enter a value in fahrenheit to be converted to Celsius: ");
		scanf("%d", &fahr);
		ccalc = (float) (fahr - 32) * 5/9;
		printf("This is %.2f degree celsius\n", ccalc);
	}
	if (val == 2)
	{
		printf("Please enter a value in celsius to be converted to fahrenheit: ");
		scanf("%d", &cel);

		fcalc = (float) (cel*9/5) + 32;					
		printf("This is %.2f degree fahrenheit\n", fcalc);
	}
}
