#include<stdio.h>

int main(){
    int i;
    int day;
    int sum=0;
    int count=0;
    float avg;

    int temp[5]={25,22,33,35,29};

    for(i=0;i<5;i++){
        sum=sum+temp[i];
        if(temp[i]>30)
        count++;
}
avg=sum/5.0;
printf("average temperature =  %f",avg);
printf("\ndays with temperature>30= %d",count);


return 0;
}
temperature
