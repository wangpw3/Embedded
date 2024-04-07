#include "node.h"

int main() {
	int k;
	Node * head = Create();
	while(1) {
		printf("1.添加  2.插入  3.删除  4.修改\n5.查询  6.排序  7.打印 0.退出\n");
		scanf("%d", &k);
		switch(k) {
			case 1: Add(head);break;
			case 2: Ins(head);break;
			case 3: Del(head);break;
			case 4: Mod(head);break;
			case 5: Find(head);break;
			case 6: Sort(head);break;
			case 7: Print(head);break;
			default : return 0;
		}
	}
}
