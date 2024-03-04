#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1)
        return 0; // 0 and 1 are not prime numbers
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0; // If num is divisible by any number other than 1 and itself, it's not prime
    }
    
    return 1; // If the loop completes without finding a divisor, num is prime
}

int main() {
    int number;

    // Prompt user to enter a number
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Check if the entered number is prime
    if (isPrime(number))
        printf("%d is a prime number.\n", number);
    else
        printf("%d is not a prime number.\n", number);

    return 0;
}