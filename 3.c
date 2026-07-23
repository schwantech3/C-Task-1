// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i = 1 , n, fact=1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    do{
    fact = fact*i;
    i++;
}
    while (i<=n);
        printf("Sum = %d",fact);
    
    return 0;
}