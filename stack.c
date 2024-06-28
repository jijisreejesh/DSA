#include<stdio.h>
#define MAX 50
 int a[MAX],i,top=-1;
 void push();
 void display();
 void pop();
void main()
{
    int ch=0;
  while(ch!=4)
  {
   printf("1.push 2.display 3.pop 4.exit \nEnter the choice : ");
   scanf("%d",&ch); 
   switch(ch)
   {
    case 1:
            push();break;
     case 2:
            display();break;
     case 3:
            pop();break;
     case 4:
            exit(1);
    default:
           printf("Invalid choice\n");

   }
  }
}
void push()
{
    top=top+1;
    printf("Enter the element to stack : ");
    scanf("%d",&a[top]);   
}
void display()
{
    printf("\nThe elements in stack : ");
    if(top==-1)
        printf("\nStack is empty");
    else
    { 
         for(i=0;i<=top;i++)
         {
             printf("%d ",a[i]);
         }
         printf("\n");
    }
}
void pop()
    {
        if(top==-1)
            printf("Empty stack");
        else
        { 
              top=top-1;
        }
    }
          
    

