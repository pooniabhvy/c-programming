#include <stdio.h>
#include <stdbool.h>

int main() {
    bool prime = true;
    int num;

    printf("ENTER A NUMBER : ");
    scanf("%d" , &num);

    for(int i = 2 ; i < num ; i++){
        if(num % i == 0){
            prime = false;
        }
    }
    
    if(prime == true){
        printf("PRIME NUMBER\n");
    }

    else{
        printf("NON PRIME NUMBER ");
    }

    return 0;
}
