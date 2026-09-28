#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "RUS");
	double a, b;
	puts("введите a и b");
	scanf("%lf%lf", &a, &b);
	printf("| %-12s | %-12s | %-12s |\n","a * b","a + b","a - b");
	printf("| %-4.2lf * %-5.2lf | %-4.2lf + %-5.2lf | %-4.2lf - %-5.2lf |\n",a,b,a,b,a,b);
	printf("| %-12.2lf | %-12.2lf | %-12.2lf |", a * b, a + b, a - b);
}
