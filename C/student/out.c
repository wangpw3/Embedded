#include <stdio.h>
#include <string.h>
#include "zsgc.h"
#include "out.h"

void out_all() {
	
	printf("0.输出\n1.按成绩从小到大排序后输出\n2.按成绩从大到小排序后输出\n");
	int f;
	scanf("%d", &f);
	if(f == 1) order();
	if(f == 2) desc();
	printf("--------------------\n");
	printf("姓名 学号 分数\n");
	for(int i = 0; i < l; i++) {
		printf("%-5s%-5d%-5.2f\n",st[i].name, st[i].id, st[i].score);
	}
	printf("--------------------\n");
}


void out_id() {
	printf("请输入要输出的学号：");
	int f = find();
	if(f >= 0) {
		printf("--------------------\n");
		printf("姓名 学号 分数\n");
		printf("%-5s%-5d%-5.2f\n",st[f].name, st[f].id, st[f].score);
		printf("--------------------\n");
	}
	else printf("查询无果！！！\n");
}

void order() {
	for(int i = 0; i < l; i++) {
		for(int j = i+1; j < l ; j++) {
			if(st[i].score > st[j].score) {
				int tmp;
				char temp[110];
				strcpy(temp, st[i].name);
				strcpy(st[i].name, st[j].name);
				strcpy(st[j].name, temp);
				tmp = st[i].id;
				st[i].id = st[j].id;
				st[j].id = tmp;
				tmp = st[i].score;
				st[i].score = st[j].score;
				st[j].score = tmp;
			}
		}
	}
}

void desc() {
	for(int i = 0; i < l; i++) {
		for(int j = i+1; j < l ; j++) {
			if(st[i].score < st[j].score) {
				int tmp;
				char temp[110];
				strcpy(temp, st[i].name);
				strcpy(st[i].name, st[j].name);
				strcpy(st[j].name, temp);
				tmp = st[i].id;
				st[i].id = st[j].id;
				st[j].id = tmp;
				tmp = st[i].score;
				st[i].score = st[j].score;
				st[j].score = tmp;
			}
		}
	}
}

