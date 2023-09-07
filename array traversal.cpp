#include<iostream>
using namespace std;

void display(int arr[]){
    for(int i = 0; i < 5; i++){
        cout<<arr[i]<<", ";
    }
}

int main(){ 
    int array[5] = {};
    for (int i = 0; i < 5; i++){
        cout<<"Enter element "<<i + 1<<" : ";
        cin>>array[i];
    }
    cout<<endl;
    cout<<"Elements are :";

    display(array);
}