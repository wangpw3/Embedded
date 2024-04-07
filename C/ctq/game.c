#include "game.h"


int mode(int val,int res)
{
	int r1=0,r2=0;
	int con=-1;
	int ret=0;
	//1.模式选择
	switch(val)
	{
		case 0:return 0;
		case 1:r1=10;r2=2;break;//2.设置参数
		case 2:r1=100;r2=4;break;
		case 3:r1=1000;r2=4;break;
		default:break;
	}
	//3.题目数量设置
	if(val!=3)
	{
		printf("输入题目数量：");
		scanf("%d",&con);
		getchar();
	}
	//4.出题
	ret=chuti(r1,r2,con);
	MARK[res]=ret;
	printf("得分：%d!\n",ret);
}

int chuti(int r1,int r2,int con)
{
	int ai_val=0;
	float val=0;
	int mark=0,mark_=0;
	int a=0,b=0,c=0;
	for(int i=0;i!=con;i++)
	{
		c=rand()%r2;
		a=rand()%r1;
P:		b=rand()%r1;
		switch(c)
		{
			case 0://+
				printf("%d+%d=",a,b);
				ai_val=(a+b)*100;
				break;
			case 1:
				printf("%d-%d=",a,b);
				ai_val=(a-b)*100;
				break;
			case 2:
				printf("%d*%d=",a,b);
				ai_val=(a*b)*100;
				break;
			case 3:
				if(b==0)
				{
					goto P;
				}
				printf("%d/%d=",a,b);
				ai_val=(int)(a*100.0/b+0.5);
				break;
		}
		scanf("%f",&val);
		getchar();
		if(val>99999999)
		{
			return mark;
		}
		if(val>0?(int)(val*100+0.5)==ai_val:(int)(val*100-0.5)==ai_val)
		{
			mark++;
		}
		else
		{
			mark_++;
			if(mark_==3&&con==-1)
			{
				break;
			}
		}
	}
	return mark;
}


