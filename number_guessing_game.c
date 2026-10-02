#include <stdio.h>

int main() {
    int guess , num = 27 , attempt = 1;

    printf("ENTER A GUESS BETWEEN O TO 100 :\n");
    scanf("%d" , &guess);
    
    while(guess != num) {
        if(guess > num){
            printf("TOO HIGH\n");
        } else{
            printf("TOO LOW\n");
        }
        
        printf("ENTER AGAIN :\n");
        scanf("%d" , &guess);
        attempt++;
    }
    
    printf("YOU GUESSED THE NUMBER\n");
    printf("YOU TOOK %d ATTEMPTS TO GUESS THE NUMBER\n" , attempt);

    return 0;
}
