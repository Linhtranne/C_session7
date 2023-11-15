#include <stdio.h>
#include <math.h>

int main() {
    int number, originalNumber, remainder, result = 0;

    printf("cac so amstrong la: ");

    for (number = 100; number <= 999; ++number) {
        originalNumber = number;

        while (originalNumber != 0) {
            remainder = originalNumber % 10;
            result += pow(remainder, 3);
            originalNumber /= 10;
        }

        if (result == number) {
            printf("%d ", number);
        }

        result = 0;
    }

    return 0;
}