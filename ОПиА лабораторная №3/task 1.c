#include <stdio.h>
#include <locale.h>
#define D 2.54
#define I_D 2,32166 
main()
{
	setlocale(LC_ALL, "RUS");
	int num, num2;
	puts("введите число");
	scanf_s("%d", &num);
	puts("введено число А");
	puts("введите еще одно число");
	scanf_s("%d", &num2);
	puts("введено число Б");
	printf("%d + %d = %d\n%d - %d = %d\n%d * %d = %d\n%d / %d = %d\nОстаток от деления равен %d\n", num, num2, num + num2, num, num2, num - num2, num, num2, num * num2, num, num2, num / num2, num % num2);
	int dym, i_dym;
	float result, i_result;
	puts("введите целое число английского дюйма");
	scanf_s("%d", &dym);
	result = dym * D;
	printf("%d дюймов - это %.1f см\n", dym, result);
	puts("введите целое число испанского дюйма");
	scanf_s("%d", &i_dym);
	result = i_dym * I_D;
	printf("%d испанских дюймов - это %.1f см", i_dym, result);
	setlocale(LC_ALL, "RUS");
}