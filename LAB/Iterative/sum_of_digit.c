#include<stdio.h>
#include<time.h>
void main() {
	
	int i,n,sum=0;
	clock_t start,end;
	double cpu_time_used;
	printf("enter n: ");
	scanf("%d",&n);
	
		start = clock();
	
	while(n!=0) {
		
		i = n%10;
		n = n/10;
		sum+=i;
	}
	
	end = clock();
	cpu_time_used = ((double) (end-start))/CLOCKS_PER_SEC;
	
	
	printf("%d\n",sum);
	printf("Time=%lf",cpu_time_used);
}
