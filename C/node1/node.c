#include "node.h"

Node * Node_Create(void) {
	Node * p = (Node *)malloc(NODE_SIZE);
	memset(p, 0, NODE_SIZE);
	return p;
}

void Node_Add(Node * head) {
	Node * new = Node_Create();
	printf("输入\n");
	scanf("%s %d", new->stu.name, &new->stu.id);
	Node * p = head;
	while(p->next != NULL) {
		p = p->next;
	}
	p->next = new;
}

void Ins(Node * head) {
	int idx, k;
	printf("插入ID:");
	scanf("%d", &idx);
	printf("在%d的 1.前 2.后 插入:", idx);
	scanf("%d", &k);
	getchar();
	Node * new = Node_Create();
	printf("输入\n");
	scanf("%s %d", new->stu.name, &new->stu.id);
	
	Node * p = head;
	
	if(k == 1) {
		while(p->next != NULL) {
			if(p->next->stu.id == idx) {
				new->next = p->next;
				p->next = new;
				return;
			}
			p = p->next;
		}
		printf("查无此人!!!\n");
	}
	else {
		while(p->next != NULL) {
			if(p->next->stu.id == idx) {
				new->next = p->next->next;
				p->next->next = new;
				return;
			}
			p = p->next;
		}
		printf("查无此人!!!\n");
	}
	
}

void Print(Node * head) {
	Node * p = head;
	while(p->next != NULL) {
		printf("%s %d\n", p->next->stu.name, p->next->stu.id);
		p = p->next;
	}
}

void Find(Node * head) {
	int idx;
	printf("要查找的ID:");
	scanf("%d", &idx);
	Node * p = head;
	while(p->next != NULL) {
		if(p->next->stu.id == idx) {
			printf("%s %d\n", p->next->stu.name, p->next->stu.id);
			return;
		}
		p = p->next;
	}
	printf("查无此人!!\n");
}

void Delete(Node * head) {
	int idx;
	printf("要删除的ID:");
	scanf("%d", &idx);
	Node * p = head;
	while(p->next != NULL) {
		if(p->next->stu.id == idx) {
			Node * tmp = p->next;
			p->next = tmp->next;
			free(tmp);
			return ;
		}
		p = p->next;
	}
	printf("查无此人!!\n");
}

void Modify(Node * head) {
	int idx;
	printf("要查找的ID:");
	scanf("%d", &idx);
	Node * p = head;
	while(p->next != NULL) {
		if(p->next->stu.id == idx) {
			printf("姓名修改为:");
			scanf("%s", p->next->stu.name);
			return;
		}
		p = p->next;
	}
	printf("查无此人!!\n");
}

void Sort(Node * head) {
	Node * i = head;
	int k;
	printf("1.从小到大 2.从达到小:");
	scanf("%d", &k);
	if(k == 1) {
		while(i->next != NULL) {
			Node * j = i->next;
			while(j->next != NULL) {
				if(i->next->stu.id > j->next->stu.id) {
					struct info tmp = i->next->stu;
					i->next->stu = j->next->stu;
					j->next->stu = tmp;
				}
				j = j->next;
			}
			i = i->next;
		}
	}
	else {
		while(i->next != NULL) {
			Node * j = i->next;
			while(j->next != NULL) {
				if(i->next->stu.id < j->next->stu.id) {
					struct info tmp = i->next->stu;
					i->next->stu = j->next->stu;
					j->next->stu = tmp;
				}
				j = j->next;
			}
			i = i->next;
		}
	}
}










