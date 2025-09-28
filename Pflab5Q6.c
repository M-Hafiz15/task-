#include <stdio.h>

void printBinary(int n) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
}

int main() {
    int a = 29, b = 23;
    int andRes = a & b;
    int xorRes = a ^ b;
    int finalRes = (a & b) | (a ^ b);
    int orDirect = a | b;

    printf("a = %d, binary: ", a); printBinary(a); printf("\n");
    printf("b = %d, binary: ", b); printBinary(b); printf("\n\n");

    printf("Step 1: a & b = %d, binary: ", andRes); printBinary(andRes); printf("\n");
    printf("Step 2: a ^ b = %d, binary: ", xorRes); printBinary(xorRes); printf("\n");
    printf("Step 3: (a & b) | (a ^ b) = %d, binary: ", finalRes); printBinary(finalRes); printf("\n\n");

    printf("Check with a | b = %d, binary: ", orDirect); printBinary(orDirect); printf("\n");

    return 0;
}
