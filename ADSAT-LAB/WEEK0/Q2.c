//Solution Unfeasible O(2^64)
#include <stdio.h>
#include <math.h>
void towerofBrahma(int n, char source, char auxiliary, char destination)
{
    if (n == 1)
    {
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }

    towerofBrahma(n - 1, source, destination, auxiliary);
    printf("Move disk %d from %c to %c\n", n, source, destination);
    towerofBrahma(n - 1, auxiliary, source, destination);
}

int main()
{
    int n = 64; // Number of discs
    char source = 'A', auxiliary = 'B', destination = 'C';
    int movements = pow(2,8)-1;
    printf("Tower of Brahma solution for %d discs:\n", n);
    towerofBrahma(n, source, auxiliary, destination);
    printf("Total number of disc movements:\t%d",movements);
    return 0;
}
