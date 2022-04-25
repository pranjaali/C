# C
all c programs for practice
#include<stdio.h>
//input function--
int factors(int iNum)
{     
      printf("foctors are:\n");
      //to check factorials
for(int i=1;i<=(iNum/2);i++)
{
  if(iNum%i==0)
  {
    //print factorial
    printf("%d\n",i);
  }
}
//input function---
}
int input()
{
  int iNum=0;
  printf("ENter the number:\n");
  scanf("%d",&iNum);
  //return that number
  return iNum;
}
int main()
{
  int Number;
  Number=input();
  factors(Number);

};
