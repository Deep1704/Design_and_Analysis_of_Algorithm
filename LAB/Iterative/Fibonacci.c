#include<stdio.h>
#include<time.h>
void main(){
	int n,a=0,b=1,sum,i;
	clock_t start,end;
	double cpu_time_used;
	
	printf("Enter n = ");
	scanf("%d",&n);
	printf("%d , %d ,",a,b);
	
		start = clock();
		
	for(i=2;i<n;i++){
		sum=a+b;
		printf("%d, ",sum);
		a=b;
		b=sum;
	}
	
	end = clock();
	cpu_time_used = ((double) (end-start))/CLOCKS_PER_SEC;
	printf("Time=%lf",cpu_time_used);	
}
