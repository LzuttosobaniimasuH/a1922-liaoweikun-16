#include"stack.h"

void initList(List *list){
	list->head=NULL;
	list->tail=NULL;
	list->current=NULL;
	return;
}

void push(List *list,dataType data){
	Node *node=(Node *)malloc(sizeof(Node));
	node->data=data;
	node->next=NULL;

	if(list->head==NULL){
		list->tail=node;
	}else{
		node->next=list->head;
	}
	list->head=node;
	return;
}

void pop(List *list){
	list->head=list->head->next;

	return;
}

Node *getTop(List *list){
	Node *node=(Node *)malloc(sizeof(Node));
	node=list->head;

	return node;
}

int getLength(List *list){
	Node *node=(Node *)malloc(sizeof(node));
	node=list->head;
	int i=0;
	while(node !=NULL){
		node=node->next;
		i++;
	}
	return i;
}

void dispList(List *list){
	Node *node=(Node *)malloc(sizeof(Node));
	node=list->head;
	int i=0;
	while(node !=NULL){
		printf("the %dth node:%d\n",i+1,node->data);
		node=node->next;
		i++;
	}
	printf("Display finished!\n");

	return;
}
