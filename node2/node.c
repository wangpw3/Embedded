#include "node.h"

Node * Create() {
	Node * new = (Node *)malloc(SIZE);
	memset(new, 0, SIZE);
	return new;
}

void Add(Node * head) {
	Node * new = Create();
	printf("输入姓名:");
	scanf("%s", new->STU.name);
	printf("输入ID:");
	scanf("%d", &new->STU.id);
	
	Node * p = head;
	while(p->next != NULL) {
		p = p->next;
	}
	p->next = new;
}

void Ins(Node * head) {
	int idx, k;
	Node new = Create();
	printf("请输入要插入的ID:");
	scanf("%d", &idx);
	printf("要在ID:%d的 1.前 2.后 插入:", %d);
	scanf("%d", &k);
	Node * p = head;
	while(p->next != NULL) {
		if(p->next->STU.id == idx) {
			if(k == 1) {
				new->next = p->next;
				p->next = new->next;
			}
			else {
				new->next = p->next->next;
				p->next->next = new->next;
			}
		}
		p = p->next;
	}
}

void Del(Node * head) {
	int idx;
	printf("输入ID:");
	scanf("%d", &idx);
	Node * p = head;
	while(p->next != NULL) {
		if(p->next->STU.id == idx) {
			Node * tmp = p->next;
			p->next = tmp->next;
			free(tmp);
			printf("删除成功\n");
			return ;
		}
		p = p->next;
	}
	printf("查无此人\n");
}


void Mod(Node * head) {
	int idx;
	printf("输入ID:");
	scanf("%d", &idx);
	Node * p = head;
	while(p->next != NULL) {
		if(p->next->STU.id == idx) {
			printf("输入新名字:");
			scanf("%s", p->next->STU.name);
			printf("修改成功\n");
			return ;
		}
		p = p->next;
	}
	printf("查无此人\n");
}

void Find(Node * head) {
	int idx;
	printf("输入ID:");
	scanf("%d", &idx);
	Node * p = head;
	while(p->next != NULL) {
		if(p->next->STU.id == idx) {
			printf("ID: %d 的姓名: %s\n",p->next->STU.name);
			return ;
		}
		p = p->next;
	}
	printf("查无此人\n");
}

void Sort(Node * head) {
	int k;
	printf("0.从大到小 1.从小到大:");
	scanf("%d", &k);
	Node * i = head;
	while(i->next != NULL) {
		Node * j = i->next;
		while(j->next != NULL) {
			if(k ? i->next->STU.id < j->next->STU.id : i->next->STU.id > j->next->STU.id) {
				
			}
			j = j->next;
		}
		i = i->next;
	}
}






































