#include<stdio.h>
#include<stdlib.h>
#define QUE_SIZE 3
int item,front=0,rear=-1,q[10];		
void insertrear()
{if(rear==QUE_SIZE-1)
{
	printf("queue overflow\n");
	return;
}
rear=rear+1;
q[rear]=item;
}int deletefront()
{if (front>rear)
{front=0;
rear=-1;
return -1;
}return q[front++];
}void displayQ()
{int i;
if (front>rear)
{
	printf("queue is empty\n");
	return;
}
printf("contents of queue\n");
for(i=front;i<=rear;i++)
{
	printf("%d\n",q[i]);
}}
int main()
{
	int choice;
	for(;;)
	{
		printf("1:insertrear 2:deletefront 3:display 4:exit\n");
		printf("enter the choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("enter the item to be inserted\n");
			scanf("%d",&item);
			insertrear ();
			break;
			case 2:item=deletefront();
			if(item==-1)
			printf("queue is empty\n");
			else
			printf("item deleted=%d\n",item);
			break;
			case 3:displayQ();
			break;
			default:exit (0);	
			
		}
	
	}
	}