#include "zsgc.h"


void Luru(int i)
{
	printf("输入姓名：");
	scanf("%s",stu[i].name);
	while(getchar()!='\n');
	
	printf("输入学号：");
	scanf("%d",&stu[i].id);
	while(getchar()!='\n');
	
	printf("输入成绩：");
	scanf("%f",&stu[i].mark);
	while(getchar()!='\n');
}

void Add(void)
{
	int val = 0;
	printf("想要添加的学生信息个数：");
	scanf("%d",&val);
	while(getchar()!='\n');
	for(int i=0;i<val;i++)
	{
		Luru(n);
		n++;
		printf("输入已完成\n");
	}
}

int Find(void)
{
	int id = 0;
	printf("请输入想要查询的学号：");
	scanf("%d", &id);
	while(getchar()!='\n');
	for(int i=0;i<n;i++)
	{
		if(id == stu[i].id)
		{
			printf("%s%s%s\n","姓名","学号","成绩");
			printf("%s %d %.1f\n",stu[i].name,stu[i].id,stu[i].mark);
			return i;
		}
	}
	printf("查无此人\n");
	return -1;
}

void Change(void)
{
	int ret = Find();
	if(ret == -1)
	{
		printf("修改失败\n");
		return ;
	}
	Luru(ret);
	printf("修改成功\n");
}

void Del(void)
{
	int ret = Find();
	if(ret == -1)
	{
		printf("删除失败\n");
		return ;
	}
	for(int i=ret;i<n-1;i++)
	{
		stu[i]=stu[i+1];
	}
	n--;
	printf("删除成功\n");
}

void Ins(void)
{
	int val = 0;
	int ret = Find();
	if(ret == -1)
	{
		printf("插入失败\n");
		return ;
	}
	printf("1.前 2.后\n");
	scanf("%d",&val);
	while(getchar()!='\n');
	if(val == 1)
	{
		ret--;
	}
	for(int i=n;i>ret+1;i--)
	{
		stu[i]=stu[i-1];
	}
	Luru(ret+1);
	n++;
	printf("插入成功\n");
}

//字符串检索
void cmpstr(void)
{
	char name[30]={0};//12223
	int i=0,j=0,k=0;
	gets(name);//23
	for(i=0;i<n;i++)////遍历数组中所有的姓名
	{
		j=0;
		while(stu[i].name[j]!='\0')//遍历姓名中的每个字符
		{
			if(stu[i].name[j]==name[0])//如果姓名中出现了与关键字第一个字符相同的
			{
				k=0;
				while(name[k]!='\0')//遍历关键字中的每个字符
				{
					if(stu[i].name[j+k]!=name[k])//如果遍历过程中出现了不同字符，则立即结束遍历，
												//重新回到姓名字符遍历中比较下一个字符
					{
						break;
					}
					k++;
				}
				if(name[k]=='\0')
				{
					printf("%s\n",stu[i].name);
					break;
				}
			}
			j++;
		}
	}
}
