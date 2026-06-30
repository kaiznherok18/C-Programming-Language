//1.Print numbers from 1 to n.
// #include<stdio.h>
// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     int i=1;
//     while(i<=n) {
//         printf("%d\n",i);
//         i++;
//     }
// }
//2.Print even numbers from 1 to n.
// #include<stdio.h>
// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     int i=2;
//     while(i<=n) {
//         printf(" Even number: %d\n",i);
//         i+=2;
//     }
// }
//3.Find sum of digits of a numbers.
// #include<stdio.h>
// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     int i=1;
//     while(i<=n) {
//         printf("%d\n",i);
//         i++;
//     }
// }
//4.Reverse a number.
// #include<stdio.h>
// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     int i=1;
//     int r=0;
//     while(i<=n) {
//         r=n%10;
//         n/=10;
//         printf("%d ",r);
//     }
//
// }
//5.Count digits in a numbers.
// #include<stdio.h>
// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     int i=1;
//     int count=0,r=0;
//     while(i<=n) {
//         r=n%10;
//         n/=10;
//         count++;
//     }
//     printf("%d",count);
// }
//6.Check whether a number is palindrome.
// #include<stdio.h>
// int main() {
//     int n,c;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     int r=0,copy=0,last=0;
//     copy=n;
//     while(n!=0) {
//         last=n%10;
//         r=r*10+last;
//         n=n/10;
//     }
//     printf(r==copy? "palindrome" : "not a palindrome");
// }
//7.Find factorial using while loop.
// #include<stdio.h>
// int main() {
//     int f;
//     printf("Enter a number: ");
//     scanf("%d",&f);
//     int i=1;
//     while(f!=0) {
//         f=f*(f-i);
//         i++;
//     }
//     printf("%d\n",f);
// }
//8.Find largest digit in a number.
#include<stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int i=1;
    int r1=0,r2=0,r3=0;
    while(i<=n) {
        r1=n%10;
        r2=n%10;
        r3=n%10;
        n=n/10;

        printf(r1>r2 && r1>r3 ? "Largest number r1": r2>r1 && r2>r3?"Largest number r2" :
            r3>r2 && r3>r1? "Largest number r3":"not any largest number");

    }
}