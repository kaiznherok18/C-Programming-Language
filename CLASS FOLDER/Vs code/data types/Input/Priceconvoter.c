#include<math.h>
int main(){
    float Rupees,Dollars;   
    printf("Currency Converter:\n");
    printf("Enter the  currency of amount(Rupees or Dollars)= \n");
    scanf("%f",&Dollars);
    float Rupees=Dollars*(94.25);
    float Dollars=Rupees/(94.25);
    printf("The amount in Rupees is: %f\n",&Rupees);     
    printf("The amount in Dollars is: %f\n",&Dollars);
}