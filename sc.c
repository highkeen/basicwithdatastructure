#include<stdio.h>

void incre();
int g=10;
int main(){
    // register int x=10;
    // {
    //     int y=10;
    // }
    // printf("%d",x);

    incre();
    incre();
    incre();
    printf("\n");    
}


void incre(){
    static int i=1;
    printf("\n%d",i);
    i++;
}