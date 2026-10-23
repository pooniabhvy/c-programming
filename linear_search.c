#include <stdio.h>

int main() {
    int arr[100];
    int n, i, search;
    int found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &search);

    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("Element not found\n");
    }

    return 0;
}