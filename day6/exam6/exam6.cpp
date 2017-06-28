// exam6.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int a, b, c;
	a = 1;
	b = 1;
	c = 1;

	printf("%d, %d, %d\n", a++, a++, a++);	//C언어는 함수를 호출할 때 스택이란 것을 사용해 차곡차곡 쌓는다고 한다. 때문에 메모리를 출력할 때 먼저 들어간 인자를 나중에, 나중에 들어간 인자를 먼저 꺼낸다.
	printf("%d\n", a);
	
	/*
	printf("%d, %d, %d\n", a++, a++, a++);
	printf("%d\n", a);
	*/

    return 0;
}

