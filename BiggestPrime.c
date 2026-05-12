#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPrime(long long x){
    if (x < 2) return 0;
    for (long long i = 2; i <= (long long)sqrt((double)x); i++)
    {
        if (x % (i) == 0) return(0);
    }
    return 1; 
}
long long getNextPrime(long long x){
    long long number = x + 1;
    while (!isPrime(number))
    {
        number += 1;
    }
    return number;
}

int main(){
    long long userInput;
    long long nextprime;
    printf("enter the number you want to check if Prime.\n");
    scanf("%lld", &userInput);
    if (isPrime(userInput)) {
        printf("your number is prime!\n");
    } else {
        printf("your number is NOT prime!\n");
    }
    for (int i = 0; i < 10; i++)
    {
        nextprime = getNextPrime(userInput);
        printf("the next prime number is : %lld \n", nextprime);
        userInput = nextprime;
    }
}