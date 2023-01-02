#include<stdio.h>
#include<time.h>

int Factorial(int n) {
    if(n<2) {
        return 1;
    }

    return n*Factorial(n-1);
}

void main() {
    int a;
    clock_t start,end;
    double cpu_time_used;
    printf("Enter Number : ");
    scanf("%d",&a);
    start = clock();
    a = Factorial(a);
    end = clock();
    cpu_time_used = ((double) (end-start)) / CLOCKS_PER_SEC;
    printf("Ans = %d\n",a);
    printf("Time = %f",cpu_time_used);
    
}