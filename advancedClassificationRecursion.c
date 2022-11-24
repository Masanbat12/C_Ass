#include "NumClass.h"
//palindron_recursive
//assistance function for itsPalindrom to reverse the num
//function to check palindrome numbers
int reversnum(int num1)
{
	if (!num1)
		return 0;
	return (num1 % 10) * pow(10, floor(log10(num1))) + reversnum(num1 / 10);
}
//palindrome recursive function
int isPalindrome(int num)
{
	return (reversnum(num) == num) ? 1 : 0;
}

// Armstrong
//function to compute strong numbers
int isArmstrong_help(int num2, int digit)
{
	if (!num2)
		return 0;
	return pow(num2 % 10, digit) + isArmstrong_help(num2 / 10, digit);
}
//O(log(num)) base 10
int isArmstrong(int num2)
{
	return (isArmstrong_help(num2, log10(num2) + 1) == num2) ? 1 : 0;
}