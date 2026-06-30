//1.Question
// #include<stdio.h>
// int main() {
//     //table printing
//     int i=1;
//         while(i<=10){
//         printf("%d\n",i);
//         i++;
//     }
//
// }
    //2.ASCII value of A=65 and Z=90
// #include<stdio.h>
//     int main(){
//     char i=65;
//     while(i<=90){
//         printf("%c\n",i);
//     i++;
//     }
// }
//     //3.sum of total input number
// #include<stdio.h>
// int main() {
//     int i=1;
//     int n,x=0;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     while(i<=n){
//         printf("%d ",i);
//         x+=i;
//         i++;
//     }
//     printf("Sum: %d", x);
// }
//4.Take a number n as input and print its reverse.
 // #include <stdio.h>
 // int main() {
 //    long  int n,r=0,l=0;
 //     printf("Enter a number: ");
 //     scanf("%ld", &n);
 //
 //     int i=1;
 //     while (n!=0) {
 //         l=n%10;
 //         r=r*10+l;
 //         n=n/10;
 //
 //     }
 //     printf("%ld ",r);
 // }
// //5.Take a number n as input,separate its digits, and print them in reverse oder.Also,calculate and print the sum of the digit.
//
// #include <stdio.h>
// int main() {
//    long  int n,r=0,sum=0;
//     printf("Enter a number: ");
//     scanf("%ld", &n);
//
//     int i=1;
//     while (n!=0) {
//         r=n%10;
//         n=n/10;
//         sum+=r;
//         printf("%ld\n",r);
//
//     }
//     printf("sum of all reverse digits: %ld",sum);
// }
//6.Take a number as input and check whether it reads the same backward as forward.Print "palindrome number" if its,otherwise print "Not a palindrome number".
//
// #include <stdio.h>
// int main() {
// int n,r=0;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     int copy = n;
//     int last=0;
//     while (n!=0) {
//         last=n%10;
//         r=r*10+last;
//         n/=10;
//     }
//     printf(r==copy? "Palindrome" : "Not Palindrome");
//     // if(r==copy) printf("Palindrome");
//     // else printf("Not Palindrome");
// }




