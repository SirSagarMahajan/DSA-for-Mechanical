#include <stdio.h>              /* for printf, scanf */
#include <conio.h>              /* for clrscr, getch */

void main()
{
    int a[20];                  /* array of numbers */
    int n, i, j, key;           /* key = element being placed */
    clrscr();

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 1; i < n; i++)     /* start from 2nd element */
    {
        key = a[i];             /* store current element */
        j = i - 1;              /* start checking left side */
        
        while (j >= 0 && a[j] > key) /* shift bigger elements right */
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;         /* insert element in correct spot */
    }

    printf("Sorted: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    getch();
}