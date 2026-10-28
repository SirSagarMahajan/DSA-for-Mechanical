#include <stdio.h>              /* for printf, scanf */
#include <conio.h>              /* for clrscr, getch */

void main()
{
    int a[20];                  /* array of numbers */
    int n, i, key, found = 0;   /* n=count, key=target, found=flag */
    clrscr();

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);     /* read array elements */

    printf("Enter element to search: ");
    scanf("%d", &key);          /* read target value */

    for (i = 0; i < n; i++)     /* check every element */
    {
        if (a[i] == key)        /* if match found */
        {
            found = 1;          /* set flag to true */
            printf("Found at position %d\n", i + 1);
            break;              /* stop searching */
        }
    }
    if (found == 0)             /* if loop finishes without match */
        printf("Not found\n");

    getch();
}