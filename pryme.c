#include <stdio.h>
void main()
{
   int m,i;
   printf("Enter the value for a:");
   scanf("%d",&m);
   for(i=2;i<=m;i++)
   {
     if(m%i==0)
     break;
   }
     if(m==i)
     printf("%d is a prime number",m);
     else
     printf("%d is a not prime number",m);
}
