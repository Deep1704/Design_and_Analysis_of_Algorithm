#include<stdio.h>
#include<time.h>
void main() {
	
	int i,sum,n;
	i = 1;
	sum = 1;
	clock_t start,end;
	double cpu_time_used;
	printf("Enter No.: ");
	scanf("%d",&n);
	
		start = clock();
		
	while(i<=n) {
		
		sum =i*sum;
		i++;
	}
	
		end = clock();
		cpu_time_used = ((double) (end-start)) / CLOCKS_PER_SEC;
	
		printf("Answer=%d\n",sum);
		printf("Time=%lf",cpu_time_used);
}
