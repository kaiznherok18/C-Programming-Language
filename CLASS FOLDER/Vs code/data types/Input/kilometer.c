#include <stdio.h>
int main(){
    float kilometer,meter,centimeter;
    printf("Enter the distance in kilometer: ");
    scanf("%f", &kilometer);
    meter = kilometer * 1000;
    centimeter = kilometer * 100000;
    printf("The distance in meters is: %f\n", meter);
    printf("The distance in centimeters is: %f\n", centimeter);
}
