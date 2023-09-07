#include<iostream>
using namespace std;


void input(int size, int arr[], int &top){

    for(int i = 0; i < size; i++){

    char choice;
        cout<<"Do you want to add element ?  Press Y/y for yes,  N/n for no ";
        cin>>choice;
        if(choice == 'y' || choice == 'Y'){
            cout<<"Enter element "<<i + 1<<" : ";
            cin>>arr[i];
            top++;
        }
        else if(choice == 'N' || choice =='n'){
            break;
        }
        else{
            cout<<"Not valid"<<endl;
            break;
        }     

        //when we dont give full input in array and leave few elements, compiler automatically turns those elements to 0.
    }
    cout<<endl;
}


void isFull(int top, int size){
    if(top == size - 1){
        cout<<"Stack is Full !"<<endl;
    }
}


void isEmpty(int top, int size){
    if(top == -1){
        cout<<"Stack is Empty !"<<endl;
    }
}


void isNeither(int top, int size){
    if(top != -1 && top != size - 1){
        cout<<"Stack is neither Empty nor Full !"<<endl;
        cout<<"Only "<<top + 1<<" number of element exist"<<endl;
    }
}


void push(int &top, int size, int arr[]){
    if(top == size - 1){
        cout<<"Stack Overflow ! Cannot push more elements"<<endl;
    }
    else{
        int el;
        top++;
        cout<<"Enter element you want to push : ";
        cin>>el;
        arr[top] = el;
    }
}


void pop(int top, int size, int arr[]){
    if(top == -1){
        cout<<"Stack Underflow ! Cannot pop element as there is no element in stack"<<endl;
    }
    else{
        cout<<"Element popped : "<<arr[top]<<endl;
        top--;
    }
}


void display(int size, int arr[]){
    cout<<"Elements of Stack are : "<<endl;
    for(int i = 0; i < size; i++){
        cout<<"Element "<<i + 1<<" is "<<arr[i]<<endl;
    }
}


void peek(int size, int arr[]){
    cout<<"The last element of stack is : "<<arr[size - 1]<<endl;
    // peek is used to display the last element of stack.
}


int main(){
    int size;
    cout<<"Enter size of stack : ";
    cin>>size;
    int array[size];
    int top = -1;
    input(size, array, top);

    do{
    int ch;
    cout<<"Menu :-"<<endl;
    cout<<"Enter\n1. Display Stack\n2. Check if Stack is Full or Empty\n3. Peek\n4. Push\n5. Pop\n6. Exit"<<endl;
    cout<<"Enter choice : ";
    cin>>ch;

    switch(ch){
        case 1 :
            display(size, array);
            break;
        
        case 2 :
            isFull(top, size);
            isEmpty(top, size);
            isNeither(top,size);
            break;

        case 3 :
            peek(size, array);
            break;

        case 4 :
            push(top, size, array);
            break;
        
        case 5 :
            pop(top, size, array);
            break;

        case 6 :
            exit(0);

        default :
            break;

    }
    }
    while(true);

    return 0;
}