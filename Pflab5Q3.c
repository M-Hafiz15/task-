#include <stdio.h>

int main() {
    int x = 3, y = 5, z = 2;
    int step1, step2, step3, step4, step5, step6, step7, result;

	printf("x=3, y=5, z=2\n");

    step1 = y * z;
    printf("1) y * z = %d\n", step1);

    step2 = x + step1;
    printf("2) x + (y*z) = %d\n", step2);

    step3 = step2 > 10;
    printf("3) (x + y*z) > 10 = %d\n", step3);

    step4 = x - z;
    printf("4) x - z = %d\n", step4);

    step5 = step4 < y;
    printf("5) (x - z) < y = %d\n", step5);

    step6 = step3 && step5;
    printf("6) (x + y*z > 10) && (x - z < y) = %d\n", step6);

    step7 = !(y % z);
    printf("7) !(y %% z) = %d\n", step7);

    result = step6 || step7;
    printf("8) Final Result = %d\n", result);

    return 0;
}
