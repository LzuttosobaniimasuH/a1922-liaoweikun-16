#ifndef stack_h
#define stack_h

#include<stdio.h>
#include<stdlib.h>

typedef int dataType;

typedef struct node_{
	dataType data;
	struct node_*next;
}Node;

typedef struct list_{
	Node *head;
	Node *tail;
	Node *current;
}List;

void initList(List *);
void push(List *, dataType);
void pop(List *);
Node *getTop(List *);
int getLength(List *);
void dispList(List *);

#endif
