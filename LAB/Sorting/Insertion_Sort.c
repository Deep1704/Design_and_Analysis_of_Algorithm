#include <stdio.h>
#include <time.h>
void main()
{
   FILE *fp;
   int choice = 0;
   int a[100000], x, j, n;
   clock_t start, end;
   double CPU_TIME_USED;

   for (int i = 0; i < n; i++)
   {
      fscanf(fp, "%d", &a[i]);
   }

   do
   {
      printf("\nPress 1 for best case\nPress 2 for average case\nPress 3 for worst case\nPress 4 to exit\n");
      scanf("%d", &choice);

      if (choice == 4)
      {
         return;
      }
      printf("Enter the number of elements: ");
      scanf("%d", &n);

      switch (choice)
      {
      case 1:
         fp = fopen("best.txt", "r");
         printf("best time complexity ");
         break;
      case 2:
         fp = fopen("average.txt", "r");
         printf("average time complexity ");
         break;
      case 3:
         fp = fopen("worst.txt", "r");
         printf("worst time complexity ");
         break;
      }

      for (int i = 0; i < n; i++)
      {
         fscanf(fp, "%d", &a[i]);
      }

      start = clock();

      for (int i = 1; i < n; i++)
      {

         x = a[i];
         j = i - 1;

         while (x < a[j] && j >= 0)
         {

            a[j + 1] = a[j];
            j--;
         }

         a[j + 1] = x;
      }

      end = clock();

      printf("\nSorted Array: ");
      printf("\n");

      for (int i = 0; i < n; i++)
      {
         printf("%d, ", a[i]);
      }

      printf("\n");
      printf("Time=%lf\n", (double)(end - start) / CLOCKS_PER_SEC);

   } while (1);
}