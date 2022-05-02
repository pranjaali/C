# C
all c programs for practice
// Check whether the given number is amstrong or not

#include<stdio.h>
// ------------------------
// function takes the number and returns the count of number of digits of given number:
int countDigits(int iNum)
{
	int i=0;
	while(iNum!=0)
	{
		iNum=iNum/10;
		i++;
	}
	return i;

}
// -----------------------
// function takes two parameters of(number and its digit count ) and returns  the number^power,
int power(int iNum,int power)
{
	int ans=1;
	for(int i=0;i<power;i++)
	{
		ans=ans*iNum;

	}
	// printf("\n%d",ans);
	return ans;
}
// -------------------------
// the function takes two parameters number and count its of digits and returns is it  amstrong number or not.
int checkAmstrong(int iNum,int count)
{
	int temp,new=0,ans=0;
	temp=iNum;

	while(temp!=0)
	{
		new=temp%10;
		ans=ans+power(new,count);
		temp=temp/10;
	}
	// printf("\n%d",ans);
	// -----------------
	if(ans==iNum)
	{
		printf("\n%d is a amstrong Number:",ans);
     }
	else
	{
		printf("\n%d is not a Amstrong Number:\n",iNum);
	}
	// -----------------
	return ans;

}
// -----------------------
// main--entry point function,
int main()
{
	int iNum,count=0,ans=0;
	printf("Enter the number:\n");
	scanf("%d",&iNum);
	count=countDigits(iNum);
	// printf("\n%d\n",count);
	checkAmstrong(iNum,count);
	// power(2,3);

	return (0);
}

