#include <stdio.h>
int main (){
    int limit = 500;
    int withdraw;
    printf("Enter money to withdraw: ");
    scanf("%d", &withdraw);
    if (withdraw <= limit && withdraw % 20 == 0){
        printf("Withdraw approved");
    }else{
        printf("Withdrawal denied");
    }
}