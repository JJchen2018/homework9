#include <stdio.h>
int main()
{
	int m,n;
	int gongyueshu,gongbeishu;
	
	printf("������һ��������m ");
	scanf("%d",&m);
	printf("������һ��������n ");
	scanf("%d",&n);
	
	gongbeishu=m*n;
	while(gongyueshu=m%n)
	{
		m=n;
		n=gongyueshu;
	}
	gongbeishu=gongbeishu/n;
	printf("���Լ��Ϊ%d\n",n);
	printf("��󹫱���Ϊ%d",gongbeishu);
	return 0;
}
