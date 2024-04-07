#include "ps.h"

void Prt(void)
{
	if(n == 0)
	{
		printf("暂无信息\n");
		return ;
	}
	printf("%s%s%s\n","姓名","学号","成绩");
	for(int i=0;i<n;i++)
	{
		printf("%s %d %.1f\n",stu[i].name,stu[i].id,stu[i].mark);
	}
	printf("打印完成\n");
}


void Sort(void)
{
	if(n == 0)
	{
		printf("暂无信息\n");
		return ;
	}
	int val = 0;
	INF tmp = {0};
	printf("0.小到大 1.大到小\n");
	scanf("%d",&val);
	while(getchar()!='\n');
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			if(val?(stu[j].mark<stu[j+1].mark):(stu[j].mark>stu[j+1].mark))
			{
				tmp = stu[j];
				stu[j] = stu[j+1];
				stu[j+1] = tmp;
			}
		}
	}
	printf("排序完成\n");
}

char mima[30]="123456";
int denglu(void)
{
	char mm[30]={0};
	int i=0;
p:	printf("输入登录密码\n");
	gets(mm);
	if(strcmp(mm,mima)==0)
	{
		printf("密码正确，登录成功\n");
		return 0;
	}
	else
	{
		printf("密码错误，登录失败\n");
		if(i<3)
		{
			i++;
			goto p;
		}
	}
	return -1;
}

char menu(void)
{
	char val = 0;
	printf("0.退出\t");
	printf("1.新增\t");
	printf("2.打印\n");
	printf("3.查询\t");
	printf("4.修改\t");
	printf("5.删除\n");
	printf("6.插入\t");
	printf("7.排序\t");
	printf("8.姓名检索\n");
	scanf("%c", &val);
	while(getchar()!='\n');
	return val;
}

