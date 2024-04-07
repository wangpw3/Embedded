#include "menu.h"
#include "game.h"

int main()
{
	int ret=0,res=0;
	srand(time(0));
	while(1)
	{
		ret=menu1();
		switch(ret)
		{
			case 0:return 0;
			case 1:zhuce();break;
			case 2:
				ret=yanzheng();
				if(ret>=0)
				{
					printf("登录成功!\n");
					while(1)
					{
						res=menu2();
						if(res==0)
						{
							break;
						}
						mode(res,ret);
						printf("按下回车键继续...");
						getchar();
					}
				}
				break;
			case 3:zhuxiao();break;
			case 4:paihang();break;
			default:break;
		}
		printf("按下回车键继续...");
		getchar();
	}
	
	return 0;
}
