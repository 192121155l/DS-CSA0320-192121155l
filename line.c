#include<stdio.h>
#include<conio.h>

int linear(int[10],int,int);
main()
{
int a[10],n,k,i,pos=-1;
clrscr();
printf("Enter the element N");
scanf("%d",&n);
printf("Enter the array element");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the search key");
scanf("%d",&k);
pos=linear(a,n,k);
if(pos!=-1)
{
printf("Available in  list %d",pos);
}
else
{
printf("Not Available in the list");
}
getch();
return 0;
}
int linear(int a[],int n,int k)
{
int i;
for(i=0;i<n;i++)
{
if(a[i]==k)
return(i);
}
return -1;
}
Footer
