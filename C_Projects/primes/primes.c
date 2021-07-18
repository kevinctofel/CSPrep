#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{

    int p;
    int i;
    bool isPrime;
    int primes[50] = {0};
    int primeIndex = 2;

    primes[0] = 2;
    primes[1] = 3;

    for (p = 5; p <= 100; p = p + 2)
    {
        isPrime = true;

        for (i = 1; (isPrime && ((p / primes[i]) >= primes[i])); ++i)
        {
            if (p % primes[i] == 0)
                isPrime = false;
        }
        if (isPrime == true)
        {
            primes[primeIndex] = p;
            ++primeIndex;
        }
    }

    printf("Prime numbers up to 100: \n");
    for (int j = 0; j < primeIndex; j++)
    {
        printf("%d, ", primes[j]);
    }
    printf("\n");

    return 0;
}
