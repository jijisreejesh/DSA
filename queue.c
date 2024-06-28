#include<stdio.h>
#define MAX 50
 int a[MAX],i,front=-1,rear=-1,num;
 void enqueue();
 void display();
 void dequeue();
void main()
{
    int ch=0;
  while(ch!=4)
  {
   printf("\n1.Enter 2.Display 3.Delete 4.exit \nEnter the choice : ");
   scanf("%d",&ch); 
   switch(ch)
   {
    case 1:
            enqueue();break;
     case 2:
            display();break;
     case 3:
            dequeue();break;
     case 4:
            exit(1);
    default:
           printf("Invalid choice\n");

   }
  }
}
void enqueue()
{
    if(rear==MAX-1)
    {
        printf("Queue is full");
    }
    else
    {
        if(front==-1)
            front=0;
        printf("Enter the element to queue : ");
        scanf("%d",&num); 
        rear++;
        a[rear]=num;
    }
}
void display()
{
    
    if(front==-1 || front>rear)
        printf("\nQueue is empty");
    else
    { 
        printf("\nThe elements in stack : ");
         for(i=front;i<=rear;i++)
         {
             printf("%d ",a[i]);
         }
         printf("\n");
    }
}
void dequeue()
    {
        if(front==-1 || front>rear)
            printf("Empty queue\n");
        else
        { 
              printf("Element from front end %d is deleted.\n",a[front]);
              front++;
        }
    }
          
    

