#include <stdio.h>
#define SIZE 10
/*This is a simple bubble sort program*/

int main(void)
{
	int hold;/*temporary hold values*/
	int pass;/*pass through the values*/
	int count;
	int a[SIZE] = {2,8,6,4,7,1,9,10,3,5};

	for (pass = 1; pass < SIZE; pass++)
	{
		for (count = 0; count < SIZE - 1; count++)
		{
			if (a[count] < a[count + 1])
			{
				hold = a[count];
				a[count] = a[count + 1];
				a[count + 1] = hold;
			}
		}
	}
	for (count = 0; count < SIZE; count++)
	{
		printf("\n%d", a[count]);
	}
}
