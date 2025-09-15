#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    char *result = (num % 2 == 0) ? "Even" :
                   (num % 3 == 0) ? "Divisible by 3" :
                                    "Odd and not divisible by 3";

    printf("%s\n", result);

    return 0;
}
