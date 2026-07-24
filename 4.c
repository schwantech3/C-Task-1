#include <stdio.h>

int main() {
    int n;

    char *ones[] = {
        "", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine",
        "ten", "eleven", "twelve", "thirteen", "fourteen",
        "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"
    };

    char *tens[] = {
        "", "", "twenty", "thirty", "forty",
        "fifty", "sixty", "seventy", "eighty", "ninety"
    };

    scanf("%d", &n);

    if (n >= 1 && n <= 19) {
        printf("%s\n", ones[n]);
    }
    else if (n >= 20 && n <= 99) {
        if (n % 10 == 0)
            printf("%s\n", tens[n / 10]);
        else
            printf("%s %s\n", tens[n / 10], ones[n % 10]);
    }
    else {
        printf("Greater than 99\n");
    }

    return 0;
}