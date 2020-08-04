//if문
//백준 1330

#include <stdio.h>

int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);

	if (a > b)
		printf(">");
	else if (a < b)
		printf("<");
	else
		printf("==");
}

//백준 9498

#include <stdio.h>

int main()
{
	int score;
	scanf("%d", &score);
	if (90 <= score && score <= 100)
		printf("A");
	else if (80 <= score && score <= 89)
		printf("B");
	else if (70 <= score && score <= 79)
		printf("C");
	else if (60 <= score && score <= 69)
		printf("D");
	else
		printf("F");
}
//백준 2753

#include <stdio.h>

int main()
{
	int year;
	scanf("%d", &year);

	if (year % 400 == 0)
		printf("1");
	else if (year % 100 == 0)
		printf("0");
	else if (year % 4 == 0)
		printf("1");
	else
		printf("0");
}

//백준 14681

#include <stdio.h>

int main(void)
{
	int x, y;
	scanf("%d %d", &x, &y);

	if (0 < x && 0 < y)
	{
		printf("1\n");
	}
	else if (0 < x && y < 0)
	{
		printf("4\n");
	}
	else if (x < 0 && 0 < y)
	{
		printf("2\n");
	}
	else if (x < 0 && y < 0)
	{
		printf("3\n");
	}

	return 0;
}


//백준 2884

#include <stdio.h>

int main()
{
	int h, m;
	scanf("%d %d", &h, &m);

	if (m >= 45)
		printf("%d %d", h, m - 45);
	else if (m < 45 && h == 0)
		printf("%d %d", 23, 60 - (45 - m));
	else
		printf("%d %d", h - 1, 60 - (45 - m));
}
