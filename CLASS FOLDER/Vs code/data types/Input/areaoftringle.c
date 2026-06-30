#include <stdio.h>
int main(){
    float h, b, area;
    printf("Enter the height of the triangle: ");
    scanf("%f", &h);        
    printf("Enter the base of the triangle: ");
    scanf("%f", &b);
    area = (b * h)/2 ;
    printf("The area of the triangle is: %f\n", area);
}