#include <stdio.h>

int findLargest(int numbers[], int size) {
    int largest = numbers[0];

    for (int i = 1; i < size; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    return largest;
}

int main(void) {
    int numbers[100];
    int size;

    printf("How many numbers will you enter? ");
    if (scanf("%d", &size) != 1 || size < 1 || size > 100) {
        printf("Please enter a size from 1 to 100.\n");
        return 1;
    }

    printf("Enter %d numbers:\n", size);
    for (int i = 0; i < size; i++) {
        if (scanf("%d", &numbers[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }

    printf("Largest number: %d\n", findLargest(numbers, size));
    return 0;
}
