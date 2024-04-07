#ifndef _NODE_H_
#define _NODE_H_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE sizeof(Node);

typedef struct {
	int id;
	char name[15];
} info;

typedef struct node {
	struct info STU;
	struct node * next;
} Node;


#endif
