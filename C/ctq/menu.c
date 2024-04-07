#include "menu.h"

int n=0;
int MARK[5]={0};
int zhanghao[5]={0};
char mima[5][20]={0};

int menu1(void)
{
	int val=0;
	system("clear");
	printf("0.退出 1.注册 2.登录 3.注销 4.排行\n");
	scanf("%d",&val);
	getchar();
	return val;
}

int menu2(void)
{
	int val=0;
	system("clear");
	printf("0.返回 1.简单模式 2.困难模式 3.无尽模式\n");
	scanf("%d",&val);
	getchar();
	return val;
}

int zhuce(void)
{
	if(n>=5)
	{
		printf("账号已满!\n");
		return -1;
	}
	zhanghao[n]=rand()%9000+1000;
	printf("账号：%d\n",zhanghao[n]);
	printf("设置密码:");
	gets(mima[n]);
	n++;
	return 0;
}

int yanzheng(void)
{
	int zz=0;
	char mm[20]={0};
	int i=0;
	printf("输入账号:");
	scanf("%d",&zz);
	getchar();
	printf("输入密码:");
	gets(mm);
	for(i=0;i<n;i++)
	{
		if(zz==zhanghao[i])
		{
			break;
		}
	}
	if(i==n)
	{
		printf("账号错误!\n");
		return -2;
	}
	if(strcmp(mima[i],mm)!=0)
	{
		printf("密码错误!\n");
		return -2;
	}
	
	return i;
}

int zhuxiao(void)
{
	int ret=0;
	if(n<=0)
	{
		return -1;
	}
	ret=yanzheng();
	if(ret<0)
	{
		return -2;
	}
	if(ret!=4)
	{
		for(int j=ret;j<n;j++)
		{
			zhanghao[j]=zhanghao[j+1];
			MARK[j]=MARK[j+1];
			strcpy(mima[j],mima[j+1]);
		}
	}
	n--;
	return 0;
}

int paihang(void)
{
	if(n<=0)
	{
		printf("暂无排行!\n");
	}
	printf("%-5s:%s\n","账号","分数");
	for(int i=0;i<n;i++)
	{
		printf("%-5d:%d\n",zhanghao[i],MARK[i]);
	}
}

