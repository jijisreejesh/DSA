#include<stdio.h>
#define MAX 50
 int a[MAX],x,i,val,n,p;
 void create();
 void display();
 void insert();
 void delete();
void main()
{
   create();
   display();
   insert();
   printf("After insertion ");
   display();
   delete();
   printf("After deletion ");
   display();
}
void create()
{
     printf("Enter number of elements : ");
     scanf("%d",&n);
     printf("Enter the elements : ");
     for(i=0;i<n;i++)
     {
        scanf("%d",&a[i]);
     }
}
void display()
{
    printf("The elements in array : \n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}
void insert()
    {
        printf("Enter the position where we want to insert : ");
        scanf("%d",&p);
         printf("Enter the new value : ");
        scanf("%d",&val);
        for(i=n;i>p-1;i--)
        {
            a[i]=a[i-1];
        }
        n=n+1;
        a[p-1]=val;
    }
    void delete()
    {
        printf("Enter the position where we want to delete : ");
        scanf("%d",&p);
        for(i=p-1;i<n;i++)
        {
            a[i]=a[i+1];
        }
        n=n-1;
       
    }

