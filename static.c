#include<stdlib.h>
#include<stdio.h>

static int j;
int fun1(){
    static int i = 0;
    i++;
    printf("%d\n",i);
}
int fun2(){
    j = 0;
    j ++;
    printf("%d\n",j);
}
int main(){
    for (int k = 0; k < 10; k++)
    {
        fun1();
        fun2();
    }
    return 0;
}