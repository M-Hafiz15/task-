#include <stdio.h>

int main() {
    int mark1, mark2, mark3, largest;

    printf("Enter student mark: ");
    scanf("%d", &mark1);
    
    printf("Enter student mark: ");
    scanf("%d", &mark2);
    
    printf("Enter student mark: ");
    scanf("%d", &mark3);

    largest = (mark1 > mark2) ? ((mark1 > mark3) ? mark1 : mark3) : ((mark2 > mark3) ? mark2 : mark3);

    printf("The largest mark is: %d\n", largest);

    return 0;
}
