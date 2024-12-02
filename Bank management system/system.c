#include <stdio.h>

void create();
void deposite();
void withdraw();
void check();

int account;
float balance;

int main()
{
  printf("* Bank Management System *\n");
  while(1){
  printf("   1. create account\n");
  printf("   2. deposite money\n");
  printf("   3. withdraw money\n");
  printf("   4. check balance\n");
  printf("   5. exit\n\n");
  
  int choice;
  printf("Enter your choice : ");
  scanf("%d", &choice);
  
  switch(choice){
    case 1:
      create();
      break;
      
    case 2:
      deposite();
      break;
      
    case 3:
      withdraw();
      break;
      
    case 4:
      check();
      break;
     
    case 5:
      printf("exit the program !\n");
      return 0;
      break;
      
    default:
      printf("enter valid option !\n\n");
  }
  }
  return 0;
}


void create(){
  if(account == 0){
  printf("Create your account number :- ");
  scanf("%d", &account);
  printf("-- Account created successfully ! --\n\n");
  }
  else{
    printf("×× Account is already exist ! ××\n and your account number is %d\n\n", account);
  }
}


void deposite(){
  float amt;
  int enter;
  
  printf("enter account number : ");
  scanf("%d", &enter);
  
  for(int i=0;enter != account && account != 0;i++){
    printf("pls enter correct account number :- ");
    scanf("%d", &enter);
  }
  
  if(enter == account){
  printf("enter amount to deposite : ");
  scanf("%f", &amt);
    if(amt <= 0){
      printf("enter greater than 0, for deposite\n\n");
    }
    else{
  printf("deposite money successful !\n\n");
  balance = balance + amt;
  }
  }
  if(account == 0){
    printf("first you'v create your account\n\n");
  }
  
}


void withdraw(){
  float amt;
  int enter;
  
  printf("enter your account number : ");
  scanf("%d", &enter);
    
    for(int i=0;enter != account && account != 0;i++){
    printf("pls enter correct account number :- ");
    scanf("%d", &enter);
  }
  
    if(enter == account){
  printf("enter amount to withdraw : ");
  scanf("%f", &amt);
    if(amt > balance){
      printf("insufficient balance !\nyour current balance is %.2f\n\n", balance);
    }
    else if(amt <= 0){
      printf("withdraw amount is always greater than 0\n");
    }
    else{
  printf("withdraw money successful !\n\n");
  balance = balance - amt;
      }
     }
  
  if(account == 0){
    printf("first you'v create your account\n\n");
  }
  
}


void check(){
  int enter;
  
  printf("enter your account number : ");
  scanf("%d", &enter);
  
  for(int i=0;enter != account && account != 0;i++){
    printf("pls enter correct account number :- ");
    scanf("%d", &enter);
  }
  
  if(enter == account){
  printf("your bank balance is %.2f\n\n", balance);
  }
  if(account == 0){
    printf("first you'v create your account\n\n");
  }
  
}
