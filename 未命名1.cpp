#include<stdio.h>
void print(int n[],int length)
{
	int i;
	printf("结果是:\n");
	for(i=length-1;i>=0;i--)
	{
		printf("%4d",n[i]);
	}
	printf("\n");
}
void sort()
{
	int num[10],n[10];
	int i,j,k,tem,length;
	printf("请输入10个整形数据:\n");
	for(i=0;i<10;i++)
		scanf("%d",&n[i]);
	num[0]=n[0];
	length=1;
	for(i=1;i<10;i++)
	{
		int again=0;
		for(j=0;j<length;j++)
		{
			if(n[i]==num[j])
			{
				again=1;
				break;
			}
		}
		if(!again)
		{
			num[length++]=n[i];
		}
	}
	for(i=0;i<length;i++)
	{
		k=i;
		for(j=i+1;j<length;j++)
		{
			if(num[k]>num[j])
				k=j;
		}
		if(k!=i)
		{
			tem=num[k];
			num[k]=num[i];
			num[i]=tem;
		}
	}
	print(num,length);
}
main(void)
{
	sort();
}
