#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <windows.h>
#include "Functions.h"

int main()
{
    int choice, i;
    char choice_3;
    system("cls");
    // ! user login function:
    red();
    printf("Welcome to the Bank Management System!\n\n");
    reset();
    acc();
    // * clearing the terminal
    system("cls");
    for (i = 0; i <= 10; i++)
    {
        // * ATM menu
        red();
        printf("\n--------------- Welcome to ATM --------------\n\n");
        reset();
        cyan();
        printf("1. Check Balance");
        printf("\n2. Deposit Money\n");
        printf("3. Get help");
        printf("\n4. Withdraw Money\n");
        printf("5. Account Information ");
        yellow();
        printf("(Upcoming Feature!)");
        reset();
        cyan();
        printf("\n6. Transfer Funds ");
        reset();
        printf("\x1b[32m(New Feature!)\x1b[0m\n");
        red();
        printf("7. Exit");
        reset();
        cyan();

        // ! getting choice from user

        printf("\n\npick an option: ");
        Purple();
        scanf(" %d", &choice);
        cyan();

        

        switch (choice)
        {
        case 1:
            // ! prints balance and clears terminal after 2s
            system("cls");
            check_bal();
            Sleep(1500);
            system("cls");
            break;

        case 2:
            // ! gets depo value and clears terminal after 0.5s
            system("cls");
            check_depo();
            printf("\n\n");
            Sleep(500);
            system("cls");
            break;
        case 3:
            system("cls");
            red();
            printf("=== HELP ===\n\n");
            cyan();
            printf("1. Check your balance\n");
            printf("2. Deposit a certain amount of money into your bank account\n");
            printf("3. Get help\n");
            printf("4. Withdraw your money from the bank\n");
            printf("5. Get all your account information\n");
            printf("6. Quit the program\n\n");
            printf("Go back to the menu? (y/n): ");
            Purple();
            scanf(" %c", &choice_3);
            cyan();

            switch (choice_3)
            {
            case 'y':
                system("cls");
                break;
            case 'n':
                system("cls");
                exit(EXIT_SUCCESS);
                break;
            default:
                yellow();
                printf("\ninvalid input");
                sleep(1);
                cyan();
                system("cls");
                break;
            }

            break;

        case 4:
            // ! gets depo value and clears terminal after 0.5s

            check_with();
            Sleep(500);
            system("cls");
            break;

        case 5:
            system("cls");
            Acc_info();
            system("cls");
            break;
        case 6:
            fundsTransfer();
            sleep(1);
            system("cls");
            break;
        case 7:
            printf("Have a nice day.\n");
            sleep(1);
            system("cls");
            exit(EXIT_SUCCESS);

        default:
            printf("invalid");
            system("cls");
            break;
        };
    }
    reset();
}
