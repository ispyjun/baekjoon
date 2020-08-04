//for문
//백준 2739

#include <stdio.h>
int main(void)
{
	int i, n;
	scanf("%d", &n);
	for (i = 1; i <= 9; i++)
		printf("%d * %d = %d\n", n, i, n*i);
	return 0;
}

//백준 10950

#include <stdio.h>

int main(void)
{
	int a, b, t, i;
	scanf("%d", &t); //테스트할 횟수입력

	for (i = 0; i < t; i++) {
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
	return 0;
}


//백준 8393

int main(void)
{
	int a, i, sum;
	sum = 0;
	scanf("%d", &a);

	for (i = 0; i <= a; i++) {
		sum += i;
	}
	printf("%d", sum);
	return 0;
}

//백준 15552

#include <stdio.h>

int main(void)
{
	int a, b, t, i;
	scanf("%d", &t); //테스트할 횟수입력

	for (i = 0; i < t; i++) {
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
	return 0;
}


//백준 2741

#include <stdio.h>
int main(void)
{
	int i, n;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		printf("%d\n", i);
	return 0;
}

//백준 2742

#include <stdio.h>
int main(void)
{
	int i, n;
	scanf("%d", &n);
	for (i = n; i >= 1; i--)
		printf("%d\n", i);
	return 0;
}

//백준 11021

#include <stdio.h>

int main(void)
{
	int x, y;
	int i = 0, z = 0;
	scanf("%d", &z);

	for (i = 0; i != z; i++)
	{
		scanf("%d %d", &x, &y);
		printf("Case #%d: %d\n", i + 1, x + y);
	}

}

//백준 11022

#include <stdio.h>

int main(void)
{
	int x, y;
	int i = 0, z = 0;
	scanf("%d", &z);

	for (i = 0; i != z; i++)
	{
		scanf("%d %d", &x, &y);
		printf("Case #%d: %d + %d = %d\n", i + 1, x, y, x + y);
	}

}

//백준 2438

#include <stdio.h>
int main(void)
{
	int i, j, n;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}

//백준 2439

#include <stdio.h>

int main(void)
{
	int n;
	int i = 0, j = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j != n - i - 1; j++)
			printf(" ");
		for (j = 0; j != i + 1; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}
