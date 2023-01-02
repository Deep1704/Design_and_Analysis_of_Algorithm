#include <stdio.h>
#include <time.h>
void main()
{

   FILE *fp;
   int a[100000], i, j, n, temp;
   int choice = 0;
   clock_t start, end;
   double CPU_TIME_USED;
   printf("Enter the number of elements: ");
   scanf("%d", &n);

   do
   {
      printf("\nPress 1 for best case\nPress 2 for average case\nPress 3 for worst case\nPress 4 to exit\n");
      scanf("%d", &choice);
      // printf("Enter the number of elements: ");
      // scanf("%d", &n);

      switch (choice)
      {
      case 1:
         fp = fopen("best.txt", "r");
         printf("best case Time Complexity ");
         break;
      case 2:
         fp = fopen("average.txt", "r");
         printf("average case Time Complexity ");
         break;
      case 3:
         fp = fopen("worst.txt", "r");
         printf("worst case Time Complexity ");
         break;
      }
      for (int i = 0; i < n; i++)
      {
         fscanf(fp, "%d", &a[i]);
      }

      start = clock();

      for (i = 0; i < n - 1; i++)
      {
         for (j = 0; j < n - i; j++)
         {

            if (a[j] > a[j + 1])
            {
               temp = a[j];
               a[j] = a[j + 1];
               a[j + 1] = temp;
            }
         }
      }

      end = clock();

      printf("\nSorted Array: ");
      printf("\n");

      for (i = 0; i < n; i++)
      {
         printf("%d, ", a[i]);
      }
      printf("\n");
      printf("Time=%lf\n", (double)(end - start) / CLOCKS_PER_SEC);

   } while (choice != 4);
}