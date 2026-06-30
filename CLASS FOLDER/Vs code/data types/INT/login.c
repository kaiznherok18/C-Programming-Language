/*#include<stdio.h>
int main(){
    int mob,pass;
    printf("Enter your mobile number: ");
    scanf("%d",&mob);
    printf("Enter your password: ");
    scanf("%d",&pass);
    if (mob==8271806155 && pass== 3728){
        printf("%d Login successful.",mob);
    }
    else {
        printf("%d Login failed.",pass);
    }
}*/

//take three positive  integer as input and find the greatest one of them.  
/*#include <stdio.h>
int main() {
    int num1, num2, num3;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Enter third number: ");
    scanf("%d", &num3);
    if (num1 > num2 && num1 > num3) {
        printf("%d is the greatest number.", num1);
    } else if (num2 > num1 && num2 > num3) {
        printf("%d is the greatest number.", num2);
    } else {
        printf("%d is the greatest number.", num3);
    }
}   */

//Take positive integer as input and tell if it is divisible by 5 and 3.
/*#include <stdio.h>
int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num % 5 == 0 && num % 3 == 0) {
        printf("%d is divisible by both 5 and 3.", num);
    } else {
        printf("%d is not divisible by both 5 and 3.", num);
    }
}*/

//Take positive integer as input and tell if it is divisible by 5 and 3 ,But not 15.
#include <stdio.h>
int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num % 5 == 0 && num % 3 == 0 && num % 15 != 0) {
        printf("%d is divisible by both 5 and 3, but not 15.", num);
    } else {
        printf("%d does not meet the criteria.", num);
    }
}



