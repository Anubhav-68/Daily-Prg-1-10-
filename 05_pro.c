// 🖥️
// Q5 (User Inputs, Operations & Output)
// 📋
// Write a program to convert temperature from Celsius to Fahrenheit.

#include<stdio.h>

int main(){

    int cel;

    printf("Enter temp in Celcius:\n");

    scanf("%d", &cel);

    printf(" Farhenheite = (%f )\n", (9.0/5.0)*cel+32);

    return 0;

}