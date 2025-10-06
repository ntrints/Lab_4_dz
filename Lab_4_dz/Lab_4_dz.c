#include<stdio.h>
#include<locale.h>

int a, b, c; // задание 6

void main()
{
	setlocale(LC_ALL, "RUS");
	puts("¬ведите номер первого игрока");
	scanf("%d", &a);
	puts("¬ведите номер второго игрока");
	scanf("%d", &b);
	puts("¬ведите номер третьего игрока");
	scanf("%d", &c);
	printf("”словие дл€ счастливой тройки - %d", (a + b + c) % 3);


}
