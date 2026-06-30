//1.Any number of  table printing.
// #include <stdio.h>
// int main () {
//     int a,n;
//     printf("Enter a number: ");
//     scanf("%d",&a);
//
//     for (int i=a; i<=a*10;) {
//         printf("%d\n",i);
//         i+=a;
//     }
// }
//2.find the odd number.
// #include <stdio.h>
// int main () {
//     int a,n;
//     printf("Enter a number: ");
//     scanf("%d",&a);
//
//     for (int i=1; i<=a;i++) {
//         if (i%2==0) continue;
//         printf("%d ",i);
//
//     }
// }
 //3.Take a number n as input and print all  numbers from 1 ti n separated by spaces.
// #include <stdio.h>
// int main () {
//     int a,n;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//
//     for (int i=1; i<=n;i++) {
//         printf("%d\n",i);
//     }
// }
//TAke a number n as input and print all numbers for n to 1 in reverse order separated by spaces.
//
// #include <stdio.h>
// int main () {
//     int a,n;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//
//     for (int i=n; i>=1;i--) {
//         printf("%d\n",i);
//     }
// }
//5.Take a number n as input, calculate the sum of numbers from 1 to n , and print the sum and average.
 //
 // #include <stdio.h>
 // int main () {
 //     int n;
 //     printf("Enter a number: ");
 //     scanf("%d",&n);
 //
 //     int sum=0;
 //
 //     for (int i=1; i<=n;i++) {
 //
 //         sum+=i;
 //     }
 //     printf("sum of all digit: %d\n",sum);
 //     printf("Average of %.2f\n",((float)sum/n));
 // }
//6.Take a number n as input and calculate its factorial. Print the result.
//
// #include <stdio.h>
// int main () {
//     int a,n;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//
//     int f=1;
//     for (int i=1; i<=n;i++) {
//         f=f*i;
//     }
//     printf("Factorial numbers: %d",f);
// }
//7.Take a number n as input, calculate the factors of a number from 1 to n, and print them.

// #include <stdio.h>
// int main () {
//     int a,n;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//
//     for (int i=1; i<=n;i++) {
//         if (n%i==0)
//         printf("Factors numbers: %d\n",i);
//     }
//
// }
//8.check a number is prime number.
//
// #include <stdio.h>
// int main () {
//     int n,c=0;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//
//     for (int i=1; i<=n;i++) {
//         if(n%i==0)
//         c++;
//     }
//     //if (c==2) printf("%d is prime number.",n);
//     printf("%s\n",c==2? "prime": "not prime");
// }

//9.    //wap to check whether the number is prime or composite

//     //First method using if else statement(but not define 1 or 2 as prime)
// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter the number: ");
//     scanf("%d", &a);
//     for(int i=2;i<=a-1;i++) {
//         if(a%i==0){
//             printf("composite number\n");
//             break;
//         }else {
//             printf("prime number\n");
//             break;
//         }
//     }
// }
    //Second method using if else statement(but not define 1 or 2 as prime)
// #include<stdio.h>
// int main() {
//     int a;
//     printf("Enter the number: ");
//     scanf("%d", &a);
//     bool flag=true;
//     for(int i=2;i<=a-1;i++){
//         if(a%i==0){
//             printf("composite number\n");
//             break;
//         }
//         else {
//             printf("prime number\n");
//         }
//     }
// }
    //Third method using if else statement(but not define 1 or 2 as prime).
    //
// #include<stdio.h>
// int main() {
//     int a;
//     printf("Enter the number: ");
//     scanf("%d", &a);
//     bool flag=true;
//     for(int i=2;i<=a-1;i++){
//         if(a%i==0){
//             flag=false;
//             break;
//         }
//     }
//     if(a==1){
//         printf("1 is neither prime nor composite.");
//     }
//     else if(flag==true){
//         printf("prime number\n");
//     }
//     else{
//         printf("composite number\n");
//     }
// }

/*#include <stdio.h>
int main(){
    int x;
    //printf("Enter a number:");
    //scanf("%d",&x);
    for (int i=1;i<=100;i++){
        if(i%2==0){
            printf("%d ",i);
        }
    }
    return 0;
}*/
//
/*#include <stdio.h>
int main(){
    for(int i=1;i<=190;i++){
        if(i%19==0){
            printf("%d ",i);
        }
    }
    return 0;
}*/
//
/*#include <stdio.h>
int main(){
    int x, y, count = 0;
    printf("Enter the number: ");
    scanf("%d", &x);
    printf("Enter the total number to print: ");
    scanf("%d", &y);

    for(int i = 1; i <= y; i++){
        if(i % x == 0){
            count++;
        }
    }

    printf("total count number = %d", count);
    return 0;
}*/
//
/*#include<stdio.h>
int main(){
    //int a;
    for(int i=1; i<=100; i++){
        if(i%3==0 && i%5==0  ){
            printf("%d ",i);
        }
    }
    return 0;
}*/
//Wap to print all the ASCII values and their equivalent characters of 26 Alphabet using while loop.
/*#include <stdio.h>


int main() {

    for (int i=65; i<=90; i++){
        printf("%d = %c\n", i,i);
    }

    return 0;
}
    */
    //
    // #include <stdio.h>
    // int main() {
    //     for(int i=1; i<=10;){
    //         printf("%d ", i);
    //     }
    // }

