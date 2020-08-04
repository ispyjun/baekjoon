//문자열
//백준 2839

#include <stdio.h>

int main(void)
{
	int a, five, three;
	int i = 0, count = 0;

	five = 5;
	three = 3;
	scanf("%d", &a);

	while (1)
	{
		if (a >= five && a % 5 == 0) {
			a = a - 5;
			count++;
		}
		else if (a >= five && a % 3 == 0) {
			a = a - 3;
			count++;
		}

		else if (a >= five) {
			a = a - 5;
			count++;
		}

		else if (three <= a && a < five)
		{
			a = a - 3;
			count++;
		}
		else if (a == 0)
		{
			printf("%d", count);
			return 0;
		}
		else
		{
			printf("%d", -1);
			return 0;
		}
	}

	return 0;
}
