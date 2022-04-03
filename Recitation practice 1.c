#include <stdio.h>

int swap(int x, int p1, int p2, int n)
{
    // p1 moves the first pointer p1 units to the left from the right <<
    // p2 moves the second pointer p2 units to the left from the right <<
    // n is the amount of bits the ints storing the swapped bits should have <<

    int p1num = x << p1;
    int p2num = x << p2;
    printf("%d%d", p1num + "space", p2num);
    return 0;
}
int main()
{
    swap(47, 1, 5, 3);

    return 0;
}
