// exam13.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"


int main()
{
	int num1 = 10, num2 = 7;

	printf("�� ���� �� : %d\n", num1 + num2);
	printf("�� ���� �� : %d\n", num1 - num2);
	printf("�� ���� �� : %d\n", num1 * num2);
	printf("�� ���� �� : %f\n", (double)num1 / (double)num2);
	printf("�� ���� ������ : %d\n", num1 % num2);

	double num3 = 5.5, num4 = 1.7;

	printf("\n===================\n�� �Ǽ��� �� : %fl\n", num3 + num4);
	printf("�� �Ǽ��� �� : %fl\n", num3 - num4);
	printf("�� �Ǽ��� �� : %fl\n", num3 * num4);
	printf("�� �Ǽ��� �� : %fl\n", num3 / num4);
	printf("�� �Ǽ��� ��(������) : %d\n", (int)num3 / (int)num4);
	
    return 0;
}

