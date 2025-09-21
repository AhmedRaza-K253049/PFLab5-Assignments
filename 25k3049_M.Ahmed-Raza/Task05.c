#include <stdio.h>
int main(){
    int num;
    printf("Enter number to check:\n");
    scanf("%d", &num);
    if (num % 3 == 0 && num % 5 == 0){
        printf("This number is divisible by both 3 and 5");
    }else{
        printf("This number is not divisible by 3 and 5");
    }
}