#include <stdio.h>              /* for printf, scanf */
#include <conio.h>              /* for clrscr, getch */
#define MAX 5                   /* maximum size of stack */

int stack[MAX];                 /* array to hold stack items */
int top = -1;                   /* top index, -1 means empty */

void push(int val)              /* function to insert */
{
    if (top == MAX - 1)         /* check if stack is full */
    {
        printf("Stack Overflow\n");
        return;
    }
    top++;                      /* increase top */
    stack[top] = val;           /* store value */
}

void pop()                      /* function to delete */
{
    if (top == -1)              /* check if stack is empty */
    {
        printf("Stack Underflow\n");
        return;
    }
    printf("Popped: %d\n", stack[top]); /* print value */
    top--;                      /* decrease top */
}

void main()
{
    clrscr();
    push(10);                   /* add 10 */
    push(20);                   /* add 20 */
    push(30);                   /* add 30 */
    pop();                      /* removes 30 */
    pop();                      /* removes 20 */
    getch();
}