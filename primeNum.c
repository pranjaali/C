# C
all c programs for practice
// check prime number
#include<stdio.h>
// ----------------input ---------------------------
int input()
{
  int iNum=0;
  printf("\nEnter The Number:\n");
  scanf("%d",&iNum);
  return iNum;
}
// ----------------check prime number----------------
int primeNum(int iNum)
{
  int temp=0, iCnt=0;
  for(iCnt=1;iCnt<=(iNum/2);iCnt++)
  {
    if(iNum%iCnt==0)
    {
      printf("\n%d ",iCnt);
      temp++;
    }
  }
  if(temp==1)
  printf("\n%d is a prime number",iNum);
} 
// -----------------
int  main()
{
  primeNum(input());
  return 0;
}
