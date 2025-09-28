#include <stdio.h>

int main() {
    char signal;
    int hour;

    printf("Enter traffic signal (R/Y/G): ");
    scanf(" %c", &signal);


    if (signal == 'R' || signal == 'r') {
        printf("Enter current hour (0-23): ");
        scanf("%d", &hour);

        if (hour < 22) {
            printf("Stop and wait\n");
        } else {
            printf("Stop, but night caution allowed\n");
        }
    } 
    else if (signal == 'Y' || signal == 'y') {
        printf("Get Ready\n");
    } 
    else if (signal == 'G' || signal == 'g') {
        printf("Go\n");
    } 
    else {
        printf("Invalid Signal\n");
    }

    return 0;
}
