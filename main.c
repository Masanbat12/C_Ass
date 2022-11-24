#include "NumClass.h"
int main()
{
    int m, k;
    scanf("%d %d", &k, &m);
    printf("The Armstrong numbers are:");
    for (int i = k; i <= m; i++)
    {
        if (isArmstrong(i) == 1)
        {
            printf(" %d", i);
        }
    }
    printf("\nThe Palindromes are:");
    for (int i = k; i <= m; i++)
    {
        if (isPalindrome(i) == 1)
        {
            printf(" %d", i);
        }
    }
    printf("\nThe Prime numbers are:");
    for (int i = k; i <= m; i++)
    {
        if (isPrime(i) == 1)
        {
            printf(" %d", i);
        }
    }
    printf("\nThe Strong numbers are:");
    for (int i = k; i <= m; i++)
    {
        if (isStrong(i) == 1)
        {
            printf(" %d", i);
        }
    }
    return 0;
}