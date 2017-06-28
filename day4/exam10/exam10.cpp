// exam10.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	printf("%d %c %d \n", 65, 65, 'A');
	printf("%d %d %d \n", 'A', 'B', 'C');
	printf("%c %c %c \n", 67, 66, 65);

	//Hello~!!!
	printf("%c %c %c %c %c %c %c %c %c \n", 72, 101, 108, 108, 111, 126, 33, 33, 33);

	//당신의 혈액형은 **형
	char blood_type;
	
	printf("당신의 혈액형은 : ");
	scanf_s("%c", &blood_type);
	printf("당신의 혈액형은 %c형입니다. \n", blood_type);

	return 0;
}