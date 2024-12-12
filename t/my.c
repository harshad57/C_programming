#include <stdio.h>
#include <string.h>

typedef struct{
   char name[100];
   int roll;
   char div;
}stu;

stu my[10];
int count=0;

void add();
void show();
void showbyname();

int main(){

   int input;

   while(1){
   printf("--- student info ---\n\n");
   printf("1. add info\n");
   printf("2. show info\n");
   printf("3. show info by name\n");
   printf("4. exit\n\n");
   
   printf("enter your choice : ");
   scanf("%d", &input);
   getchar();

   switch (input)
   {
   case 1:
     add();
      break;

   case 2:
     show();
      break;
   
   case 3:
     showbyname();
      break;

   case 4:
     return 0;

   default:
     printf("invalid choice\n");
      break;
   }
   }
   return 0;
}

void add(){
   char name;
   int roll;
   char div;

   printf("\nenter name : ");
   fgets(my[count].name, sizeof(my[count].name), stdin);
   my[count].name[strcspn(my[count].name,"\n")]='\0';
   printf("enter roll no : ");
   scanf("%d", &my[count].roll);
   getchar();
   printf("enter div : ");
   scanf("%c", &my[count].div);
   getchar();

   count++;
   printf("student added successfully !\n\n");
    printf("\t\t------------------------\n");
   }

void show(){
   char name[100];
   int roll;
   char div;
   int i;
   if(count==0){
      printf("no students to display.\n");
      return;
   }

   for(i=0; i<count; i++){
     printf("-- student %d --\n", i);
     printf("name : %s\n", my[i].name);
     printf("name : %d\n", my[i].roll);
     printf("name : %c\n", my[i].div);
     printf("------------------------\n");
   }
}

void showbyname(){
   char name;
   int roll;
   char div;
   char new[100];
   int i;

   if(count==0){
      printf("no students to search.\n");
      return;
   }
   
   printf("student name : ");
   fgets(new, sizeof(new), stdin);
   new[strcspn(new,"\n")]='\0';
  
  for(i=0; i<count; i++){
   if(strcmp(new,my[i].name)==0){
      printf("student name : %s\n", my[i].name);
      printf("student roll no : %d\n", my[i].roll);
      printf("student div : %c\n", my[i].div);
   }
  }
}
