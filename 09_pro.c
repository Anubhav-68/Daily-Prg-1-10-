// 🖥️
// Q9 (User Inputs, Operations & Output)
// 📋
// Write a program to calculate simple and compound interest for given principal, rate, and time.

#include<stdio.h>
#include<math.h>

int main(){
    
    int p,r,t;

    printf("\nEnter Principle Amount , Rate , Time (respectively): \n");
    scanf("%d ",&p);

    scanf("%d", &r);

    scanf("%d", &t);

    printf("The simple interest (%d)\n", p*r*t/100);
    printf("The compound interest is (%f)\n", p*pow((1+r/100.0),t)-p);


    return 0;
}