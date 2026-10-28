#include <stdio.h>              /* for printf, scanf */
#include <conio.h>              /* for clrscr, getch */

void main()
{
    int a[20];                  /* array of numbers */
    int n, i, j, min, temp;     /* loop variables and temp */
    clrscr();

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n - 1; i++) /* loop through array */
    {
        min = i;                /* assume current index is minimum */
        for (j = i + 1; j < n; j++) /* check rest of array */
        {
            if (a[j] < a[min])  /* if smaller element found */
                min = j;        /* update minimum index */
        }
        if (min != i)           /* if new minimum is found */
        {
            temp = a[i];        /* swap elements */
            a[i] = a[min];
            a[min] = temp;
        }
    }

    printf("Sorted: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    getch();
}