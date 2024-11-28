#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  srand(time(0));
  printf("Welcome to the number guessing game.\n\n");
  int guess;
  int number = (rand()%100)+1;
  
  for(int i=0; number != guess; i++){
    printf("please guess the number between 1 to 100 : ");
    scanf("%d", &guess);
    
    if(guess > number){
     printf("(Too high! try again.)\n\n");
    }
    else if(guess < number){
      printf("(Too low! try again.)\n\n");
    }
    else{
      printf("\n Congratulations! you've guessed the correct number\n you have take %d attempts.\n", i);
    }
  }
  return 0;
}