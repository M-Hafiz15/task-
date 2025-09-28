#include <stdio.h>

int main() {
    float attendance;
    char midterm, fee;

    printf("Enter your attendance percentage: ");
    scanf("%f", &attendance);

    if (attendance < 75) {
        printf("You are not eligible due to low attendance.\n");
    } else {
       
        printf("Enter your midterm result (P for Pass, F for Fail): ");
        scanf(" %c", &midterm);  

        if (midterm == 'F' || midterm == 'f') {
            printf("You are not eligible as you failed the midterm.\n");
        } else {
            printf("Have you paid the exam fee? (Y for Yes, N for No): ");
            scanf(" %c", &fee);

            if (fee == 'Y' || fee == 'y') {
                printf("You are eligible for the Final Exam.\n");
            } else {
                printf("Please clear your dues to appear in the Final Exam.\n");
            }
        }
    }

    return 0;
}
