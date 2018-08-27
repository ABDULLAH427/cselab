 #include<stdio.h>
int main()
{
	int A[5],B[5],i;
	printf("enter the elements in 1st array");
for(i=0;i<5;i++)
{
	 scanf("%d",&A[i]);
	 
}
int temp=A[4];
for(i=0;i<5;i++)
{
	B[i]=A[i-1];
}
B[0]=temp;
for(i=0;i<5;i++)
{
	printf("%d",B[i]);
}
}
