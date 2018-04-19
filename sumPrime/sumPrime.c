#include<stdio.h>
#include<cs50.h>

bool isPrime(int);
int sumPrimes(int);

int main(void)
{
    int input = get_int("Enter number: ");
    // printf("%i\n", input);
    // printf("total is: %i", sumPrimes(input));
    if (isPrime(input))
    {
        printf("%i is prime \n", input);
    }
    else
    {
        printf("%i is Not prime\n", input);
    }
}

bool isPrime(int num)
{
    for(int i = 2; i <= num - 1; i++) // for(int i = 2, max = num / 2 ; i <= max; i++)
    {
           if(!(num % i)) // if( num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int sumPrime(int number)
{
    int sum = 0;
    for (int i = 2; i <= number; i++)
    {
        if(isPrime(i))
        {
            sum += i;
        }
    }
    return sum;
}