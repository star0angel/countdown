#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:4996)//取消scanf返回值的警告

#include <stdio.h>
#include <windows.h>


int main()
{
	int num = 0;

	printf("请输入倒计时的分钟数：\n");
	scanf("%d", &num);
	int num1 = num * 60;
	int num2 = 0;
	while (num1)
	{
		printf("%d:%d", num, num2);
		Sleep(1000);
		system("cls");
		if (num2 == 0)
		{
			num2=59;
			num--;
		}
		else num2--;
		num1--;
	}
	return 0;
}