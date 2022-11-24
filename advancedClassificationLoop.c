#include   "NumClass.h"
//Palindrome
int isPalindrome(int n){
    int digits = 0;
    int numReverse = 0;
    //the idea of this loop its to reverse the number 
    while(n>0)
    {
        digits = n % 10;
     numReverse = numReverse*10+digits; 
    }
    //check if the reverse number and the original number are equal, if yes so the number are palidrome
    if(numReverse == n)
    {
            return 1;
    }
    
    return 0;
}
//Armstrong
int isArmstrong(int n){
int num1 = n; int temp = 0; int armstrong = 0; int digits = 0;
int num2 = n;
//the loop is for check how much digits the number have
while(num1!=0){
    digits++;
    num1/=10;
}
while(num2 != 0){
 armstrong = num2%10;
temp = temp + pow(armstrong,digits);
num2 = num2/10;
}
if(temp == n){
    return 1;
    }
else
    return 0;
}
