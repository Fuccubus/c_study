// exam10.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"


int main()
{
	printf("%d %c %d \n", 65, 65, 'A');
	printf("%d %d %d \n", 'A', 'B', 'C');
	printf("%c %c %c \n", 67, 66, 65);

	//Hello~!!!
	printf("%c %c %c %c %c %c %c %c %c \n", 72, 101, 108, 108, 111, 126, 33, 33, 33);

	//����� �������� **��
	char blood_type;
	
	printf("����� �������� : ");
	scanf_s("%c", &blood_type);
	printf("����� �������� %c���Դϴ�. \n", blood_type);

	return 0;
}