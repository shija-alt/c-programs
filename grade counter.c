#include<stdio.h>

int main(){
    int i;
    int countA = 0;
    int countF = 0;
    char grades[10]={'A','F','C','A','B','A','C','B','F','B'};

    for(i=0;i<10;i++){
        if(grades[i]=='A')
        countA++;
        if(grades[i]=='F')
        countF++;

}
printf("The number of students with grade A:%d\n",countA);
printf("The number of students with grade F:%d\n",countF);


return 0;
}
