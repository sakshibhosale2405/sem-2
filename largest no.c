#include<stdio.h>
int main()
{
  float a,b,c;
  printf("enter a value of a:");
  scanf("%f",&a);
  printf("enter a value of b:");
  scanf("%f",&b);
   printf("enter a value of c :");
   scanf("%f",&c);
  if (a>b)

  {
    if (a>c)
    printf("%f\n",a);
    else
    {
        printf("%f\n",b);
    }
  }
   
  else
   { if(c>b)
    printf("%f\n",c);
    else
    printf("%f\n",b);
   }
  
    
}    
