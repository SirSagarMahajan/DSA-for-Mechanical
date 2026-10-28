#include <stdio.h>              /* for printf, scanf */
#include <conio.h>              /* for clrscr, getch */

void main()
{
    int a[20];                  /* array to hold numbers */
    int n, i, pos, val;         /* n=count, pos=position, val=value */
    clrscr();                   /* clear screen */

    printf("Enter number of elements: ");
    scanf("%d", &n);            /* read count */

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)     /* loop through elements */
        scanf("%d", &a[i]);     /* read each element */

    printf("Enter position to insert (1-based): ");
    scanf("%d", &pos);          /* read insert position */

    printf("Enter value to insert: ");
    scanf("%d", &val);          /* read value */

    for (i = n; i >= pos; i--)  /* shift elements one step right */
        a[i] = a[i - 1];

    a[pos - 1] = val;           /* place new value at position */
    n++;                        /* count increases by 1 */

    printf("Array after insertion: ");
    for (i = 0; i < n; i++)     /* print updated array */
        printf("%d ", a[i]);

    getch();                    /* wait for key press */
}