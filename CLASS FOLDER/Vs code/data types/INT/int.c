/*#include<stdio.h>
int main(){
    int a = 10;
    int b = 20;
    a = a + b;
    b = a - b;
    printf("value of a is : %d\n",a);
    printf("value of b is : %d",b);

}*/

/*#include<stdio.h>
int main(){
    int a = 10;
    a++;
    a--;
    a++;
    a++;
    printf("%d",a);


}*/

//post increment and pre increment
/*#include<stdio.h>
int main(){
    int a = 10;
    printf("%d\n",a);
    printf("%d\n",a++);
} */  
      //post increment


/*#include<stdio.h>
int main(){
    int a = 4;
    int c=a++ + ++a + a++ + ++a;
    printf("%d",c);
}*/

// question-
/*#include<stdio.h>
int main(){
int a1 = 20, a2 = 345, a3 = 700;
int b1 = 56720, b2 = 9999, b3 = 20098;
int c1 = 233, c2 = 205, c3 = 1;
int d1 = 34, d2 = 0, d3 = 23;

printf("%-9d %-9d %-9d\n", a1, a2, a3);
printf("%-9d %-9d %-9d\n", b1, b2, b3);
printf("%-9d %-9d %-9d\n", c1, c2, c3);
printf("%-9d %-9d %-9d\n", d1, d2, d3);
}*/

// 
/*#include<stdio.h>
int main(){
    int a=4;
    int c=a-- + --a + a-- + --a;
    printf("%d",c);
}*/
/*#include<stdio.h>
int main(){ 
    int a=4;   
    int c=a-- + --a + a-- + --a;
    printf("%d",c);

    
}*/

/*#include<stdio.h>
int main(){
    int a=4;
    int c=a-- + --a + a-- + --a;
    printf("%d",c);
}*/

//Take positive age as input and tell if it is eligible for voting or not.
/*#include<stdio.h>
int main(){     
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if (age>=18){
        printf("You are eligible for voting.\n");
    }
    else {
        printf("You are not eligible for voting.");
    }
} */

//
#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U'){
        printf("%c is a vowel.\n",ch);
    }
    else {
        printf("%c is a consonant.\n",ch);
    }
}
