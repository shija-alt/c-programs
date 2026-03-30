#include<stdio.h>
int main(){
    int i;
    int sum = 0;
    int max;
    int day;

    int apples[7]={33,20,10,7,34,23,18};

    max=apples[0];
    day =0;

    for(i=0;i<=7 ;i++)
        {
        sum=sum+apples[i];
        if (apples[i]>max){
        max=apples[1];
        day=i;
        }
              }
            printf("total apples sold %d\n",sum);
            printf("max apples sold %d\n",max);
            printf("day with max sales %d\n",day);





}
