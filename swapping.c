# C
all c programs for practice
// ----------SWAPING USING POINTER AND WITHOUT 3RD VARIABLE:

#include<stdio.h>

// -------------------------------------
int addition(int *iPtr,int *iQtr);



// -------------------------------------
int main()
{
  int a=10,b=23;  
  addition(&a,&b);  
    
  return 0;
}
// -------------------------------------
int addition(int *iPtr,int *iQtr)
{

*iPtr=*iPtr+*iQtr;
*iQtr=*iPtr-*iQtr;
*iPtr=*iPtr-*iQtr;


printf("%d\n%d",*iPtr,*iQtr);
}
