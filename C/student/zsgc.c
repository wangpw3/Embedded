#include <stdio.h>
#include <string.h>
#include "out.h"
#include "zsgc.h"

extern int l;
extern Student st[55];

int find() {
	int k;
	scanf("%d", &k);
	for(int i = 0; i < l; i++) {
		if(st[i].id == k) {
			return i;
		}
	}
	return -k;
}

void input(int x) {
	printf("输入学号：");
	int v = find();
	if(v >= 0) {
		printf("学号重复请重新输入！！\n");
		input(x);
	}
	else {
		st[x].id = -v;
		printf("输入姓名：");
		scanf("%s", st[x].name);
		printf("输入分数：");
		scanf("%f", &st[x].score);
	}
	return ;
}

void del() {
	printf("请输入要删除的学号：");
	int f = find();
	if(f >= 0) {
		for(int i = f; i < l; i++) {
			strcpy(st[i].name, st[i+1].name);
			st[i].id = st[i+1].id;
			st[i].score = st[i+1].score;
		}
		l--;
		printf("--------删除成功！！！--------\n");
	}
	else printf("查询无果！！！\n");
}

void modify() {
	printf("请输入要修改的学号：");
	int f = find();
	if(f >= 0) {
		input(f);
		printf("--------修改成功！！！--------\n");
	}
	else printf("查询无果！！！\n");
}

void find_name() {
	printf("请输入要查找的姓名关键字");
	char str[10];
	gets(str);
	int f = 0, str_len = strlen(str);
	for(int i = 0; i < l; i++) {
		int len = strlen(st[i].name);
		for(int j = 0; j < len; j++) {
			int k = 0;
			while(st[i].name[j+k] == str[k]) k++;
			if(k >= str_len) {
				f = 1;
				printf("%-5s%-5d%-5.2f\n",st[i].name, st[i].id, st[i].score);
				break;
			}
		}
	}
	if(!f) printf("查询无果！！！\n");
}



