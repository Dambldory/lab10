#include <stdio.h>
#include <locale.h>
#include <math.h>

double fa(double x);
double fb(double x);
double sin_n(double x, int N);

void main()
{
	setlocale(LC_ALL, "RUS");
	//Задание 1
	/*double x;
	puts("Введите х:  ");
	scanf("%lf", &x);
	printf("fa(x)=%.3lf , fb(x)=%.3lf", fa(x), fb(x));
	printf("\nПроизведение: %.4lf\n"
		"Удвоенная сумма значений: %.4lf\n"
		"Разность квадратов: %.4lf",
		fa(x) * fb(x),
		2*(fa(x) + fb(x)),
		pow(fa(x),2) - pow(fb(x),2));
	*/
	double x;
	int n;
	puts("Введите х:  ");
	scanf("%lf", &x);
	getchar();
	printf("\nВведите число шагов:  ");
	scanf("%d", &n);
	printf("\nПользовательская функция через сумму ряда: %.4lf", sin_n(x, n));
	printf("\nФункция стандартной библиотеки: %.4lf", sin(x));
	//printf("\n%d", factr(n));
}


double fa(double x)
{
	double y;
	if (x <= 3)
		y = pow(x, 2) - 3 * x + 9;
	else if (x > 3)
		y = 1 / (pow(x, 3) + 3);
	return y;
}
double fb(double x)
{
	double y;
	y = x * exp(sin(pow(x, 2)));
	return y;
}

int factr(int x) 
{
	int y = 1;
	for (int i = 1; i <= x; i++)
	{
		y *= i;
	}
	return y;
}

double sin_n(double x, int n)
{
	double y = 0;
	int k = 1;
	for (int i = 1; i <= n; i++) 
	{
		y += pow(-1, k - 1) * pow(x, 2*k - 1) / factr(2*k-1);
		k += 1;
	}
	return y;
}

double sin_eps(double x, double eps)
{
	double y = 0;
	int k = 1;
	while(fabs(x)>eps)
	{
		y += pow(-1, k - 1) * pow(x, 2 * k - 1) / factr(2 * k - 1);
		k += 1;
	}
	return y;
}