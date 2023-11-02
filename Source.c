#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>

#define ROW 5
#define COL 5

void main()
{
	setlocale(LC_ALL, "RUS");
	/*int row, col;
	int a, b;
	a = 30;
	b = 1;
	printf("\n");
	for (row = 1; row <= ROW; ++row)
	{
		a = a - b;
		++b;
		for (col = 1; col <= row; col++)
		{
			printf("%5d", ++a);

		}

		printf("\n");
	}
	system("pause");*/
	/*int x, y;
	while (1)

	{
		printf("\nВведите произвольное число:");
		scanf("%d", &x);
		int k = 0;
		int s = 0;
		char a;
		while (x != 0)
		{
			y = x % 10;
			if (y == 3)
				k += 1;
			if (y > 5)
				++s;
			x /= 10;
		}
		printf("\nКоличество цифр \"3\" - %d\nКоличество цифр больше 5 - %d", k, s);
		printf("\nПродолжить ? (Да - y, нет - n)");
		if ((a = getchar()) == 'n')
			break;
	}*/
	int a, h, k;
	char c, d;
	printf("Введите символ для вывода, длину верхнего основания, высоту трапеции (Через запятую): ");
	scanf("%c,%d,%d", &c, &a, &h);
	k = 1;
	printf("\n");
	for (int i = 1; i <= h; ++i)
	{
		for (int j = 1; j <= a + ((h - 1) * 2); ++j)
		{
			if (j <= h - k || j > (a + ((h - 1) * 2)) - (h - k))
				printf(" ");
			else
				printf("%c", c);
		}
		++k;
		printf("\n");
	}
	while (1)
	{
		printf("\nЖелаете изменить размер? (Да - y, нет - n)");
		scanf("%c", &d);
		scanf("%c", &d);
		if (d == 'n')
			break;
		else
			printf("\nВведите длину верхнего основания, высоту трапеции (Через запятую): ");
		scanf("%d,%d", &a, &h);
		k = 1;
		printf("\n");
		for (int i = 1; i <= h; ++i)
		{
			for (int j = 1; j <= a + ((h - 1) * 2); ++j)
			{
				if (j <= h - k || j > (a + ((h - 1) * 2)) - (h - k))
					printf(" ");
				else
					printf("%c", c);
			}
			++k;
			printf("\n");
		}
	}

}