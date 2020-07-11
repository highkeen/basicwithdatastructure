#include <stdio.h>

void fun(int);
int fun2(int);

int main()
{

    int x = 10, y,z=20;

    //y=++x; //x=x+1 / x+=1 // ++x

    //printf("\nx=%d, y=%d\n",x,y);

    //fun(x++); //t=x++
    //printf("\nx=%d\n", x);

    y=fun2(x++);
    printf("\nx=%d , y=%d\n",x,y);



    /*** Logical and***/

    x= 15>6 && (z=10);
    printf("\nx=%d,z=%d\n",x,z);

    







}

void fun(int t)
{
    printf("\nt=%d\n", t);
    t = 50;
    printf("\nt=%d\n", t);
}

int fun2(int z)
{
    return z++;
}

// int x=10;
// int y=x;

// y=20;
