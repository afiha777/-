#include<stdio.h>
int main()
{
	int n;
	printf("请输入一个整数");
	scanf_s("%d", &n);
	int b = 0;
	for (int a = 1; a <= n; a++)
	{
		
		if (n% a == 0)
		{
			b++;
		}


		printf("%d", b);

	}
	if (b == 2)
	{
		printf("这是一个质数");


	}
	else
	{
		printf("这不是一个质数");

	}






}