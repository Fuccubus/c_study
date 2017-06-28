// exam8.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int num, num2;

	printf("정수 값을 입력하세요 : ");
	
	scanf("%d%d", &num, &num2);

	printf("%d와 %d을(를) 입력하셨습니다. \n", num, num2);
	printf("고로 두 정수의 합은 %d입니다. \n", num + num2);

    return 0;
}