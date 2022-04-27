# C

all c programs for practice
#include <stdio.h>
<!--  -->to reverse the number
// ---------------------------
int input()
{
  int iNum = 0;
  printf("ENTER THE NUMBER:\n");
  scanf("%d", &iNum);
  return iNum;
}
// ----------------------------
int RevNum(int iNum)
{
  int j, new = 0;

  int temp = iNum;
  while (temp != 0)
  {
    j = temp % 10;
    new = new * 10 + j;

    temp = temp / 10;
  }
  printf("\n\n%d", new);
}
// ----------------------------
int main()
{
  RevNum(input());
  return 0;
}
