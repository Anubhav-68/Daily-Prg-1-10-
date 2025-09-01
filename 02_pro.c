// 🖥️
// Q2 (User Inputs, Operations & Output)
// 📋
// Write a program to input two numbers and display their sum, difference, product, and quotient

#include<stdio.h>

int main(){
    
    int a,b;

    printf("Enter Two no.s\n");
    scanf("%d ",&a);

    
    scanf("%d", &b);

    printf("The sum = (%d), diff = (%d), product = (%d),  Quotient = (%d)\n", a+b, a-b, a*b, a/b);


    return 0;
}