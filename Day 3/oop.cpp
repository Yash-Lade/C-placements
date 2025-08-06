#include<iostream>
using namespace std;

class myClass{
    int a;
    public:
        myClass(int x){
            a=x;
            cout<<"my constructor "<<a<<endl;
        }
        ~myClass(){
            cout<<"my destructor "<<a<<endl;
        }
};

void myFun(int x){
    myClass obj(x);
}

int main(){
    myClass obj(1),obj(2),obj(3);
    myFun(4);
    myFun(5);
    return 0;
}