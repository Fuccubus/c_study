// exam11.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"


int main()
{
	char number;
	double hit_rate;
	int ages;
	
	printf("���ȣ�� �Է��ϼ��� : ");
	scanf("%c", &number);

	printf("Ÿ���� �Է��ϼ��� : ");
	scanf("%lf", &hit_rate);

	printf("���̸� �Է��ϼ��� : ");
	scanf("%d", &ages);

	printf("%c�� ������ Ÿ���� %lf�̰� ���̴� %d���Դϴ�.\n", number, hit_rate, ages);

    return 0;
}

