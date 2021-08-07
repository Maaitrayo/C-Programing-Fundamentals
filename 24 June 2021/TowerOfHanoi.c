// C program for Tower of Hanoi using Recursion

#include <stdio.h>
 
void towers(int, char, char, char);
 
int main()
{
    int num;
 
    printf("Enter the number of disks : ");
    scanf("%d", &num);
    printf("The sequence of moves involved in the Tower of Hanoi are :\n");
    towers(num, 'A', 'C', 'B');
    return 0;
}
void towers(int num, char fromdisc, char todisc, char auxpeg)
{
    if (num == 1)
    {
        printf("\n Move disk 1 from peg %c to peg %c", fromdisc, todisc);
        return;
    }
    towers(num - 1, fromdisc, auxpeg, todisc);
    printf("\n Move disk %d from peg %c to peg %c", num, fromdisc, todisc);
    towers(num - 1, auxpeg, todisc, fromdisc);
}