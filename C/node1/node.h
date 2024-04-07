#ifndef _NODE_H_
#define _NODE_H_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define NODE_SIZE sizeof(Node)

struct info {
	char name[30];
	int id;
};

typedef struct node {
	struct info stu;
	struct node * next;
} Node;

Node * Node_Create(void);
void Node_Add(Node * head);
void Print(Node * head);
void Find(Node * head);
void Delete(Node * head);
void Modify(Node * head);
void Sort(Node * head);
void Ins(Node * head);

#endif
