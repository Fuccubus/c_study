// exam2.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"


int main()
{
	printf("----------while----------\n");
	int nIndex = 0;
	while (nIndex < 10) {
		printf("%d\n", nIndex);
		nIndex++;
	}

	printf("----------do while----------\n");
	nIndex = 0;
	
	do {
		printf("%d\n", nIndex);
		nIndex++;

	} while (nIndex > 10);



    return 0;
}

