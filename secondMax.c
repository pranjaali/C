# C
all c programs for practice
#include<stdio.h>
int length;
int inpArr(int length,int *a)
{
    for(int i=0;i<length;i++)
    {
        scanf("%d",a);
        *a++;
    }
}
// maximum among the list of array
int max(int length,int *a)
{
    int max1=0,max2=0,temp;
    for(int i=0;i<length;i++,a++)
    {
        if(*a>max1)
        {   max2=max1;
            max1=*a;
            
        }
    }
    printf("second maximun is:>%d\nfirst maximum:>%d",max2,max1);
}
// -----------------entry point function------------
int main()
{
    scanf("%d",&length);
    int arr[length];
    inpArr(length,arr);
    max(length,arr);
   
}
