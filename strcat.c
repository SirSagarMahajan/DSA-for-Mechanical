#include <stdio.h>              /* for printf, gets, puts */
#include <conio.h>              /* for clrscr, getch */
#include <string.h>             /* for strcat */

void main()
{
    char s1[100], s2[50];       /* arrays to hold the two strings */
    clrscr();                   /* clear the screen */

    printf("Enter first string: ");
    gets(s1);                   /* read first string */

    printf("Enter second string: ");
    gets(s2);                   /* read second string */

    strcat(s1, s2);             /* join s2 to the end of s1 */

    printf("Concatenated string: ");
    puts(s1);                   /* print the final combined string */

    getch();                    /* wait for key press */
}