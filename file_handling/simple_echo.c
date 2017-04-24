#include<stdio.h>
#include<stdlib.h>
int main(int argc,char* argv[])
{
 char **p;
 for(p=argv+1;*p;(p++,(*p)?putchar(' '):0))
  printf("%s",*p);
 putchar('\n');
 return EXIT_SUCCESS;
}
