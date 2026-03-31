//Bank Balance A user has balances in 5 different bank accounts.
//Task: Store balances 
//Find total money
//Find the richest account

#include<stdio.h>

int main(){
    int i;
    int sum=0;
    int richest;

    int balance[5]={15000,34000,24000,49000,10000};

    richest=balance[0];
    
    for(i=0;i<5;i++){
        sum+=balance[i];
        if(balance[i]>richest){
        richest=balance[i];
        }

}
printf("total money %d\n",sum);
printf("richest amount %d",richest);
return 0;
}
