#include <stdio.h>
int main(){
    int num;
    printf("Enter year to check: \n");
    scanf("%d", &num);
    if ((num % 4 == 0) || (num % 4 == 0 && num % 100 != 0)){
        printf("This is a leap year");
    }else{
        printf("This is not a leap year");
    }
}