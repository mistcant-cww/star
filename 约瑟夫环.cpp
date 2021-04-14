#include<stdio.h>
int main()
{
	int a[30]={0};//a±íÊ¾×´Ì¬ 
	int b[30]={0};
	int i=0,t=1,count=0;
	while(count<30)
	{
		if(t==5)
		{
			b[count]=i+1;
			count++;
			t=0;
			a[i]=1;
		}
		i=++i%30;
		if(a[i]==0)
			t++;
	}
	for(i=0;i<30;i++)
		printf("%d ",b[i]);
	return 0; 
	
}
