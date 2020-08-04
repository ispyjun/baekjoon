//while문
//백준 10952

#include <stdio.h>

int main(void)
{
	int a, b;
	while (1) {
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0)
			return 0;
		printf("%d\n", a + b);
	}

}

//백준 1110

#include <stdio.h>

int main(void)
{
	int n = 0, m = 0, a = 0;
	int i = 0;
	scanf("%d", &n);
	a = n;
	while (1)
	{
		m = n / 10 + n % 10;
		n = (n % 10);
		n = (n * 10) + m % 10;
		i++;
		if (n == a)
		{
			printf("%d", i);
			return 0;
		}
	}
}
