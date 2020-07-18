#include<stdio.h>

void cbv(int);
void cbr(int &);


int main(){
    int x=10,a=5;
    int &y=x;

    printf("\n%d %d",x,y);
    
    y=20;

    printf("\n%d %d\n",x,y);

    cbv(a);
    printf("\nAfter call by value a = %d",a);    

    cbr(a);
    printf("\nAfter call by reference a = %d\n",a);    

    return 0;
}

void cbv(int arg){
    arg=20;
    printf("\nInside call by value argument x=%d",arg);    
}

void cbr(int &arg){
    arg=20;
    printf("\nInside call by reference argument x=%d",arg);        
}

