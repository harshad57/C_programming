#include <stdio.h>
#include <time.h>

char get_time(char* time_1);
char get2_time(char* time_2);
char get_date(char* date_1);

int main()
{
  int choice;
  printf("\nChoose the time format :\n\n");
  printf("1.\t 12 hour format (default)c\n");
  printf("2.\t 24 hour format\n\n");
  printf("Enter choice (1/2) : ");
  scanf("%d", &choice);
  
  char date_1[50];
  get_date(date_1);
  
  if(choice == 2){
    char time_2[50];
  get_time(time_2);
  printf("Current time : %s\nDay/Date : %s\n", time_2, date_1);
  }
  else{
     char time_1[50];
  get_time(time_1);
  printf("Current time : %s\nDay/Date : %s\n", time_1, date_1);
  }
  return 0;
}


char get_time(char* time_1){
  time_t current;
  struct tm *local;
  time(&current);
  local= localtime(&current);
  strftime(time_1, 50, "%I:%M:%S %p", local);
}


char get2_time(char* time_2){
  time_t current;
  struct tm *local;
  time(&current);
  local= localtime(&current);
  strftime(time_2, 50, "%H:%M:%S %p", local);
}


char get_date(char* date_1){
  time_t current;
  struct tm *local;
  time(&current);
  local= localtime(&current);
  strftime(date_1, 50, "%A %d %B %Y", local);
}