#include <stdio.h>
#include <conio.h>
#define g gotoxy
#define p printf
#define s scanf
int  current_bal =10000;
int choice, withdraw, deposit, ctr = 1;
char pass, entered_password[50], ans;

void balance_menu(){
    clrscr();
    g(2, 1);p("|==============================================|");
    g(2, 2);p("|                                              |");
    g(2, 3);p("|××××××××××××××××××××××××××××××××××××××××××××××|");
    g(2, 4);p("|                                              |");
    g(2, 5);p("|                                              |");
    g(2, 6);p("|                                              |");
    g(2, 7);p("|                                              |");
    g(2, 8);p("|==============================================|");
    g(2, 9);p("|                                              |");
    g(2, 10);p("|××××××××××××××××××××××××××××××××××××××××××××××|");
    g(21, 2);p("ABC BANK");
    g(4, 4);p("Current Balance: %d", current_bal);
    g(4, 9);p("PLEASE PRESS [ENTER] BACK TO MAIN MENU ");
    getch();
}

int main() {
    password:
    while (ctr < 4){
        clrscr();
        g(2, 2);p("Enter your password: ");
        loop:
        g(23, 2);s("%s", entered_password);
        pass = strcmp (entered_password, "memeshe");
        if (pass == 0){
            ask:
            clrscr();
            g(2, 1);p("|==============================================|");
            g(2, 2);p("|                                              |");
            g(2, 3);p("|××××××××××××××××××××××××××××××××××××××××××××××|");
            g(2, 4);p("|                                              |");
            g(2, 5);p("|                                              |");
            g(2, 6);p("|                                              |");
            g(2, 7);p("|                                              |");
            g(2, 8);p("|                                              |");
            g(2, 9);p("|                                              |");
            g(2, 10);p("|                                              |");
            g(2, 11);p("|==============================================|");
            g(2, 12);p("|                                              |");
            g(2, 13);p("|××××××××××××××××××××××××××××××××××××××××××××××|");
            g(17, 2);p("Welcome to Bank ABC");
            g(17, 4);p("Main Menu");
            g(4, 6);p("[1] Balance");
            g(4, 7);p("[2] Withdraw");
            g(4, 8);p("[3] Deposit");
            g(4, 9);p("[4] Exit");
            g(4, 10);p("Enter Choice: ");
            choice:
            g(18, 10);s("%d", &choice);
                if (choice == 1){
                     balance_menu();
                     getch();
                     goto ask;
                     break;
                }        
                if (choice == 2){
                    clrscr();
                    g(2, 1);p("|==============================================|");
                    g(2, 2);p("|                                              |");
                    g(2, 3);p("|××××××××××××××××××××××××××××××××××××××××××××××|");
                    g(2, 4);p("|                                              |");
                    g(2, 5);p("|                                              |");
                    g(2, 6);p("|                                              |");
                    g(2, 7);p("|                                              |");
                    g(2, 8);p("|                                              |");
                    g(2, 9);p("|                                              |");
                    g(2, 10);p("|                                              |");
                    g(2, 11);p("|==============================================|");
                    g(2, 12);p("|                                              |");
                    g(2, 13);p("|××××××××××××××××××××××××××××××××××××××××××××××|");
                    g(20, 2);p("ABC BANK");
                    g(4, 4);p("CURRENT BALANCE: %d", current_bal);
                    g(4, 5);p("ENTER WITHDRAW AMOUNT: ");
                    amount:
                    g(27, 5);s("%d", &withdraw);
                        if (withdraw % 100 == 0){   
                            if (current_bal > 500 && withdraw != current_bal && withdraw > 99){
                                current_bal = current_bal - withdraw;
                                    if (current_bal > 500){
                                        g(4, 6);p("CONFIRM AMOUNT? Y/N: ");
                                        g(4, 6);s("%c", ans);
                                        if (ans == 'Y' || ans == 'y'){
                                            //amount_again:
                                            clrscr();
                                            g(2, 1);p("|==============================================|");
                                            g(2, 2);p("|                                              |");
                                            g(2, 3);p("|××××××××××××××××××××××××××××××××××××××××××××××|");
                                            g(2, 4);p("|                                              |");
                                            g(2, 5);p("|                                              |");
                                            g(2, 6);p("|                                              |");
                                            g(2, 7);p("|                                              |");
                                            g(2, 8);p("|                                              |");
                                            g(2, 9);p("|                                              |");
                                            g(2, 10);p("|                                              |");
                                            g(2, 11);p("|==============================================|");
                                            g(2, 12);p("|                                              |");
                                            g(2, 13);p("|××××××××××××××××××××××××××××××××××××××××××××××|");
                                            g(19, 2);p("ABC BANK");
                                            g(4, 4);p("WITHDRAW SUCCESS!");
                                            g(4, 5);p("WITHDRAW AMOUNT: %d", withdraw);
                                            g(4, 6);p("REMAINING BALANCE: %d", current_bal);
                                            g(4, 12);p("PLEASE PRESS [B] TO BACK TO MAIN MENU: ");
                                            scan:
                                            g(43, 12);s("%s", &ans);
                                            if (ans == 'B' || ans == 'b'){
                                                goto ask;
                                            }
                                            else {
                                            g(2, 1);p("|==============================================|");
                                            g(2, 2);p("|                                              |");
                                            g(2, 3);p("|××××××××××××××××××××××××××××××××××××××××××××××|");
                                            g(2, 4);p("|                                              |");
                                            g(2, 5);p("|                                              |");
                                            g(2, 6);p("|                                              |");
                                            g(2, 7);p("|                                              |");
                                            g(2, 8);p("|                                              |");
                                            g(2, 9);p("|                                              |");
                                            g(2, 10);p("|                                              |");
                                            g(2, 11);p("|==============================================|");
                                            g(2, 12);p("|                                              |");
                                            g(2, 13);p("|××××××××××××××××××××××××××××××××××××××××××××××|");
                                            g(2, 7);p("INVALID INPUT");
                                            g(2, 6);p("              ");
                                            goto scan;
                                            } 
                                        }
                                        else if (ans == 'N' || ans == 'n'){
                                            g(27, 5);p("               ");
                                            goto amount;
                                        }else {
                                            g(4, 12);p("INVALID AMOUNT");
                                            goto amount;
                                        }
                                    }
                                    else {
                                    g(2, 1);p("|==============================================|");
                                    g(2, 2);p("|                                              |");
                                    g(2, 3);p("|××××××××××××××××××××××××××××××××××××××××××××××|");
                                    g(2, 4);p("|                                              |");
                                    g(2, 5);p("|                                              |");
                                    g(2, 6);p("|                                              |");
                                    g(2, 7);p("|                                              |");
                                    g(2, 8);p("|                                              |");
                                    g(2, 9);p("|                                              |");
                                    g(2, 10);p("|                                              |");
                                    g(2, 11);p("|==============================================|");
                                    g(2, 12);p("|                                              |");
                                    g(2, 13);p("|××××××××××××××××××××××××××××××××××××××××××××××|");
                                    g(19, 2);p("ABC BANK");
                                    g(8, 5);p("CAN'T WITHDRAW THE REMAINING AMOUNT");
                                    g(8, 6);p("THERE MUST BE AT LEAST 500 LEFT. ");
                                    g(25, 4);p("              ");
                                    current_bal = current_bal + withdraw;
                                    g(4, 12);p("PLEASE PRESS [B] TO BACK TO MAIN MENU: ");
                                    scan_again:
                                    g(43, 12);s("%s", &ans);
                                        if (ans == 'B' || ans == 'b'){
                                            goto ask;
                                        } else {
                                            goto scan_again;
                                        }
                                    }
                            } else if (withdraw == current_bal){
                                g(4, 12);p("INVALID AMOUNT");
                                g(27, 4);p("                 ");
                                goto amount;
                            }
                            else {
                                g(4, 12);p("NO AMOUNT HAS BEEN ENTERED");
                                g(27, 4);p("                 ");
                                goto amount;
                            } 
                        } else {
                            g(4, 12);p("INVALID AMOUNT");
                            g(27, 5);p("                 ");
                            goto amount;
                        }
                }       
                if (choice == 3){
                    clrscr();
                    g(2, 1);p("|==============================================|");
                    g(2, 2);p("|                                              |");
                    g(2, 3);p("|××××××××××××××××××××××××××××××××××××××××××××××|");
                    g(2, 4);p("|                                              |");
                    g(2, 5);p("|                                              |");
                    g(2, 6);p("|                                              |");
                    g(2, 7);p("|                                              |");
                    g(2, 8);p("|                                              |");
                    g(2, 9);p("|                                              |");
                    g(2, 10);p("|                                              |");
                    g(2, 11);p("|==============================================|");
                    g(2, 12);p("|                                              |");
                    g(2, 13);p("|××××××××××××××××××××××××××××××××××××××××××××××|");
                    g(19, 2);p("ABC BANK");
                    g(4, 4);p("DEPOSIT AMOUNT: ");
                    deposit_amount:
                    g(21, 4);s("%d", &deposit);
                        if (deposit % 100 == 0){
                            if (deposit > 99 && deposit < 20001){
                                clrscr();
                                g(2, 1);p("|==============================================|");
                                g(2, 2);p("|                                              |");
                                g(2, 3);p("|××××××××××××××××××××××××××××××××××××××××××××××|");
                                g(2, 4);p("|                                              |");
                                g(2, 5);p("|                                              |");
                                g(2, 6);p("|                                              |");
                                g(2, 7);p("|                                              |");
                                g(2, 8);p("|                                              |");
                                g(2, 9);p("|                                              |");
                                g(2, 10);p("|                                              |");
                                g(2, 11);p("|==============================================|");
                                g(2, 12);p("|                                              |");
                                g(2, 13);p("|××××××××××××××××××××××××××××××××××××××××××××××|");
                                current_bal = deposit + current_bal;
                                g(19, 2);p("ABC BANK");
                                g(4, 4);p("DEPOSIT SUCCESS!!");
                                g(4, 5);p("CURRENT BALANCE: %d", current_bal);
                                dep_scan:
                                g(4, 12);p("PLEASE PRESS [B] TO BACK TO [MAIN MENU]: ");
                                g(44, 12);s("%s", &ans);
                                if (ans == 'B' || ans == 'b'){
                                    goto ask;
                                }
                                else {
                                    g(46, 7);p("              ");
                                    goto dep_scan;
                                }
                            }
                            else {
                                g(4, 12);p("INVALID AMOUNT");
                                g(21, 4);p("                    ");
                                goto deposit_amount;
                            }
                        }
                        else {
                            g(4, 5);p("INVALID AMOUNT");
                            g(21, 4);p("                 ");
                            goto deposit_amount;
                        }
                }
                if (choice == 4){
                    g(2, 1);p("|==============================================|");
                    g(2, 2);p("|                                              |");
                    g(2, 3);p("|××××××××××××××××××××××××××××××××××××××××××××××|");
                    g(2, 4);p("|                                              |");
                    g(2, 5);p("|                                              |");
                    g(2, 6);p("|                                              |");
                    g(2, 7);p("|                                              |");
                    g(2, 8);p("|                                              |");
                    g(2, 9);p("|                                              |");
                    g(2, 10);p("|                                              |");
                    g(2, 11);p("|                                              |");
                    g(2, 12);p("|                                              |");
                    g(2, 13);p("|××××××××××××××××××××××××××××××××××××××××××××××|");
                    g(21, 2);p("CONFIRMATION");
                    g(8, 6);p("ARE YOU SURE YOU WANT TO EXIT? Y/N: ");
                    back_exit:
                    g(45, 6);s("%s", &ans);
                    if (ans == 'Y' || ans == 'y'){
                        clrscr();
                        g(23, 2);p("             ");
                        goto password;
                    }
                    else if (ans == 'N' || ans == 'n') {
                        goto ask;
                    }
                    else {
                        g(45, 6);p("           ");
                        goto back_exit;
                    } 
                }
                else {
                    g(4, 12);p("INVALID INPUT");
                    g(18, 10);p("        ");
                    goto choice;
                }
        }//this is for password
        else {
            if (ctr == 1){
                g(2, 3);p("WRONG PASSWORD! PLEASE TRY AGAIN");
                g(2, 4);p("ATTEMP: %d", ctr);
                ctr = ctr + 1;    
                g(23, 2);p("                     ");
                goto loop;
            }
            else if (ctr == 2){
                g(2, 3);p("WRONG PASSWORD! THIS IS YOUR LAST CHANCE!");
                g(2, 4);p("ATTEMP: %d", ctr);
                ctr = ctr + 1;    
                g(23, 2);p("                     ");
                goto loop;
            }
            else {
                clrscr();
                g(2, 2);p("Exited");
                exit(0);
            }
            
        }  
    }                
}    
