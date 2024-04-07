#include <stdio.h>
#include "jia.h"
#include "jian.h"
#include "cheng.h"
#include "chu.h"

P pp;

int main() {
	int a, b;
	printf("相加\n");
	scanf("%d %d", &a, &b);
	int v = Jia(a, b);
	printf("%d\n", v);
	
	printf("相减\n");
	float c, d;
	scanf("%f %f", &c, &d);
	float m = Jian(c, d);
	printf("%f\n", m);
	
	printf("相乘\n");
	scanf("%f %d", &pp.a, &pp.b);
	Cheng();
	
	printf("相除\n");
	scanf("%d %d", &a, &b);
	int x = Chu(a, b);
	printf("%d\n", x);
	
	return 0;
}
