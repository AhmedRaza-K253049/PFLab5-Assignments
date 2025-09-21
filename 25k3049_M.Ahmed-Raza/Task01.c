#include <stdio.h>

int main(){
    char colour;
    printf("Enter R for Red, Y for Yellow and G for Green\n");
    scanf(" %c", &colour);
    if (colour == 'R'){
        printf("Stop");
    }else{
        if (colour == 'Y'){
            printf("Caution");
        }else{
            if (colour == 'G'){
                printf("Go");
            }else{
                printf("Inavlid Input");
            }
        }
    }
}