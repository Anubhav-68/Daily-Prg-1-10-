// 🖥️
// Q3 (User Inputs, Operations & Output)
// 📋
// Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include<stdio.h>

int main(){
    
    int a,b;

    printf("Enter Lenght and Breadth\n");
    scanf("%d ",&a);

    
    scanf("%d", &b);

    printf("The Area = (%d) , Perimeter = (%d)\n", a*b , 2*(a+b));


    return 0;

}