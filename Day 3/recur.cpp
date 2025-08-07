#include<iostream>
using namespace std;

int fun(int n){
    int x=1,k;
    if(n==1) return x;
    else{
        for(k=1;k<n;k++){
            x=x+fun(k)*fun(n-k);
        }
        return x;
    }

    return 0;
}

int main(){
    cout<<fun(5);
}