// exam11.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	char number;
	double hit_rate;
	int ages;
	
	printf("등번호를 입력하세요 : ");
	scanf("%c", &number);

	printf("타율을 입력하세요 : ");
	scanf("%lf", &hit_rate);

	printf("나이를 입력하세요 : ");
	scanf("%d", &ages);

	printf("%c번 선수의 타율은 %lf이고 나이는 %d살입니다.\n", number, hit_rate, ages);

    return 0;
}

