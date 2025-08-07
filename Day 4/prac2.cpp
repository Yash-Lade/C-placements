#include<stdio.h>

void fun(void);
int main(){
    fun();
    fun();
    fun();
}
void fun(){
    auto a=5;
    static int a=5; // both given then it will throw semantic error so comment one before running
    printf("%d ", a+=2);
}