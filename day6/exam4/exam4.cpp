// exam4.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"


int main()
{
	int nIndex = 1;
	int result = 0;

	while (nIndex <= 100)
	{
		if ((nIndex % 2) != 0) {
			printf("%d\n", nIndex);

			result += nIndex;//result = result + nIndex;
		}
		nIndex++; //nIndex += 1; �� ����
	}

	printf("1���� 100������ Ȧ���� ���� : %d\n", result);

    return 0;
}

