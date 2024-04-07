#ifndef _ZSGC_H_
#define _ZSGC_H_

#include <stdio.h>
#include <string.h>

typedef struct {
	char name[30];
	int id;
	float mark;
}INF;

INF stu[50];
int n;


void Luru(int i);
void Add(void);
int Find(void);
void Change(void);
void Del(void);
void Ins(void);
void cmpstr(void);

#endif
