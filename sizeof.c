#include<stdlib.h>
#include<stdio.h>

int main(){
    int *p = NULL;
    printf("%zd.\n",sizeof(p));
    printf("%zd.\n",sizeof(*p));
    printf("%zd.\n",sizeof(int));
    int a[100];
    printf("\n%zd.\n",sizeof(a));
    printf("%zd.\n",sizeof(a[100]));
    printf("%zd.\n",sizeof(&a));
    printf("%zd.\n",sizeof(&a[0]));
    return 0;
}