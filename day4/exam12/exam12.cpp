// exam12.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"


int main()
{
	//char strTemp[5] = "Hani";
	char strTemp[5];
	//strTemp = "Hani";
	strTemp[0] = 'H';
	strTemp[1] = 'A';
	strTemp[2] = 'N';
	strTemp[3] = 'I';
	strTemp[4] = '\0'; // �Ǵ� 0x00

	printf("%s", strTemp);

	char szBuf[256], szBuf2[256];
	printf("\n����� �̸��� �����Դϱ�?");
	scanf("%s", &szBuf, 256);

	printf("���� �����̱���?");
	scanf("%s", &szBuf2, 256);
		
	printf("�ȳ��ϼ���, %s%s��!\n", szBuf2, szBuf);

    return 0;
}

