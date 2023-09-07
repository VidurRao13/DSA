#include<iostream>
using namespace std;

int main(){
    int i;

    cout<<"enter length of array : ";
    cin>>i;

    int array[i];
    
    for (int a = 0; a < i; a++){
        cout<<"enter element "<<a<<" : ";
        cin>>array[a];
    }

    cout<<"Elements are : "<<endl;

    for (int a = 0; a < i; a++){
        cout<<array[a]<<endl;
    }
    
    return 0;
}