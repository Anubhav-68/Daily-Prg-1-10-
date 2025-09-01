// 🖥️
// Q8 (User Inputs, Operations & Output)
// 📋
// Write a program to find and display the sum of the first n natural numbers

#include<stdio.h>

int main(){
    
    int n;

    printf("Enter Number:\n");
    scanf("%d", &n);

    printf("The sum of first (n) natural no.%d\n", n*(n+1)/2);


    return 0;
}