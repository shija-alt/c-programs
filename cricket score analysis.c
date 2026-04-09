#include<stdio.h>

int main(){
    int max;
    int i;
    int count=0;
    int sum=0;

   int scores[10]={35,66,49,55,67,20,72,21,88,30};
   
   max = scores[0];
   
   for(i=0;i<10;i++){
        sum=sum+scores[i];
        if (scores[i]>max){
        max=scores[i];
    }
        if (scores[i]>50){
        count++;

            }
   }
   
printf("the highest score is %d\n",max);
printf("number of matches >50 is %d\n",count);
return 0;
}
