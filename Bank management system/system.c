#include <stdio.h>

void create();
void deposite();
void withdraw();
void check();

const char* reset="\033[0m";
const char* pink="\033[1;35m";
const char* red = "\033[1;31m";
const char* green = "\033[1;32m";
const char* yellow = "\033[1;33m";
const char* blue = "\033[1;34m";

int account;
float balance;

int main()
{
  printf("*%s Bank Management System %s*\n", pink, reset);
  while(1){
  printf("%s   1. create account%s\n", blue, reset);
  printf("%s   2. deposite money%s\n", blue, reset);
  printf("%s   3. withdraw money%s\n", blue, reset);
  printf("%s   4. check balance%s\n", blue, reset);
  printf("%s   5. exit%s\n\n", blue, reset);
  
  int choice;
  printf("%sEnter your choice : %s", yellow, reset);
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
      printf("%sexit the program !%s\n", red, reset);
      return 0;
      break;
      
    default:
      printf("%senter valid option !%s\n\n", red, reset);
  }
  }
  return 0;
}


void create(){
  if(account == 0){
  printf("%sCreate your account number :- %s", yellow, reset);
  scanf("%d", &account);
  printf("%s-- Account created successfully ! --%s\n\n", green, reset);
  }
  else{
    printf("%s Account is already exist ! %s\n %sand your account number is %d %s\n\n",red, reset, green, account, reset);
  }
}


void deposite(){
  float amt;
  int enter;
  
  printf("%senter account number : %s", yellow, reset);
  scanf("%d", &enter);
  
  for(int i=0;enter != account && account != 0;i++){
    printf("%spls enter correct account number :- %s", red, reset);
    scanf("%d", &enter);
  }
  
  if(enter == account){
  printf("%senter amount to deposite : %s", yellow, reset);
  scanf("%f", &amt);
    if(amt <= 0){
      printf("%senter greater than 0, for deposite%s\n\n", red, reset);
    }
    else{
  printf("%sdeposite money successful !%s\n\n", green, reset);
  balance = balance + amt;
  }
  }
  if(account == 0){
    printf("%sfirst you'v create your account%s\n\n", red, reset);
  }
  
}


void withdraw(){
  float amt;
  int enter;
  
  printf("%senter your account number : %s", yellow, reset);
  scanf("%d", &enter);
    
    for(int i=0;enter != account && account != 0;i++){
    printf("%spls enter correct account number :- %s", red, reset);
    scanf("%d", &enter);
  }
  
    if(enter == account){
  printf("%senter amount to withdraw : %s", yellow, reset);
  scanf("%f", &amt);
    if(amt > balance){
      printf("%sinsufficient balance !%s\n", red, reset);
    }
    else if(amt <= 0){
      printf("%swithdraw amount is always greater than 0%s\n", red, reset);
    }
    else{
  printf("%swithdraw money successful !%s\n\n", green, reset);
  balance = balance - amt;
      }
     }
  
  if(account == 0){
    printf("%sfirst you'v create your account%s\n\n", red, reset);
  }
  
}


void check(){
  int enter;
  
  printf("%senter your account number : %s", yellow, reset);
  scanf("%d", &enter);
  
  for(int i=0;enter != account && account != 0;i++){
    printf("%spls enter correct account number :- %s", red, reset);
    scanf("%d", &enter);
  }
  
  if(enter == account){
  printf("%syour bank balance is %.2f %s\n\n",green, balance, reset);
  }
  if(account == 0){
    printf("%sfirst you'v create your account%s\n\n", red, reset);
  }
  
}
