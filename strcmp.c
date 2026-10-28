#include <stdio.h>              /* for printf, gets */
#include <conio.h>              /* for clrscr, getch */
#include <string.h>             /* for strcmp */

void main()
{
    char s1[100], s2[100];      /* arrays for the two strings */
    int result;                 /* to store comparison result */
    clrscr();                   /* clear screen */

    printf("Enter first string: ");
    gets(s1);                   /* read first string */
    printf("Enter second string: ");
    gets(s2);                   /* read second string */

    result = strcmp(s1, s2);    /* compare s1 and s2 */

    if (result == 0)            /* 0 means both strings are identical */
        printf("Strings are equal\n");
    else if (result > 0)        /* >0 means first string is greater */
        printf("First string is greater\n");
    else                        /* <0 means first string is smaller */
        printf("First string is smaller\n");

    getch();                    /* wait for key */
}