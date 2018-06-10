#include <stdio.h>
int main()
{
	int m,n;
	int gongyueshu,gongbeishu;
	
	printf("请输入一个正整数m ");
	scanf("%d",&m);
	printf("请输入一个正整数n ");
	scanf("%d",&n);
	
	gongbeishu=m*n;
	while(gongyueshu=m%n)
	{
		m=n;
		n=gongyueshu;
	}
	gongbeishu=gongbeishu/n;
	printf("最大公约数为%d\n",n);
	printf("最大公倍数为%d",gongbeishu);
	return 0;
}
