#include <stdio.h>
#include <unistd.h>
/**
* Main: this is just a code to mimick how
* atm manchine works in display mode only(nah play ohoo)
* Return: always success(0);
* and lastly,if u copy my code.your p*nis is small.haha
*/
int main()
{
    int amount = 0;
    int airchoice = 0;
    int count = 1;
    int bankcharges = 50;
    int choice = 0;
    double balance = 172429.53;
    int limit = 4;
    int pin[limit];
    printf("INSERT YOUR ATM\n");
    sleep(2);
    printf("\a");
    sleep(0.50);
    printf("WELCOME ADEOLA CHUKWUDI MALLAM\n");
    sleep(1);
    for(int i = 0; i < limit; i++){
      printf("ENTER PIN(%d): ", i);
      scanf("%d", &pin[i]);
    }
    sleep(1);
    printf("\n");
    while(balance > 0 & choice < 7){
      printf("(1) CHECK BALANCE\t(2) WITHDRAWAL\n");
      printf("(3) DEPOSIT\t\t(4) BUY AIRTIME\n");
      printf("(5) TRANSFER\t\t(6) ACTIVATE CARD\n");
      printf("(7) REMOVE CARD\n");
      printf("SELECT CHOICE: ");
      scanf("%d", &choice);
      int maxamount = 20000;
      if (choice == 1){
        printf("\nYOUR ACCT BALANCE IS %lf\n\n", balance);
        continue;
      }
      int withchoice;
      while(amount <= maxamount){
          if (choice == 2){
            printf("SELECT AMOUNT TO WITHDRAW(MAXIMUM 20000)\n\n");
            printf("(1) 1000\t(2) 2000\n(3) 5000\t(4) 10000\n(5) 15000\t(6) 20000\n");
            printf("(7) <20000\t");
            printf("(8) MAIN MENU\n");
            printf("SELECT CHOICE: ");
            scanf("%d", &withchoice);
            if(withchoice == 1 & count <= 3 & balance > 1000){
              printf("PLEASE TAKE YOUR CASH\nSKRWWW.......");
              sleep(3);
              printf("\a");
              balance = balance - 1000;
              printf("WITHDRAWAL COMPLETE,YOUR BALANCE IS : %lf\n\n", balance);
              count = count + 1;
              continue;
            }
            if (balance < 1000)
             printf("INSUFFICIENT BALANCE,PLEASE CHOOSE A LOWER AMOUNT IF POSSIBLE\n");
            if(withchoice == 2 & count <= 3 & balance > 2000){
              printf("PLEASE TAKE YOUR CASH\nSKRWWW.......");
              sleep(3);
              printf("\a");
              balance = balance - 2000;
              printf("WITHDRAWAL COMPLETE,YOUR BALANCE IS : %lf\n\n", balance);
              count = count + 1;
              continue;
            }
            if (balance < 2000)
             printf("INSUFFICIENT BALANCE,PLEASE CHOOSE A LOWER AMOUNT IF POSSIBLE\n");
            if(withchoice == 3 & count <= 3 & balance > 5000){
              printf("PLEASE TAKE YOUR CASH\nSKRWWW.......");
              sleep(3);
              printf("\a");
              balance = balance - 5000;
              printf("WITHDRAWAL COMPLETE,YOUR BALANCE IS : %lf\n\n", balance);
              count = count + 1;
              continue;
            }
            if (balance < 5000)
             printf("INSUFFICIENT BALANCE,PLEASE CHOOSE A LOWER AMOUNT IF POSSIBLE\n");
            if(withchoice == 4 & count <= 3 & balance > 10000){
              printf("PLEASE TAKE YOUR CASH\nSKRWWW.......");
              sleep(3);
              printf("\a");
              balance = balance - 10000;
              printf("WITHDRAWAL COMPLETE,YOUR BALANCE IS : %lf\n\n", balance);
              count = count + 1;
              continue;
            }
            if (balance < 10000)
             printf("INSUFFICIENT BALANCE,PLEASE CHOOSE A LOWER AMOUNT IF POSSIBLE\n");
            if(withchoice == 5 & count <= 3 & balance > 15000){
              printf("PLEASE TAKE YOUR CASH\nSKRWWW.......");
              sleep(3);
              printf("\a");
              balance = balance - 15000;
              printf("WITHDRAWAL COMPLETE,YOUR BALANCE IS : %lf\n\n", balance);
              count = count + 1;
              continue;
            }
            if (balance < 15000)
              printf("WITHDRAWAL COMPLETE,YOUR BALANCE IS : %lf\n\n", balance);
            if(withchoice == 6 & count <= 3 & balance > 20000){
              printf("PLEASE TAKE YOUR CASH\nSKRWWW.......");
              sleep(3);
              printf("\a");
              balance = balance - 20000;
              printf("WITHDRAWAL COMPLETE,YOUR BALANCE IS : %lf\n\n", balance);
              count = count + 1;
              continue;
            }
            if (balance < 20000){
             printf("INSUFFICIENT BALANCE,PLEASE CHOOSE A LOWER AMOUNT IF POSSIBLE\n");
             break;
            }
            if (withchoice == 7 & count <= 3){
              printf("ENTER AMOUNT(<20,000): ");
              scanf("%d", &amount);
              if(amount%500 == 0 & balance > amount){
                printf("PLEASE TAKE YOUR CASH\nSKRWWW.......");
                sleep(3);
                printf("\a");
                balance = balance - amount;
                printf("WITHDRAWAL COMPLETE,YOUR BALANCE IS : %lf\n\n", balance);
                count = count + 1;
                continue;
              }
              if (balance < amount)
                printf("INSUFFICIENT BALANCE,PLEASE TRY A LOWER AMOUNT IF POSSIBLE\n");
              if (amount%500 != 0)
                printf("THIS ATM CAN ONLY DISPENSE #500 AND #1000 NOTES\n\n");
            }
            if (withchoice == 8)
              break;
            if (count > 3){
              printf("YOU ALREADY EXCEEDED YOUR WITHDRAWAL LIMIT FOR TODAY\n");
              printf("CHECK BACK IN THE NEXT 24HRS\n\n");
              break;
            }
          }
          int deposit;
          if (choice == 3){
            printf("ENTER DEPOSIT AMOUNT: ");
            scanf("%d", &deposit);
            if (deposit >1000 & deposit <= 500000){
              printf("INSERT YOUR CASH INTO THE COUNTER AT THE LEFT\n");
              sleep(5);
              printf("SKRRRRRRR............\n");
              sleep(5);
              printf("COUNTER: %d\n", deposit);
              sleep(2);
              balance = balance + deposit - bankcharges;
              printf("DEPOSIT SUCCESSFUL,YOUR BALANCE IS %lf\n", balance);
              break;
              }
              else{
                printf("PLEASE ENSURE YOUR DEPOSIT AMOUNT IS MORE THAN #1000 AND LESS THAN #500,000\n");
                continue;
              }
          }
          int airtime;
          if (choice == 4){
            printf("SELECT NETWORK BELOW;\n");
            printf("(1) MTN\t(2) AIRTEL\n");
            printf("(3) GLO\t(4) 9MOBILE\n(5) MENU\n");
            printf("SELECT CHOICE: ");
            scanf("%d", &airchoice);
            if(airchoice > 0){
              while (airchoice < 5){
                printf("ENTER AMOUNT: ");
                scanf("%d", &airtime);
                if (airtime >= 50 & airtime <= 20000 & balance > airtime){
                  int number;
                  printf("ENTER NUMBER: ");
                  scanf("%d", &number);
                  sleep(1);
                  printf("PLEASE WAIT WHILE WE PROCESS YOUR REQUEST.....\n");
                  balance = balance - airtime;
                  sleep(3);
                  printf("AIRTIME SUCCESSFUL TRANSFERRED\n");
                  printf("YOUR BALANCE IS %lf\n\n", balance);
                  break;
                }
                if (balance < airtime){
                  printf("INSUFFICIENT BALANCE,PLEASE CHOSE A LOWER AMOUNT IF POSSIBLE\n");
                  break;
                }
                if (airtime < 50){
                  printf("PLEASE INPUT THE RIGHT AMOUNT(#50 - #20,000)\n");
                  continue;
                }
                if (airtime > 20000){
                    printf("PLEASE INPUT THE RIGHT AMOUNT(#50 - #20,000)\n");
                  }
              }
              if (airchoice == 5)
                break;
            }
          }
          if (choice == 5){
            int bankchoice;
            int accno;
            int transfer = 0;
            printf("SELECT BANK;\n");
            printf("(1) FIRST BANK\t(2) UNION BANK\n");
            printf("(3) UBA\t\t(4) STANBIC IBTC\n");
            printf("(5) ACCESS\t(6) GTBANK\n");
            printf("(7) MENU\n");
            printf("SELECT CHOICE: ");
            scanf("%d", &bankchoice);
            while(bankchoice < 7){
              printf("PLEASE ENTER TRANSFER AMOUNT: ");
              scanf("%d", &transfer);
              printf("PLEASE ENTER BENEFICIARY ACCT NO: ");
              scanf("%d", &accno);
              if (transfer >= 100 & transfer <= 500000 & balance > transfer){
                printf("YOU ARE TRANSFERRING %d TO MR BULABA BALABLUE\n", transfer);
                printf("PLEASE WAIT WHILE WE PROCESS YOUR TRANSFER.....\n");
                sleep(3);
                balance = balance - transfer;
                printf("TRANSFER SUCCESSFULL...\n");
                printf("YOUR BALANCE IS %lf\n", balance);
                sleep(1);
                break;
              }
              if (transfer < 100)
                printf("PLEASE INPUT THE CORRECT AMOUNT(#100 - #500,000)\n");
              if (transfer > 500000)
                printf("PLEASE INPUT THE CORRECT AMOUNT(#100 - #500,000)\n");
              if(balance < transfer){
               printf("INSUFFICIENT FUNDS,PLEASE CHOOSE A LOWER AMOUNT IF POSSIBLE\n");
               break;
             }
            }
            if (bankchoice == 7)
              break;
          }
          int q;
          int pinsize = 4;
          int com[pinsize];
          int pin[pinsize];
          //int *pointer = pin;
          if (choice == 6){
            for(q = 0; q < pinsize; q++){
              printf("ENTER NEW PIN[%d]: ", q);
              scanf("%d", &pin[q]);
            }
            printf("RE-ENTER PIN TO CONFIRM\n");
            for(q = 0; q < 4; q++){
              printf("ENTER NEW PIN[%d]: ", q);
              scanf("%d", &com[q]);
            }
            int otp;
            if (pin[0] == com[0] && pin[1] == com[1] && pin[2] == com[2] && pin[3] == com[3]){
              printf("WE JUST SENT AN OTP CODE TO ********275\n");
              printf("ENTER OTP CONFIRMATION CODE: ");
              scanf("%d", &otp);
              sleep(3);
              printf("YOUR CARD HAS BEEN ACTIVATED SUCCESFULLY\n\n");
              sleep(2);
              break;
            }
            else
              printf("YOU MADE AN ERROR WHY RE-ENTERING YOUR PIN\n");
          }
          if (choice == 7){
           printf("THANKS FOR BANKING WITH US AND TRUST OUR SERVICES\n");
           printf("WE LOVE YOU ;)\n");
           sleep(1);
           printf("\a");
           printf("CARD EJECTED SUCCESFULLY\n");
           break;
          }
        }
   }
    return(0);
  }
