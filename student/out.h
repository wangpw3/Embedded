#ifndef _OUT_H
#define _OUT_H

typedef struct {
	int id;
	float score;
	char name[110];
} Student;

typedef struct {
	char id[10];
	char pd[10];
} User;

extern Student st[55];
extern int l;

void out_all();
void find_id();
void out_id();
void order();
void desc();

#endif
