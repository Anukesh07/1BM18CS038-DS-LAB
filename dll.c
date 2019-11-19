#include<stdio.h>
struct node
{
	int data;
	struct node *next;
	struct node *prev;
}
typedef struct node *NODE;
NODE create()
{
	NODE p=(NODE)malloc(sizeof(struct node));
	if(p=NULL)
	{
		printf("Memory is not allocated");
		return NULL;
	}
	return p;
}
NODE insert_front(int item,node *head)
{
	NODE p=create();
	p->data=item;
	p->next=head;
	p->prev=NULL;
	if(head!=NULL)
		head->prev=p;
	head=p;
	return head;
}
NODE insert_end(int item,node *head)
{
	NODE p,q;
    q=create();
    q->data=item;
    q->next=NULL;
    if(head==NULL)
    {
    	q->prev=NULL;
    	head=q;
    	return;
    }
    while(p->next != NULL)
	{
		p=p->next;
	}
    p->next=q;
    q->prev=p;
	return;
}
