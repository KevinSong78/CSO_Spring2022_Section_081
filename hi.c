#include <stdio.h>

int swap(int x, int p1, int p2, int n)
{
    // p1 moves the first pointer p1 units to the left from the right >>
    // p2 moves the second pointer p2 units to the left from the right >>
    // n is the amount of bits the ints storing the swapped bits should have <<

    int p1num = x >> p1; 
    
    // This following for loop creates creates the exact amount of bits (n) from x
    int k = p1num;
    int p1numReplace;
    for ( int i = 2; i >=0; i--)
    {
        p1num =  k >> i;
        if (p1num & 1){
            printf("1");
            
        }
        else{
            printf("0");
        }
        // The idea is that each 1 and 0 would be stored into p1numReplace which would be the 
        // set of bits we want to flip, but I am not sure how to exactly add bits in a concatentating
        // fasion.
    }
    printf("\n");
     

    // The problem here is that shifting right does not necessarily show the leading 0s. Variable 
    // msb is meant to be able to show them but I can not figure out how to properly implement it yet
    int p2num = x >> p2;
    int msb = 1 << (31);
    // This loop only works because I hardcoded k with 0b1000 which corresponds to the size of n = 3. 
    k = 0b1000 | p2num;
    int p2numReplace;
    for ( int i = 2; i >=0; i--)
    {
        p2num =  k >> i;
        if (p2num & 1){
            printf("1");
        }
        else{
            printf("0");
        }
    }

    
    // The next step would then be to just shift p1num and p2num the respective amount of bits from
    // which they were first dervied from, which would be p1 and p2. 
    int result;
    // Then, create result = x & (p2numReplace << p2) & (p1numReplace << p1);

    // The idea of that expression is to use the original x number and use bitwise operators to 
    // adjust the bits according to what p2numReplace and p1numReplace are. The current operators
    // are not correct.
    return result;
}
int main()
{
    swap(47, 1, 5, 3);

    return 0;
}
