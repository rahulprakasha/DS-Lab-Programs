#include<stdio.h>
#include<stdlib.h>
int item,front=0,rear=-1,q[10],count=0,qSize=5;
void insert()
{
  if(count==qSize)
  {
    printf("queue overflow \n");
    return;
  }
  rear=(rear+1)%qSize;
  q[rear]=item;
  count++;
}
int delete()
{
  if(count==0)
  {
    return(-1);
  }
  item=q[front];
  front=(front+1)%qSize;
  count--;
  return(item);
}
void display()
{
  if(count==0)
  {
    printf("queue is empty \n");
    return;
  }
  printf("contents of queue :\n");
  int f=front;
  for(int i=1;i<=count;i++)
  {
    printf("\t%d \n",q[f]);
    f=(f+1)%qSize;
  }
}
int main()
{
  int n;
  for(;;)
  {
    printf("\n1.insert into queue \n2.delete from queue \n3.display \n4.exit\n>>");
    scanf("%d",&n);
    switch(n)
    {
      case 1:printf("enter item \n");
      scanf("%d",&item);
      insert();
      break;
      case 2:item=delete();
      if(item==-1)
      printf("queue is empty\n");
      else
      printf("deleted item : %d\n\n",item);
      break;
      case 3:display();
      break;
      default:exit(0);
    }
  }
}
