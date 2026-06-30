////#include<stdio.h>
//void main(){
// int i;
// while(i=10){
//     printf("Hello World\n");
//     i=i+1;
// }
// }
/*#include<stdio.h>
void main(){
    int x=5;
    if(true)
        printf("Hello");
}*/
/*#include<stdio.h>
void main(){
    int x=5;
    if(x<1);
        printf("Hello");
}
*/
/*int a=1;
if(a);
    printf("All is well");
    printf("I am well\n");
else
    printf("I am not a river\n");
*/
/*int main(){
    int i=3;
    printf("%d", (++i)++);
    return 0;
}*/
/*int main(){
    int x,y=5,z=5;
    x=y==z;
    printf("%d", x);
    return 0;
}*/
/*int main(){
    int i=1,2,3;
    printf("%d", i);
    return 0;
}*/
/*int main(){
    int x=5;
    int y=x;
    if(x==y){
        printf("Hello");
    }
    else if (x>y){
        printf("Hi");
    }
    else{
        printf("Hey");
    }

}*/
/*int main(){
    int a=1,b=1,c;
    c=a++ + b;
    printf("%d %d", c,b);
    return 0;
}*/
/*int main(){
int a=1;
printf("%d,%d,%d",a,++a,a++);
}*/
/*int main(){
    int i=2;
    int j=++i + i;
    printf("%d", j);

}*/
// int main(){
//     int i=-3;
//     int k=i%2;
//     printf("%d", k);
// }
//print the table of n number where n is intput form user using while loop.
// #include<stdio.h>
// int main(){
//     int n,i=1;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     while(i<=10){
//         printf("%d\n",n*i);
//         i++;
//     }
// }

// #include<stdio.h>
// int main(){
//     while('a'<'b'){
//         printf("Hello World\n");
//     }
// }
// #include<stdio.h>
// int main(){
//     int i=1;
//     while(i<=100){
//         printf("%d ",i);
//     }
// }
//Take positive integer as input and print digits of the integer value.
// #include<stdio.h>
// void main(){
//     int  n,i=1;
//     printf("Enter a positive integer: ");
//     scanf("%d", &n);
//     while(n>0);
//     {
//         int digit = n%10;
//         printf("%d ", digit);
//         n=n/10;}

        
//     }
//wap to print the sum of given number and its reverse.
// #include <stdio.h>


// int main() {

//     int n;
//     printf("Enter a number : ");
//     scanf("%d", &n);
//     int last=0,r=0,a=n;

//     while(n>0){
//         r *=10;
//         last =n%10;
//         r +=last;
//         n/=10;
//     }
//     printf("output: %d ",r+a);
//     return 0;
// }
//Wap to print sum of all the even digits of a giveen number.
// #include <stdio.h>

// int main() {

//     int n;
//     printf("Enter a number : ");
//     scanf("%d", &n);
//     int last=0,even=0,odd=0,s=n;
    

//     while(n>0){
//         last=n%10;
//         if(last%2==0) even+=last;
//         else odd++;
//         n/=10;
//     }
//         printf("%d\n",even);
//         printf("%d",(s+even));
//     return 0;
// }
//Count all odd or even digits of a given number.
// #include <stdio.h>


// int main() {

//     int n;
//     printf("Enter a number : ");
//     scanf("%d", &n);
//     int last=0,odd=0,even=0;
//     while(n>0){
//         last =n%10;
//         if(last%2==0){
//             even++;
//         }else{
//             odd++;
//         }
//         n/=10;
// }
// printf("%d\n",odd);
// printf("%d",even);

// }
//Pridict the output .
// #include <stdio.h>


// int main() {

//     int x=10,y=0;
//     while(x>=y){
//         x--;
//         y++;
//         printf("%d  %d\n",x,y);
//         }

//     return 0;
// }



