#include<stdio.h>
#include<time.h>
void main() {
	
	int i;
	clock_t start,end;
	double cpu_time_used;
	
		start = clock();
		
	for(i=1; i<=50; i++) {
		printf("%d \n",i);
	}
	
			end = clock();
			cpu_time_used = ((double) (end-start)) / CLOCKS_PER_SEC;
			printf("Time=%lf",cpu_time_used);
}
