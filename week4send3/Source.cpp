#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int sumsum(int num);
int main()
{
	int num;
	scanf("%d", &num);
	while (num >= 0)
	{
		if (num < 100)
		{
			printf("%d less than 100", num);
			break;
		}
		else if (num > 100)
		{
			printf("%d more than 100", num);
			break;
		}
		else if (num = 100)
		{
			printf("%d equal 100", num);
			break;
		}
	}
	return 0;
}