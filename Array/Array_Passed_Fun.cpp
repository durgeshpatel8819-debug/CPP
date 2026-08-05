#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    for(int i;i<size;i++){
    cout<<arr[i]<<" ";
    }
}
int main(){
    int num[]={ 10,20,30,40,50};
    int size=5;
    printArray(num,size);

}