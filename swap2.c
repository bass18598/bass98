#include <stdio.h>
main()
{
  int a,b;
  printf("enter the number:");
  scanf("%d%d",&a,&b);
  {
    printf("before swap");
    printf("value of a=%d,a");
    printf("value of b=%d,b");
    {
      a=a^b;
      b=a^b;
      a=a^b;
    }
  
    printf("after swap");
    printf("value of a=%d,a");
    printf("value of b=%d,b");
  }
}
