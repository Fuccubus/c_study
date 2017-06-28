// exam4.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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
		nIndex++; //nIndex += 1; 와 동일
	}

	printf("1부터 100까지의 홀수의 합은 : %d\n", result);

    return 0;
}

