#include <stdio.h>
#include <string.h>

typedef struct account {
    char username[10];
    char password[10];
} ac;

void register_account();
void login();

ac account[3];
int account_count = 0;

int main() {
    while (1) {
        int input;
        printf("\nChoose the option :-\n");
        printf("\t1. Register\n");
        printf("\t2. Login\n");
        printf("\t3. Exit\n\n");
        printf("Enter your option : ");
        scanf("%d", &input);

        switch (input) {
            case 1:
                register_account();
                break;
            case 2:
                login();
                break;
            case 3:
                printf("Exiting the program. Goodbye!\n");
                return 0;
            default:
                printf("\nEnter a valid option!\n");
        }
        printf("----------------------------------------------------\n");
    }

    return 0;
}

void register_account() {
  char username[10], password[10];
  
    if (account_count < 3) {
        printf("Enter username : ");
        scanf("%9s", account[account_count].username);
        printf("Enter password : ");
        scanf("%9s", account[account_count].password);
        account_count++;
        printf("\nRegistration successful!\n");
    }
    
    else {
        printf("Maximum number of accounts reached.\n");
    }
}

void login() {
    char username[10], password[10];
    
     printf("Enter username : ");
    scanf("%9s", username);
    printf("Enter password : ");
    scanf("%9s", password);

    for (int i = 0; i < account_count; i++) {
        if (strcmp(account[i].username, username) == 0 && strcmp(account[i].password, password) == 0) {
            printf("\nLogin successful!\n");
            printf("Welcome, %s!\n", account[i].username);
            return;
        }
    }

    printf("\nInvalid username or password ! \nPlease try again or register an account.\n");
}