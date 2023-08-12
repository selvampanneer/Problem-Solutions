#include <stdio.h>
#include <math.h>
void towerOfHanoi(int n, char source, char auxiliary, char destination)
{
    if (n == 1)
    {
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }

    towerOfHanoi(n - 1, source, destination, auxiliary);
    printf("Move disk %d from %c to %c\n", n, source, destination);
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main()
{
    int n = 8; // Number of discs
    char source = 'A', auxiliary = 'B', destination = 'C';
    int movements = pow(2,8)-1;
    printf("Tower of Hanoi solution for %d discs:\n", n);
    towerOfHanoi(n, source, auxiliary, destination);
    printf("Total number of disc movements:\t%d",movements);
    return 0;
}
