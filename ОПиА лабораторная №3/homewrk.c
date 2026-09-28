#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "RUS");
	puts("введите R1 и R2"); //запрос к пользователю на ввод
	double R1, R2;
	scanf("%lf%lf", &R1, &R2); //ввод сопротивлений

	//рассчет сопротивления при последовательном и параллельном соединении
	double R_obj_1 = R1 + R2; 
	double R_obj_2 = (R1 * R2) / (R1 + R2);

	//вывод
	printf("Сопротивление при последовательном соединении: %.2lf\n", R_obj_1);
	printf("Сопротивление при параллельном соединении: %.2lf", R_obj_2);

}