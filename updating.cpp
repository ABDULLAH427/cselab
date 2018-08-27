#include<stdio.h>

int main()

{
	int num,i,ele,loc,Arr[5];
	printf("enter no of elements");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&Arr[i]);
			}
	
	{
		printf("enter the no of elements");
		scanf("%d",&ele);
		printf("enter the location of an element");
		scanf("%d",&loc);
		for(i=num;i>=loc;i--)
		{
			Arr[i]=Arr[i-1];
		}
	}
	num++;
	Arr[loc-1]=ele;
	for(i=0;i<num;i++)
    printf("%d",Arr[i]);
	}
