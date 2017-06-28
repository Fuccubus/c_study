// exam12.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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
	strTemp[4] = '\0'; // 또는 0x00

	printf("%s", strTemp);

	char szBuf[256], szBuf2[256];
	printf("\n당신의 이름은 무엇입니까?");
	scanf("%s", &szBuf, 256);

	printf("성은 무엇이구요?");
	scanf("%s", &szBuf2, 256);
		
	printf("안녕하세요, %s%s님!\n", szBuf2, szBuf);

    return 0;
}

