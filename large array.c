 #include<stdio.h>
#include<conio.h>
int main()
{
int a[50],i,n,large,small;
printf("How many elements:");
scanf("%d",&n);
printf("Enter the array:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
large=small=a[0];
for(i=1;i<n;i++)
{
if(a[i]>large)
large=a[i];
if(a[i]<small)
small=a[i];
}
printf("The largest element:%d",large);
printf("\nThe smallest element:%d",small);
getch();
return 0;
}
