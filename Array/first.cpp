#include<iostream>
using namespace std;
int main(){
    int marks[6]={90,80,70,60,50};
    for(int i = 0; i < sizeof(marks) / sizeof(marks[0]); i++){
        cout << marks[i] << " ";
    }
}