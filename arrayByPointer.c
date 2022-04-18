# C
all c programs for practice
// ---------------------program in C to store n elements in an array and print the elements using pointer
#include<stdio.h>

// -----------------------

int main()
{
    int num,iNum;
    int *ptr;
    ptr=&iNum;
    int arr[num];
    int *qtr;
    qtr=arr;
    printf("enter the number:\n");
    scanf("%d",&iNum);
    
    for(int i=0;i<*ptr;i++)
    {
        printf("enter the elements:\n");
        scanf("%d",&arr[i]);
    }

    for(int j=0;j<(*ptr);(*ptr)--,(*qtr)++)
    {
        printf("%d",(*qtr));
    }
}
