#include <stdio.h>

int main() {
    int n , oddsum = 0;

    printf("ENTER A NUMBER : ");
    scanf("%d" , &n);

    for(int i = 1 ; i <= n ; i++) {
        if(i % 2 != 0){
            oddsum += i;
        }
    }

    printf("ODD SUM IS %d" , oddsum);

    return 0;
}
