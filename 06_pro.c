// 🖥️
// Q6 (User Inputs, Operations & Output)
// 📋
// Write a program to swap two numbers using a third variable.

#include<stdio.h>

int main(){
    
    int a,b,c;
    
    printf("Enter Two no.s\n");
    scanf("%d", &a);
    scanf("%d", &b);

    c=a;
    a=b;
    b=c;
    

    printf("After swap: (%d),(%d)\n",a,b);


    return 0;
}