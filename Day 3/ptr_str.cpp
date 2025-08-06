#include<iostream>
using namespace std;

void vc(char *a){
    if(*a && a!="_"){
        vc(a+1);
        char(*a);
    }
    cout<<*(a-1);
}

int main(){
    vc("ABCD_EFGH"); // It will give output as DCBA as '_'
    // return 0;
}