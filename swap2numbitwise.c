#include <stdio.h>
#include<conio.h>
int main() 
{
    int i = 65;
    int k = 12;
    printf(" value of i=%d k=%d before swapping", i, k);
    i = i ^ k; 
    k = i ^ k;
    printf(" value of i=%d k=%d after swapping ", i, k);
    return 0;
}
