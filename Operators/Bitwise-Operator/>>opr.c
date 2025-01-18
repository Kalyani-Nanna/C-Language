//Bitwise >> - [RightShift] Operator example

#include<stdio.h>
int main()
{
    printf(">> [RightShift] Operator example\n");
    printf("a = %d\n", 25 >> 2);
    return 0;
}

/*
a = 6
*/

/*
output explanation
1.25 >> 2
find the byte code of 25
To find byte code divide a no. by 2
=> 25 byte code operation
1. 25 / 2 => Quotient=12 => remainder=1
2. 12 / 2 => Quotient=6 => remainder=0
3. 6 / 2 => Quotient=3 => remainder=0
4. 3 / 2 => Quotient=1 => remainder=1
4. 1 / 2 => Quotient=0 => remainder=1
answer => 11001 => 25 = 0000 0000 0001 1001

Now, we have the byte codes now we will perform final opeartion
25 => 0000 0000 0001 1001
            >>[2]
      0000 0000 0001 10[01]
    right 2 removed & 2 added to left
      0000 0000 0000 0  1     1   0
                        |     |
                       2^2   2^1
                        4  + 2
                           6
Final answer => 25 >> 2 => 6
*/
