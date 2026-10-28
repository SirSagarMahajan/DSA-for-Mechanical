#include <stdio.h>              /* for printf, scanf */
#include <conio.h>              /* for clrscr, getch */

void main()
{
    int a[20];                  /* array of numbers */
    int n, i, j, temp;          /* loop variables and temp */
    clrscr();

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n - 1; i++) /* number of passes */
    {
        for (j = 0; j < n - 1 - i; j++) /* compare adjacent */
        {
            if (a[j] > a[j + 1]) /* if out of order */
            {
                temp = a[j];        /* swap */
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Sorted: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    getch();
}