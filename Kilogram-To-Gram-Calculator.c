#include <stdio.h>

int main()
{
    float kg, g;
    printf("Enter The Value Of KELOGRAM: ");
    scanf("%f", &kg);

    g = kg * 1000;

    printf("%.2f KILOGRAMS is equal to %.2f GRAMS.", kg, g);

    return 0;
}
