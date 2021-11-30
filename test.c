#include<stdio.h>
#include<windows.h>

int IsPrime(int i)
{
    int j = 0;
    for(j = 2; j < i; j++)
    {
	if(i % j == 0)
	{
		return 0;
	}
    }
    return 1;
}

int main()
{
    int input = 0;
    int ret = 0;
    printf("请输入:>");
    scanf("%d", &input);
    ret = IsPrime(input);
    if(ret == 1)
    {
  	printf("%d是素数\n", input);
    }
    else
    {
 	printf("%d不是素数\n", input);
    }
    system("pause");
    return;
}