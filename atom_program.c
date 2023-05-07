#include<stdio.h>
int main(){

 int pin,choice;
 double balance=9999.99,currentBalance,withDraw,depositBalanceAmt;
 printf("Enter Your Secret Code::");
 scanf("%d",&pin);
 if(pin !=2020){
    printf("please Enter Valid Pin Code!!!\n");
 }
 else if(pin==2020){

     printf("Welcome To Our ATM Services\n");
     printf("1. Balance Check\n");
     printf("2. Cash WithDraw\n");
     printf("3. Cash Deposit\n");
     printf("4. Exit\n");
     printf("***************\n");
     printf("Please Proceed with your choice\n");
     scanf("%d",&choice);
     switch(choice){

 case 1:

     printf("Your Balance is=%lf",balance);
     break;

 case 2:
     printf("Enter the amount you want to withdraw= ");
     scanf("%lf",&withDraw);
    if(balance>withDraw){


        currentBalance=balance-withDraw;
        printf("Thanks! You Can Collect Your Cash\n");
        printf("Your Current Balance is=%.3lf\n",currentBalance);
    }
    else if(withDraw>balance){
    printf("Sorry! you have an insufficient balance");
     }
     break;
 case 3:
     printf("Enter The Amount Which You Want to Deposit= ");
     scanf("%lf",&depositBalanceAmt);
     balance=balance+depositBalanceAmt;
     printf("Your balance is=%.3lf",balance);
     break;
     case 4:
    printf("We are Thankful to you for using Our ATM Services ! ");
    break;
 default:
    printf("Sorry you have choice invalid Value ! try again ");
 }
return 0;
}
}
