//실습1
//백준 10039

#include <stdio.h>

int main(void)
{
	int a, b, c, d, e, sum;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

	if (a < 40)
	{
		a = 40;
	}
	if (b < 40)
	{
		b = 40;
	}
	if (c < 40)
	{
		c = 40;
	}
	if (d < 40)
	{
		d = 40;
	}
	if (e < 40)
	{
		e = 40;
	}

	sum = a + b + c + d + e;
	printf("%d", sum / 5);

	return 0;
}

//백준 5543

#include <stdio.h>

int main(void)
{
	int a, b, c, d, e, set = 0;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

	if (a >= b)
	{
		if (b >= c)
		{
			set += c;
		}
		else if (c > b)
		{
			set += b;
		}
	}
	else if (b > a)
	{
		if (a >= c)
		{
			set += c;
		}
		else if (c > a)
		{
			set += a;
		}
	}

	if (d > e)
	{
		set += e;
	}
	else
	{
		set += d;
	}
	printf("%d", set - 50);

	return 0;
}

//백준 10817

#include <stdio.h>

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	if (a > b) {
		if (a > c) {
			if (b >= c)
				printf("%d", b);
			else
				printf("%d", c);
		}
		else
			printf("%d", a);
	}

	else if (a == b)
		printf("%d", a);

	else {
		if (a >= c) {
			printf("%d", a);
		}
		else {
			if (b >= c)
				printf("%d", c);
			else
				printf("%d", b);
		}
	}
}

//백준 2523

#include <stdio.h>

int main(void)
{
	int a, b;
	int i = 0, j = 0;

	scanf("%d", &a);

	b = a;
	for (i = 0; i < (2 * a) - 1; i++)
	{
		if (i >= a)
		{
			b--;
			for (j = 0; j < b; j++)
			{
				printf("*");
			}
		}
		else
		{
			for (j = 0; j < i + 1; j++)
			{
				printf("*");
			}

		}
		printf("\n");
	}
	return 0;
}