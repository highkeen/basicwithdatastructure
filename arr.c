#include <stdio.h>
#define MAX 5

int main()
{
    int arr[MAX];
    int x=100;
    int *p=&x;

    arr[0]=10;
    arr[1]=20;
    arr[3]=20;
    printf("\n%ld", arr);
    printf("\n%d", *arr);
    printf("\n%d", arr[0]);
    printf("\n%d", *(arr+1));

    

    *(arr+5)=50;  // arr[5]=50

    printf("\n%ld", (arr+5)); // baseaddress + WS*5


    printf("\n%d",*p);
    printf("\n%d",p[0]);

    printf("\n");

    return 0;
}