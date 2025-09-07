//random number generator code
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
  srand(time(0));
  int random_number = (rand() % 100)+1;

  //game code

  int guessed_number ;
  int numberofgusses=0;
do{
   printf("enter number:");
   scanf("%d",&guessed_number);
   if(guessed_number>random_number){
     printf("wrong! enter lower number\n");}
  else if (guessed_number<random_number){
     printf("wrong! enter higher number\n");}
  else 
     printf("congo!!");
    numberofgusses++;     
    } while (guessed_number != random_number);

printf("you guess it right!! number is %d in %d trys",random_number,numberofgusses);
}

