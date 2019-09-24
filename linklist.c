#include<stdio.h>
#include<stdlib.h>
struct list 
{
	int data;
	struct list *next;
};
typedef struct list* NODE;
NODE create()
{
	NODE p;
	p=(NODE)malloc(sizeof(struct list));
	if(p==NULL)
	{
	 printf("Memory not allocated\n");
	 return NULL;
	}
	else
		return p;
}
NODE insertfront(int item,NODE head)
{
	NODE p=create();
	p->data=item;
	p->next=head;
	head=p;
	return head;
}
NODE insertpos(NODE head,int item,int pos)
{
	NODE p=create(),curr=head,prev=NULL;
	int count=1;
	p->data=item;
	p->next=NULL;
	if(head==NULL)
	{
		if(pos==1)
		{
			return p;
		}
		else
		{
			printf("Invalid position\n");
			return head;
		}
	}
	if(pos==1)
	{
		p->next=head;
		head=p;
		return head;
	}
	else
	{
		curr=head;
		while(curr!=NULL && count!=pos)
		{
			prev=curr;
			curr=curr->next;
			count++;
		}
		if(count==pos)
		{
			prev->next=p;
			p->next=curr;
			return head;
		}
		else
		{
			printf("Invalid position\n");
		}
	}
}
void display(NODE head)
{ 	
	NODE p;
	if(head==NULL)
	{ 
	 printf("List is empty\n");
	 exit(0);
	}	
	p=head;
	while(p!=NULL)
	{
	 printf("%d\n",p->data);
	 p=p->next;
	}
}
void insertend(int item,NODE head)
{
	NODE p,q;
	q=create();
	q-> data=item;
	p=head;
	while(p->next!=NULL)
	{
	 p=p->next;
	}
	p->next=q;
	q->next=NULL;
}
int main()
{
	NODE head=NULL;
	int x,item,pos,p=1;
	do
	{
		printf("Enter your choice\n");
		printf("1 to insert at 1st position, 2 to insert at a given position, 3 to enter at the end, 4 to display and 0 to exit\n");
		scanf("%d",&x);
		switch(x)
		{
			case 1:printf("Enter the element to be inserted\n");
				  scanf("%d",&item);
				  head=insertfront(item,head);
				  break;
			case 2:printf("Enter the element to be inserted\n");
				   scanf("%d",&item);
				   printf("Enter the position of the element\n");
				   scanf("%d",&pos);
				   head=insertpos(head,item,pos);
				   break;
			case 3:printf("Enter the element to be inserted\n");
				   scanf("%d",&item);
				   insertend(item,head);
				   break;
			case 4:display(head);
				   break;
			default:printf("Enter valid response\n");
		}
		printf("Enter 1 to continue\n");
		scanf("%d",&p);
	}while(p==1);
	return 0;
}
