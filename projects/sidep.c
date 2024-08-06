#include <stdio.h>

/*this contains side projects picked along the way, just another diversion if I'm stuck on my main projects LOL, NO MAIN project here*/

int main()
{
	int grade, pass, fail;
	int count;
	
	count = 0;
	pass = 0;
	fail = 0;
	while (count < 10)
	{
		printf("Enter 1 for pass, 2 for fail: ");
		scanf("%d", &grade);
		if (grade == 1)
		{
			pass = pass + 1;
		}
		else 
		{
			fail = fail + 1;
		}
		count = count + 1;
	}
	printf("Number of student(s) who passed: %d\n", pass);
	printf("NUmber of student(s) who failed: %d\n", fail);
	if (pass >= 8)
	{
		printf("Bonus to instructor!\n");
	}
	return 0;

}
