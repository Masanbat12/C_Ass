#include "NumClass.h"

int isPalindrome(int num)
{
    int pali = 0;
    int temp = num;
    while (temp /= 10)
        pali = pali * 10 + temp % 10;
    if ((num == pali))
        return 1;
    return 0;
}

int isArmstrong(int num)
{
    int digits = floor(log10(num)) + 1;
    int temp = num;
    int arms = 0;
    while (temp /= 10)
        arms += pow(temp % 10, digits);
    if (num == arms)
        return 1;
    return 0;
}