#include <stdio.h>
#include "node.h"

int main() {
	Node * head = NULL;
	head = Node_Create();
	
	while(1) {
		printf("1.添加 2.插入 3.删除 4.修改 5.查找 6.排序 7.输出\n");
		int k;
		scanf("%d", &k);
		switch(k) {
			case 1: Node_Add(head);break;
			case 2: Ins(head);break;
			case 3: Delete(head);break;
			case 4: Modify(head);break;
			case 5: Find(head);break;
			case 6: Sort(head);break;
			case 7: Print(head);break;
			default: return 0;
		}
	}
	
	
	return 0;
}
