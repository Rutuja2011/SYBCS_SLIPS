#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
# define NODEALLOC (struct node *)malloc(sizeof(struct node));
struct node 
{
	int data;
	struct node *next;
};
struct node *p,*front,*rear;
void init()
{
	front=rear=NULL;
}
int isempty()
{
	if (front==NULL)
	  return 1;
	else
	   return 0;
}
void display()
{
	for(p=front;p!=NULL;p=p->next)
    {
    	printf("%d\t",p->data);
	}
}
void enqueue(int num)
{
	p=NODEALLOC;
	p->next=NULL;
	p->data=num;
	if(front==NULL)
	{
		front =rear=p;
	}
	else
	{
		rear->next=p;
		rear=p;
	}
}
void dequeue()
{
	int num;
	if(isempty())
	{
		printf("queue is underflow");
	}
	else
	{
		p=front;
		num=front->data;
		front=front->next;
		free(p);
		printf("\ndeleted queue=%d",num);
	}
}
int peek()
{
	return front->data;
}
int main()
 {
 	int num,ch;
 	init();
 	do
 	{
 		printf("\n1-enqueue \n2-dequeue \n3 display \n4-peek \n5-exit");
 		printf("\nenter choice: ");
 		scanf("%d",&ch);
 	     switch(ch)
 	     {
 	     	case 1:printf("enter number:");
 	     	       scanf("%d",&num);
 	     	       enqueue(num);
 	     	       break;
 	        case 2:dequeue();
 	                break;
 	        case 3:display();
 	               break;
 	        case 4:printf("top element =%d",peek());
 	               break;
 	        case 5:exit(0);
 	               break;
 	   default:printf("invalid choice.....");
		 }
	 }while(ch<6);
 }
