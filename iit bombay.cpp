#include<stdio.h>
void insertion_sort(int*,int);
int main()
{
	int number_of_keys;
	int values[10];
	int i;
	scanf("%d",&number_of_keys);
	for(i=0;i<=number_of_keys-1;i++)
	{
		scanf("%d",&values[i]);
		
	}
	insertion_sort(values,number_of_keys);
	for(i=0;i<=number_of_keys-1;i++)
	{
	
	
	printf("%d",values[i]);
}
printf("\n");
return 0;
}
void insertion_sort(int *ptr_values,int size)
{
	int i,j;
	int temp;
	for(i=0;i<=size;i++)
	{
		for(j=i-1;j>=0;j--)
		{
			if(ptr_values[j+1]<ptr_values[j])
			{
				temp=ptr_values[j+1];
				ptr_values[j+1]=ptr_values[j];
				ptr_values[j]=temp;
			}
			else
			break;
		}
	}
}
