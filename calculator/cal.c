#include <stdio.h>
#include <math.h>

int main()
{
  printf("welcome to the simple calculator\n\n");
  printf("choose one of them :-\n");
  printf("1. addition\n");
  printf("2. subtraction\n");
  printf("3. multiplication\n");
  printf("4. dividation\n");
  printf("5. modulus\n");
  printf("6. power\n");
  printf("7. exit\n\n");
  
  int choice;
  
  float first;
  float second;
  
  for(int i=0; ;i++){

  printf("enter your choice : ");
  scanf("%d", &choice);
  
  if(choice == 7){
    printf("you're exit the program");
    break;
  }
  
  if(choice >= 1 && choice <= 6){
  printf("enter first number : ");
  scanf("%f", &first);
  printf("enter second number : ");
  scanf("%f", &second);
  }
  
  switch(choice){
    case 1:
    printf("the addition of two number is %.2f\n\n", first + second);
    break;
    case 2:
    printf("the subtraction of two number is %.2f\n\n", first - second);
    break;
    case 3:
    printf("the multiplication of two number is %.2f\n\n", first * second);
    break;
    case 4:
    printf("the dividation of two number is %.2f\n\n", first / second);
    break;
    case 5:
    printf("the modulus of two number is %d\n\n", (int)first % (int)second);
    break;
    case 6:
    printf("the power of %.2f raised to the power of %.2f is :  %.2f\n\n", first, second, pow(first, second));
    break;
    default:
    printf("invalid input !\n\n");
  }
   printf("\t\t\t----------------------------------------------------\n\n");
   }
   
  return 0;
}