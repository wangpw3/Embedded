#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ps.h"
#include "zsgc.h"


extern INF stu[50];
extern int n;

int main()
{
	char ret = 0;
	ret = denglu();
	if(ret == -1)
	{
		return 0;
	}
	while(1)
	{
		ret = menu();
		switch(ret)
		{
			case '0': return 0;
			case '1': Add();
			break;
			case '2': Prt();
			break;
			case '3': Find();	
			break;
			case '4': Change();	
			break;
			case '5': Del();	
			break;
			case '6': Ins();	
			break;
			case '7': Sort();	
			break;
			case '8': cmpstr();	
			break;
			default:
			break;
		}
		printf("按下回车键继续运行...\n");
		while(getchar()!='\n');
	    system("clear");	
	}
	
	return 0;
}
