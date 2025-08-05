#include<stdio.h>

int fun(int x, int y){
    printf("   %d  %d",x++,y--);
}

int main(){
    int i=5;

    fun(--i,i++);
    fun(++i,i--);
    printf(" %d", i++);
}