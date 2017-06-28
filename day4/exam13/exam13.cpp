// exam13.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int num1 = 10, num2 = 7;

	printf("두 수의 합 : %d\n", num1 + num2);
	printf("두 수의 차 : %d\n", num1 - num2);
	printf("두 수의 곱 : %d\n", num1 * num2);
	printf("두 수의 몫 : %f\n", (double)num1 / (double)num2);
	printf("두 수의 나머지 : %d\n", num1 % num2);

	double num3 = 5.5, num4 = 1.7;

	printf("\n===================\n두 실수의 합 : %fl\n", num3 + num4);
	printf("두 실수의 차 : %fl\n", num3 - num4);
	printf("두 실수의 곱 : %fl\n", num3 * num4);
	printf("두 실수의 몫 : %fl\n", num3 / num4);
	printf("두 실수의 몫(정수만) : %d\n", (int)num3 / (int)num4);
	
    return 0;
}

