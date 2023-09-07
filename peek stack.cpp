#include<iostream>
using namespace std;

void input(int size, int arr[]){
    for(int i = 0; i < size; i++){
        cout<<"Enter element "<<i + 1<<" : ";
        cin>>arr[i];
    }
}

void peek(int size, int arr[]){
    cout<<"The last element of stack is : "<<arr[size - 1];
    // peek is used to display the last element of stack.
}


void display(int size, int arr[]){
    cout<<"Elements of stack are :- "<<endl;
    for(int i = 0; i < size; i++){
        cout<<"Element "<<i + 1<<" is : "<<arr[i]<<endl;
    }
}


int main(){
    int size;
    cout<<"Enter size of stack : ";
    cin>>size;
    int array[size];
    input(size, array);
    display(size, array);
    peek(size, array);
    return 0;
}