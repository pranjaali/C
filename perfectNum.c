# C
all c programs for practice
// perfect number is a number whose additionof its factors is equal to itself;
// also displays the sum at every iteration
// in the range 1-1000   6,28,496,8128are perfect numbers

#include <stdio.h>
//input function--
int factors(int iNum)
{

  int temp = 0, sum = 0;
  printf("foctors are:\n");
  //to check factorials
  for (int i = (iNum / 2); i >= 1, sum < iNum; i--)//ifsum of factors of any number is greater than the number so we wil not check the nxt conditions 
  {
    if (iNum % i == 0)
    {
      //print factorial
      printf("%d\n", i);
      sum = sum + i;
      temp++;

      if (sum)
      {
        printf("---%d\n", sum);
      }
      // printf("%d",temp);
    }
  }
  if (sum == iNum)
  {
    printf("%d is a perfect number\n", sum);
  }
  if (temp == 1)
  {
    printf("\n%d is a prime number:\n", iNum);
  }
  else
  {
    printf("\n%d is composite\n", iNum);
  }
}
//factorial
int factorial(int iNum)
{
  int iFact = 1;
  for (int iCnt = 1; iCnt <= iNum; iCnt++)
  {
    iFact = iFact * iCnt;
  }
  printf("\n\n%d\n", iFact);
}

//input function---

int input()
{
  int iNum = 0;
  printf("ENter the number:\n");
  scanf("%d", &iNum);
  //return that number
  return iNum;
}
int main()
{
  int Number;
  Number = input();
  factors(Number);
  // factorial(Number);
};
