#include<iostream>
using namespace std;

void traversal(int arr[], int a){
    for (int i = 0; i < a; i++){
        cout<<arr[i]<<", ";
    }
}

void input(int i, int arr[]){
    for (int a = 0; a < i; a++){
        cout<<"Enter element "<<a<<" : ";
        cin>>arr[a];
    }
}

int main(){
    int i;
    cout<<"Enter size of array : ";
    cin>>i;
    int array[i];

    input(i, array);
    
    cout<<"Elements are : ";
    traversal(array, i);
    
    return 0;
}