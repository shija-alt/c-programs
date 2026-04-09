#include<stdio.h>

int main(){
    int i;
    int n;
    int CHOICES;


    int seats[50];
    for(i=0;i<50;i++){
    seats[i]=0;
}
while(1){
     printf("\n===== MENU =====\n");
     printf("1. BOOK TICKET\n");
     printf("2. CANCEL TICKET\n");
     printf("3. VIEW SEATS\n");
     printf("4. EXIT\n");
     printf("ENTER YOUR CHOICE\n");
     scanf(" %d",&CHOICES);

    switch(CHOICES){
    case 1:{
        printf("ENTER SEAT NUMBER");
        scanf("%d",&n);

    if(n<0 || n>=50){
        printf("INVALID SEAT NUMBER \n");

     }
    else if(seats[n]==0){
        seats[n]=1;
        printf("BOOKED SUCCESSFULLY\n");
       }
    else {
        printf("ALREADY BOOKED\n");
       }
     }
     break;

    case 2:{
        printf("ENTER SEAT NUMBER");
        scanf("%d",&n);

    if(n<0||n>=50){
        printf("INVALID SEAT NUMBER\n");

       }
    else if(seats[n]==1){
        seats[n]=0;
        printf("CANCELLED SUCCESSFULLY\n");
       }
    else {
        printf("ALREADY EMPTY\n");
       }
       }
       break;

    case 3:{
        for(i=0;i<50;i++){

        if(seats[i]==0)
        printf(" SEAT %d:AVAILABLE\n",i);
        else
            printf("SEAT %d:BOOKED\n",i);
     }
     }
break;

    case 4:
        return 0;
     }

}


}
