#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "RUS");
	double a, b;
	puts("введите a и b");
	scanf("%lf%lf", &a, &b);
	printf("| %-15s | %-15s | %-15s |\n","a * b","a + b","a - b");
	printf("| %-6.2lf * %-6.2lf | %-6.2lf + %-6.2lf | %-6.2lf - %-6.2lf |\n",a,b,a,b,a,b);
	printf("| %-15.2lf | %-15.2lf | %-15.2lf |", a * b, a + b, a - b);
}
