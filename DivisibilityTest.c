# C
all c programs for practice
#include<stdio.h>
int enter();
void display(int);
int divisibility(int);
int arr[8];
int i=0;

// ----------------

int main()
{ int iNum=0;
iNum=enter();

display(divisibility(iNum));
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
// ---------------divisibility test of number--------
int divisibility(int iNum)
{
   if(iNum%2==0)
   {
     arr[i]=2;
     i++;  
   } 
//    ------------------for 3
   int sum=0;
   while(iNum!=0)
   {
       
       sum=sum+(iNum%10);
       iNum=iNum/10;
   }
   if(sum%3==0)
   {
       arr[i]=3;
       i++;
       
   }
   if(sum%9==0)
   {
       arr[i]=9;
       i++;
       
   }
//    -----------9---------
   
//    -----------------------
int a=(iNum%100);
if(a%4==0)
{
    printf("%d",a);
    arr[i]=4;
    i++;
 } 
//  ------------------------5-----
if(iNum/10==0)
{
    arr[i]=10;
    i++;
   if(iNum/10==5)
     {
        arr[i]=5;
        i++;
      }
}

// -------------------------6-----------------------
if(arr[0]==2&&arr[1]==3)
{
    arr[i]=6;
    i++;
}
// ------------------------7------------------------

if(((iNum/10)-(2*(iNum%10)))%7==0)
{
    arr[i]=7;
    i++;
}
// 
// ------------------------8-------------------------

if(iNum<100)
{
    if(iNum%8==0)
    {
        arr[i]=8;
        i++;
    }
}
if(iNum>100)
{
    if((iNum%1000)%8==0)
    {
        arr[i]=8;
        i++;
    }
}



// ----------------------------
    printf("the diven number is divisible by :\n");
for(int j=0;j<i;j++)
{
printf("%d\n",arr[j]);
}
}
