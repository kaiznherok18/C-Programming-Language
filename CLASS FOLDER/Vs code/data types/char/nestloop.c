//Take a positive integer as input and tell if it is dividble by 5 or 3.
/*#include<stdio.h>   
int main(){
    int x;
    printf("Enter a positive integer: ");
    scanf("%d",&x);
    if (x%5==0){
        printf("%d is divisible by 5.\n",x);

    }
    else if (x%3==0){
        printf("%d is divisible by 3.\n",x);

    }
    else {
        printf("%d is not divisible by 5 or 3.",x);

    }

    
}*/

//Take a positive integer as input and tell if it is dividble by 5 and 3 but not 15.
/*#include<stdio.h>
int main(){
    int x;
    printf("Enter a positive integer: ");
    scanf("%d",&x);
    if (x%5==0 || x%3==0){
        if(x%15!=0){
            printf ("%d is divisible by 5 or 3 but not 15.",x); 
        }
            else {
                printf ("%d is not divisible by 15.\n",x); 
            }
        }
        else {
            printf ("%d is not divisible by 5 or 3.\n",x); 
        }
    }
    */

    //Take 3 integer positive as input and print greatest of them using nested if else statement.
/*#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the first  positive integers: \n");
    scanf("%d",&a);
    printf("Enter the second positive integer: \n");
    scanf("%d",&b);
    printf("Enter the third positive integer: \n");
    scanf("%d",&c);
    if (a>b){
        if (a>c){
            printf("%d is the greatest number",a);
        }
        else {
            printf("%d is the greatest number.",c);
        }
    }
    else {
        if (b>c){
            printf("%d is the greatest number.",b);
        }
        else {
            printf("%d is the greatest number.",c);
        }
    }
}*/

//If the age of Ram, Shyam and Ajay are input through the keyboard , write a program to determate the youngest of them.
/*#include<stdio.h>
int main(){
    int ram,shyam,ajay;
    printf("Enter the age of Ram: ");
    scanf("%d",&ram);
    printf("Enter the age of Shyam: ");
    scanf("%d",&shyam);
    printf("Enter the age of Ajay: ");
    scanf("%d",&ajay);
    if (ram<shyam){
        if (ram<ajay){
            printf("Ram is the youngest.");
        }
        else {
            printf("Ajay is the youngest.");
        }
    }
    else {
        if (shyam<ajay){
            printf("Shyam is the youngest.");
        }
        else {
            printf("Ajay is the youngest.");
        }
    }
}*/

//Take input percentage of student and print the grade according to percentage.
#include<stdio.h>
int main(){
    float percentage;
    printf("Enter the percentage of the student: ");
    scanf("%f",&percentage);
    if (percentage>=90){
        printf("Grade: Excellent ");
    }
    else if (percentage>=80){   
        printf("Grade: very good");
    }
    else if (percentage>=70){
        printf("Grade: good");
    }
    else if (percentage>=60){ 
        printf("Grade: Can do better ");
    }
    else if (percentage>=50){
        printf("Grade: Average");
    }
    else if (percentage>=40){
        printf("Grade: Below average");
    }
    else {
        printf("Grade: Fail");
    }
}



