#include <stdio.h>

int main() {
    int n ;
    unsigned long long fact = 1;

    printf("ENTER A NON NEGATIVE NUMBER TO FIND ITS FACTORIAL : ");
    scanf("%d" , &n);

    if(n >= 0){
        for(int i = 1 ; i <= n ; i++){
            fact *= i;
        }
        printf("FACTORIAL OF THE NUMBER IS %lld" , fact);
    }
    
    else{
        printf("YOU ENTERED A NEGATIVE NUMBER !!");
    }

    return 0;
}
