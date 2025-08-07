#include<stdio.h>
int main(){
    int x;
    char *ptr;

    x=622,100,101;
    printf("%d", (*(char*)&x)*(x%3));
    return 0;
}