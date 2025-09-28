#include <stdio.h>
#include <math.h>  

int main() {
    double radius, area, circumference, sqRoot;

    printf("Enter the radius of the circular water tank: ");
    scanf("%lf", &radius);

    area = M_PI * pow(radius, 2);       
    circumference = 2 * M_PI * radius;
    sqRoot = sqrt(radius);            

    printf("\nProperties of the Circular Water Tank:\n");
    printf("Area          : %.2lf\n", area);
    printf("Circumference : %.2lf\n", circumference);
    printf("Square Root   : %.2lf\n", sqRoot);

    return 0;
}
