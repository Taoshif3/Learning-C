#include <stdio.h>

int countDivisibleBy5And7(int start, int end) {
    int count = 0;

    for (int number = start; number <= end; ++number) {
        if (number % 5 == 0 && number % 7 == 0) {
            count++;
        }
    }

    return count;
}

int main() {
    int startRange = 1;
    int endRange = 100;

    int result = countDivisibleBy5And7(startRange, endRange);

    printf("The count of numbers divisible by 5 and 7 in the range %d to %d is: %d\n", startRange, endRange, result);

    return 0;
}
