#include <stdio.h>

int main()
{

    int numToTest = 3;       // numbers to test from 3 to 100
    int primes[50] = {2, 3}; // array to store primes

    // outer loop for numbers to test from 3 to 100
    // increment by 2 to skip even numbers

    for (int n = numToTest; n <= 100; n += 2)
    {

        // inner loop to divide numToTest by array of primes
        // prime means numToTest is not evenly divisible by prior primes

        for (int p = 0; p < 50; p++)
        {
            if (n % primes[p] != 0)
                primes[p] = n; // found a prime
        }
    }

    // loop to print out array of primes

    for (int i = 0; i < 50; i++)
    {
        printf("%d, ", primes[i]);
    }

    return 0;
}
