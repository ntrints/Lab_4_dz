#include<stdio.h>
#include<locale.h>

int a, b, c; // ������� 6

void main()
{
	setlocale(LC_ALL, "RUS");
	puts("������� ����� ������� ������");
	scanf("%d", &a);
	puts("������� ����� ������� ������");
	scanf("%d", &b);
	puts("������� ����� �������� ������");
	scanf("%d", &c);
	printf("������� ��� ���������� ������ - %d", (a + b + c) % 3);


}
