#include<stdio.h>

int main(){

    FILE *file;
    int balance,choice,amount;

    file= fopen("balance.txt","r");
    if(file==NULL){
        file=fopen("balance.txt","w");
        fprintf(file,"0");
        fclose(file);
        balance=0;
    }
    else{
        fscanf(file,"%d",&balance);
        fclose(file);
    }


    while(1){
        printf("\n===== MENU =====\n");
        printf("1. check balance\n");
        printf("2. deposit\n");
        printf("3. withdraw\n");
        printf("4. exit\n");
        printf("Enter your choice");
        scanf("%d",&choice);

    switch(choice){
        
    case 1:
        printf("1. Your balance is: %d\n",balance);
        break;

    case 2:
        printf("Enter the deposit amount");
        scanf("%d",&amount);

        balance=balance+amount;
        file=fopen("balance.txt","w");
        fprintf(file,"%d",balance);
        fclose(file);

        printf("Amount deposited sucessfully!\n");


        break;

    case 3:
        printf("Enter the amount to withdraw");
        scanf("%d",&amount);
        if(balance>=amount){
        balance=balance-amount;

        file=fopen("balance.txt","w");
        fprintf(file,"%d",balance);
        fclose(file);
        
        printf("Amount withdrawed sucessfully!\n");


  }
        else{
        printf("Insufficient balance\n");
  }

        break ;

    case 4:
        return 0;
        
    default:
    printf("Invalid choice!\n");

       }
    }
}






