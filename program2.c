12/04/2022

#include<stdio.h>
 int takeInpt();
 int Display(int);
 int Addition();
 int Subtraction();
//  ------------int main()--------------
// -entry point function----------------
// -------------------------------------
int main()
{
Addition();
Subtraction();
}
// ------------int takeInpt()-------------
// function to take input of number from user-
// ---------------------------------------
int takeInpt()
{   int number=0;
    printf("ENTER THE NUMBER:\n");
    scanf("%d",&number);
    return (number);
}
// ------------int Display()----------
// function to display the given number-
// -------------------------------
int Display(int output)
{
    printf("\n%d\n",output);
    return 0;

}
// -----------int  Addition--------------
// operation to add two numbers which are taken from user
// --------------------------------------
int Addition()
{    int iNo1,iNo2;
    iNo1=takeInpt();
    iNo2=takeInpt();
    int iAns=iNo1+iNo2;
    Display(iAns);
    return (0);
}
// --------------int subtraction-----------
// fuction to subtraction------------------

int Subtraction()
{
    int iNo1,iNo2;
    iNo1=takeInpt();
    iNo2=takeInpt();
    int iAns=iNo1-iNo2;
    Display(iAns);
    return (0);

}
