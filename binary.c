#include<stdio.h>
#include<conio.h>

int Binarys(int[10],int,int);
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
pos=Binarys(a,n,k);
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
int Binarys(int a[],int n,int k)
{
int F,L,M;
F=0;L=n-1;
while(L>=F)
{
M=(F+L)/2;
if(k<a[M])
L=M-1;
else if(k>a[M])
L=M+1;
else if(k==a[M])
return M;
}
return -1;
}
