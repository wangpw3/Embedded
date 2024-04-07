#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "zsgc.h"
#include "out.h"

Student st[55];
User dl, ln[10] = {"admin", "admin"};

int l = 0;

void menu() {
	while(1) {
		int k;
		printf("1.输入信息\n2.输出所有人员信息\n3.输入ID查询\n4.输入姓名关键词查询\n5.输入ID修改\n6.输入ID删除\n0.登出\n");
		scanf("%d", &k);
		while(getchar() != '\n');
		if(k == 1) input(l++);
		else if(k == 2) out_all();
		else if(k == 3) out_id();
		else if(k == 4) find_name();
		else if(k == 5) modify();
		else if(k == 6) del();
		else return ;
	}
}


int main() {
	int f, lid = 1;
	while(1) {
		printf("1.登陆\n2.注册\n0.退出\n");
		scanf("%d", &f);
		getchar();
		if(f == 1) {
			printf("输入账号：");
			gets(dl.id);
			if(strcmp(dl.id, ln[0].id)) {
				printf("账号错误！！！\n");
				continue;
			}
			printf("输入密码：");
			gets(dl.pd);
			if(strcmp(dl.pd, ln[0].pd)) {
				printf("密码错误！！！\n");
				continue;
			}
			else {
				printf("欢迎光临！！！\n");
				menu();
			}
		}
		else if(f == 2) {
			printf("输入账号：");
			gets(ln[lid].id);
			printf("输入密码：");
			gets(ln[lid++].pd);
		}
		else return 0;
	}
	return 0;
}





