#include <stdio.h>
#include <conio.h>
#include <windows.h>
#define p printf
#define s scanf
#define g gotoxy

void gotoxy(int x, int y) {
  COORD coord;
  coord.X = x - 1; // Adjust for zero-based indexing
  coord.Y = y - 1; // Adjust for zero-based indexing
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
 
int main (){
    int ctr = 0,  pass, choice, current_bal = 10000, withdraw;
    char input_pass[50];
    system("cls");
    loop:
    while (ctr<3){
    g(2,2);p("Enter Password: ");
    g(20,2);gets(input_pass);
    pass = strcmp(input_pass, "andriza firouzjza");
    if (pass == 0);
        {
        ask:
        g(20,3);p("Welcome to Bank ABC");
        g(2,4);p("[1] Balance");
        g(2,5);p("[2] Withdraw");
        g(2,6);p("[3] Deposit");
        g(2,7);p("[4] Exit");
        g(2,8);p("Enter Choice: ");
        g(20, 8);s("%d", &choice);
        if (choice > 0 && choice < 5){
            if (choice == 1){
                g(10,9);p("Balance: %d", current_bal);
                g(2,8);p("  ");
                goto ask;
            }
            else if (choice == 2){
                g(2,9);p("Withdraw");
                g(2,10);p("Current Balance: %d", current_bal);
                g(2,11);p("Enter amount to withdraw: ");
                g(2,11);s("%d", &withdraw);
                if (withdraw / 100){
                    if(current_bal == 500){
                        current_bal = current_bal - withdraw;
                        g(2,12);p("Withdraw success!");
                        g(2,13);p("Withdraw amount: %d", withdraw);
                        g(2,14);p("Current balance: %d", current_bal);
                        g(2,8);p("  ");
                        goto ask;
                    }
                }
                else {
                    g(2,15);p("inavlid input");
                }
                    
                g(2,8);p("  ");
            }
            else if (choice == 3){
                
            }
            else if (choice == 4){

            }

    }
    
        }
            
          
            
            



        
        }
    /*else {
        g(2,4);p("Wrong Password. Please Try Again.");
        ctr = ctr + 1;
        goto loop;
    }*/
}
