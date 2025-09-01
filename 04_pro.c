// 🖥️
// Q4 (User Inputs, Operations & Output)
// 📋
// Write a program to calculate the area and circumference of a circle given its radius.

#include<stdio.h>

int main(){
    
    int r;

    printf("Enter The Radius\n");
    scanf("%d", &r);

    printf("The Area = (%f), Circumference = (%f) \n", 3.14*r*r, 2*3.14*r);


    return 0;
}