#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
int main()
{
    // clrscr();ṇ
    srand(time(0));
    int number1= (rand() % 100) + 1;
    printf("random number is : %d",number1);

}