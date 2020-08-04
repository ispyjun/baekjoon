//1Â÷¿ø ¹è¿

//백준 10818

#include <stdio.h>

int main(void)
{
	int a = 0, b;
	int i = 0;
	int min = 0, max = 0;
	scanf("%d", &b);

	scanf("%d", &a);
	min = a;
	max = a;
	for (i = 1; i < b; i++)
	{
		scanf("%d", &a);
		if (a >= max) {
			max = a;
		}
		else if (a < min) {
			min = a;
		}

	}
	printf("%d %d", min, max);
	return 0;
}
­
//¹éÁØ 2526

#include <stdio.h>

int main(void)
{
	int max = 0;
	int i;
	int j = 0;
	int a[9];

	for (i = 0; i < 9; i++)
	{
		scanf("%d", &a[i]);
	}
	max = a[0];
	for (i = 1; i < 9; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			j = i;
		}
	}
	printf("%d\n", max);
	printf("%d", j + 1);

	return 0;
}

//¹éÁØ 2577

#include <stdio.h>

int main(void)
{
	int x, y, z, mul;
	int i = 0;
	int input = 0;
	int a[10];

	scanf("%d %d %d", &x, &y, &z);

	mul = x * y*z;
	for (i = 0; i < 10; i++)
	{
		a[i] = 0;
	}
	for (i = 0; i < 9; i++)
	{
		input = mul % 10;

		if (mul == 0)
			continue;

		if (input == 0)
			a[0] += 1;
		else if (input == 1)
			a[1] += 1;
		else if (input == 2)
			a[2] += 1;
		else if (input == 3)
			a[3] += 1;
		else if (input == 4)
			a[4] += 1;
		else if (input == 5)
			a[5] += 1;
		else if (input == 6)
			a[6] += 1;
		else if (input == 7)
			a[7] += 1;
		else if (input == 8)
			a[8] += 1;
		else if (input == 9)
			a[9] += 1;

		mul /= 10;
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d\n", a[i]);
	}
	return 0;
}
