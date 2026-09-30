#include<stdio.h>

int main(){
    float num1,num2;
    char oper , choice;
    
    do{
    
    printf("ENTER THE FIRST NUMBER : ");
    scanf("%f", &num1);
   
    printf("ENTER THE OPERATOR( + , - , * , / ) : ");
    scanf(" %c", &oper);
   
    printf("ENTER THE SECOND NUMBER : ");
    scanf("%f", &num2);
   
    switch(oper){
        case '-' : 
            printf("RESULT IS = %.2f",num1 - num2);
            break;
        case '+' :
            printf("RESULT IS = %.2f",num1 + num2);
            break;
        case '*' :
            printf("RESULT IS = %.2f",num1 * num2);
            break;
        case '/' :
            if(num2 != 0){
                printf("RESULT IS = %.2f",num1 / num2);
                break;
            }
            else{
                printf("NUMBER 2 CANNOT BE ZERO");
                break;
            }
        default : 
            printf("INVALID");
    }
    printf("\n DO YOU WANT TO CONTINUE?(y/n)");
    scanf(" %c", &choice);
    }
    
    while(choice == 'y');
    
    printf("CALCULATOR CLOSED");
    
    return 0;
}
