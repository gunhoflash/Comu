// IWant2GoDSM.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <string.h>

int main()
{
	char water[3] = "수", melon[3] = "박";
	int num = 0;
	scanf_s("%d", &num);
	for (int i = 1; i <= num; i++)
	{
		if (i % 2 == 1)
			printf("%s", water);
		else
			printf("%s", melon);
	}
	printf("\n");
    return 0;
}
