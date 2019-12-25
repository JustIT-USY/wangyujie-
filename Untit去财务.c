#include<stdio.h>
main()
{
  int x,b0,b1,b2,s;

  printf("inputx:");

  scanf("%d",&x);

  b2=x/100;
  b1=(x-b2*100)/10;
  b0=x%10;
  s=b0*100+b1*10+b2;


 printf("s=%d\n",s);


}

