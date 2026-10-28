#include <stdio.h>              /* for printf, scanf */
#include <conio.h>              /* for clrscr, getch */

void main()
{
    int a[20];                  /* array of numbers */
    int n, i, key;              /* n=count, key=target */
    int low, high, mid, found = 0; /* pointers for search */
    clrscr();

    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter elements in SORTED order: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);     /* read sorted elements */

    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;                    /* start of array */
    high = n - 1;               /* end of array */

    while (low <= high)         /* while search space is valid */
    {
        mid = (low + high) / 2; /* find middle index */
        
        if (a[mid] == key)      /* if middle is target */
        {
            found = 1;
            printf("Found at position %d\n", mid + 1);
            break;              /* stop searching */
        }
        else if (a[mid] < key)  /* if target is larger */
            low = mid + 1;      /* search right half */
        else                    /* if target is smaller */
            high = mid - 1;     /* search left half */
    }
    
    if (found == 0)
        printf("Not found\n");

    getch();
}