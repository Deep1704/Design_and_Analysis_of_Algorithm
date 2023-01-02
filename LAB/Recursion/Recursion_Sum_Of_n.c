#include <stdio.h>
#include <time.h>

int sum(int n)
{
    if (n < 1)
    {
        return 0;
    }

    return n + sum(n - 1);
}

void main()
{
    int a;
    clock_t start, end;
    double cpu_time_used;
    printf("Enter Number : ");
    scanf("%d", &a);
    start = clock();
    a = sum(a);
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Ans = %d\n", a);
    printf("Time = %f", cpu_time_used);
}