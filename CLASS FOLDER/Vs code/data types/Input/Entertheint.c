/*#include<stdio.h>
int main(){
    int a,b;
    printf("enter the value of a: ");
    scanf("%d",&a);
    printf("enter the value of b: ");
    scanf("%d",&b);
    printf("value of a: %d\n",a);
    printf("value of b: %d\n",b);
}*/

// WAP to calculate percentage of five subjects.
/*#include <stdio.h>
int main(){
    printf("Percentage calculator:\n");
    float math, phy,chem,hindi,eng;
    printf("enter the mark of math: ");
    scanf("%f",&math);
    printf("enter the mark of phy: ");              
    scanf("%f",&phy);
    printf("enter the mark of chem: ");
    scanf("%f",&chem);
    printf("enter the mark of hindi: ");
    scanf("%f",&hindi);
    printf("enter the mark of eng: ");
    scanf("%f",&eng);
    float total = math + phy + chem + hindi + eng;
    
    printf("total percentage is: %f%%\n", total/5);
}*/


//WAP to find simple Interest.
/*#include<stdio.h>
int main(){ 
    float p, si, t;
    printf("Simple Interest Calculator:\n");
    printf("Enter the Investment: ");
    scanf("%f",&p);
    printf("SI : "); 
    scanf("%f",&si);
    printf("Enter the Time: ");
    scanf("%f",&t);
    float r = si*100/(p*t);
    printf("Interest Rate: %f", r);
    
}*/


#include<stdio.h>
int main(){ 
    for(;;);
    float p, r, t;
    printf("Simple Interest Calculator:\n");
    printf("Enter the Investment: ");
    scanf("%f",&p);
    printf("SI : "); 
    scanf("%f",&r);
    printf("Enter the Time: ");
    scanf("%f",&t);
    float si = (p*r*t)/100;
    printf("si : %f", si);
    
}

