// Q4: Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
int main() {
    float radius, area, circumference;
    const float PI = 3.14159;

    printf("enter the redius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("area = %.2f\n", area);
    printf("circumference = %.2f\n", circumference);

    return 0;

}