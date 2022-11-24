#include   "NumClass.h"
//Its a function that return true if the num is prime and false if is not
int isPrime(int n)
{
  // isPrime
  if (n == 1 || n == 2)
    return true;
  for (int i = 2; i <= sqrt(n); i++)
    if (n % i == 0)
      return false;
  return true;
}
// isStrong
int isStrong(int n)
    {
      int temp = 0;
      int sum1 = 0;
      int n1 = n;
      while (n != 0)
      {
        //"%10" to get the last digit
        temp = n % 10;
        int sum =1;
        for (int i = 1; i <= temp; i++)
        {
          sum = sum * i;
          //function that make "!"
        }
        sum1 = sum1 +sum ;
        n = n / 10;
        //"/10" to cut the last digit from the number
      }
      if (sum1 == n1)
      {
        return 1;
      }
        return 0;
    
    }