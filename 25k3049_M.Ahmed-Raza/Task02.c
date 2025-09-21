#include <stdio.h>

int main(){
    int age;
    printf("Enter age to check: \n");
    scanf("%d", &age);
    if (age >= 60){
        printf("You are a senior");
    }else{
        if (age >= 19){
            printf("You are a adult");
        }else{
            if (age >= 13){
                printf("You are a teenager");
            }else{
                printf("You are a child");
            }
        }
    }
}