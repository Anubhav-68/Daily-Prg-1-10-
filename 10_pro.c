// 🖥️
// Q10 (User Inputs, Operations & Output)
// 📋
// Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include<stdio.h>

int main(){
    
    int sec;

    printf("Enter the time in seconds:\n");
    scanf("%d",&sec);

    printf( "%d : %d : %d\n", sec/3600, (sec%3600)/60, sec%60);

    return 0;
}