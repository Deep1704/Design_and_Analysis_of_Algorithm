#include<stdio.h>
#include<time.h>
void main()
{
	int i,sum,x,y;
	clock_t start,end;
	double cpu_time_used;
	i=1;
	sum=1;
	printf("enter x=");
	scanf("%d",&x);
	printf("enter y=");
	scanf("%d",&y);
	
	start = clock();
	
	while(i<=y)
	{
		sum=x*sum;
		i++;		
	}
	
	end = clock();
	cpu_time_used = ((double) (end-start))/CLOCKS_PER_SEC;
	
		printf("Answer=%d\n",sum);
		printf("Time=%lf",cpu_time_used);	
}
