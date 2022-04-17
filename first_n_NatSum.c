#include<stdio.h>
int enter();
void display(int);
int first_n_NatSum(int);
int first_n_natSum(int);
int main()
{ int iNum=0;
iNum=enter();
display(first_n_NatSum(iNum));
display(first_n_natSum(iNum));
return 0;
}
// ----------------enter()
int enter()
{   int iNum=0;
    printf("please enter the number:\n");
    scanf("%d",&iNum);
    return iNum;
}
// ------------------------display
void display(int output)
{
    printf("\t%d",output);
}
// -----------------int first-n-natSum(int); using formula------
int first_n_NatSum(int iNum)
{
  return (iNum*(iNum+1)/2);
}
// -----------------int not using formula--
int first_n_natSum(int iNum)
{
int sum=0;
for(int i=1;i<=iNum;i++)
{
    sum+=i;

}
return sum;

}
