#include <stdio.h>

int findLength(const char text[]) {
    int length = 0;

    while (text[length] != '\0' && text[length] != '\n') {
        length++;
    }

    return length;
}

int main(void) {
    char text[100];

    printf("Enter a line of text: ");
    if (fgets(text, sizeof(text), stdin) == NULL) {
        printf("Could not read the text.\n");
        return 1;
    }

    printf("Length: %d\n", findLength(text));
    return 0;
}
