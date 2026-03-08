#include <math.h>
#include <stdio.h>
#define PI 3.14

int main() {
    // Write a program to convert centigrade to Fahrenheit. [F = 9/5 * C + 32]

    float deg_c, deg_f;

    printf("Enter degree in celcius: ");
    scanf("%f", &deg_c);

    deg_f = (9.0 / 5.0) * deg_c + 32;

    printf("%.2f", deg_f);
    printf("\n\n");

    //Write a program that calculates the area of a circle and circumference.

    float circ, area, radius;

    printf("Enter radius: ");
    scanf("%f",&radius);

    area = PI * radius * radius;
    circ = 2 * PI * radius;

    printf("Area: %.2f\nCircumference: %.2f ", area, circ);
    printf("\n\n");

    // Write a program that calculates the area of a triangle. Area =√s(s-a)(s-b)(s-c) and s= (a+ b + c) / 2

    float a, b, c, s, Area;

    printf("Enter the three sides of the traiangle: ");
    scanf("%f %f %f", &a, &b, &c);

    s = (a + b + c) / 2;
    Area = sqrt(s*(s -a)*(s - b)*(s - c));

    printf("Area: %.2f", Area);
    printf("\n\n");

    // 4. Write a program that reads the marks in each subject and calculates the percentage. Assume 3 subjects have to be read from user.

    float math, science, english;

    printf("Enter marks you got in Math, Science and English: ");
    scanf("%f %f %f", &math, &science, &english );

    float percent = ((math + science + english) / 300) * 100;

    printf("Percentage: %.2f ", percent);
    printf("\n\n");

    return 0;
}