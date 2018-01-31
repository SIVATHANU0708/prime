#include<stdio.h>
int main()
{
int n,i,remainder;
printf("enter the number:");
scanf("%d",&n);
  for(i=2;i<=n;i++)
  {
    remainder=n%i;
  }
  if(remainder!=0)
  
    printf("the number is prime");
    else
printf("the number is not prime");
}
return 0;
}

