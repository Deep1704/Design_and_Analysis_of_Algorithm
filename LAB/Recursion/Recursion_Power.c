#include <stdio.h>
#include <time.h>

int power(int x, int y)
{

    if (y == 1)
    {
        return x;
    }
    else
    {
        return x * power(x, y - 1);
    }
}
void main()
{
    int x, y, ans;
    clock_t start, end;
    double cpu_time_used;
    printf("Enter x = ");
    scanf("%d", &x);
    printf("Enter y = ");
    scanf("%d", &y);
    start = clock();
    ans = power(x, y);
    end = clock();

    printf("Answer = %d\n", ans);
    printf("Time = %f", cpu_time_used);
}
