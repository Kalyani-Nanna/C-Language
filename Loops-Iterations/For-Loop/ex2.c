
//Creating a Table by using for loop

#include<stdio.h>
void main()
{
    int n,i;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    for(i=1; i<=10; i++)
    {
        printf("\n%d x %d = %d", n, i, n*i);
    }
}

/*
Enter a number: 9

9 x 1 = 9
9 x 2 = 18
9 x 3 = 27
9 x 4 = 36
9 x 5 = 45
9 x 6 = 54
9 x 7 = 63
9 x 8 = 72
9 x 9 = 81
9 x 10 = 90
*/

/*
Enter a number: 4

4 x 1 = 4
4 x 2 = 8
4 x 3 = 12
4 x 4 = 16
4 x 5 = 20
4 x 6 = 24
4 x 7 = 28
4 x 8 = 32
4 x 9 = 36
4 x 10 = 40
*/
