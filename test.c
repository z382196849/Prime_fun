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
    printf("������:>");
    scanf("%d", &input);
    ret = IsPrime(input);
    if(ret == 1)
    {
  	printf("%d������\n", input);
    }
    else
    {
 	printf("%d��������\n", input);
    }
    system("pause");
    return;
}