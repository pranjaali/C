# C
all c programs for practice

#include<stdio.h>
// --------------------
int checkEven(int iNum)
{
    iNum%3==0?(iNum%5==0?printf("number is divided by 3 as well as 5\n"):printf("number is divided by 3\n")):iNum%5==0?printf("number is dividedby 5 but not by 3\n"):printf("number is not divided by 3&5\n");  
}

// --------------------
int main()
{int iNumber=0,iret;
    printf("enter the nuber\n");
    scanf("%d",&iNumber);
     
    iret=checkEven(iNumber);
      

}
