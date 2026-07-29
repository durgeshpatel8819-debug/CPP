#include<iostream>
using namespace std;
void test(int &x, int y){//formal parameter
    x=x+2;
    y=y*2;
    cout<<x<<endl<<y<<endl;
}
int main(){
    int a =3, b=4;//actual parameter
    test(a,b);
    cout<<a<<endl<<b;
}