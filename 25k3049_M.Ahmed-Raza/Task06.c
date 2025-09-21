#include <stdio.h>
int main(){
    int num1;
    int num2;
    int bigger;
    printf("Enter 2 numbers to check which is bigger:\n");
    scanf("%d %d", &num1, &num2);
    bigger = (num1 > num2) ? (bigger = num1) : (bigger = num2);
    printf ("%d is bigger", bigger);
}