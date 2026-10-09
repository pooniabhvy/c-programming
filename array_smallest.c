
#include <stdio.h>

int main() {
    int arr[5];
    int smallest;

    printf("Enter 5 numbers:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    smallest = arr[0];

    for (int i = 1; i < 5; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    printf("Smallest element = %d\n", smallest);

    return 0;
}
