#include<iostream>
#define max 100
using namespace std;


void traversal(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" , ";
    }
    cout<<endl;
    //traversal means to display every element.
}

void append(int arr[], int size){
    int number;
    cout<<"Enter the number to be inserted at last position : ";
    cin>>number;
    arr[size - 1] = number;
    // append just replaces last number of array to new number input from user 
}

void insertion(int &size, int arr[]){
    int number, position;

    cout<<"Enter the number you want to insert : ";
    cin>>number;
    cout<<"Enter the position where you want to insert the number : ";
    cin>>position;
    
    for (int i = size; i >= position; i--)
    {
        arr[i] = arr[i-1];
    }

    arr[position - 1] = number;

    size++;
    //this code will run from last element to the element to be inserted at the position. runs backward.
}


void deletion(int arr[], int &size){
    int position;
    cout<<"Enter the position of element to be deleted : ";
    cin>>position;
    for (int i = position - 1; i < size - 1; i++)
    {
        arr[i] = arr[i+1];
    }
    size--;
    // this code will run from the position of element to be deleted till last element. runs forward. 
}

void linearsearch(int arr[], int size){
    int item, k = 0, i = 0;
    cout<<"Enter the element you want to search : ";
    cin>>item;
    for (i = 0; i < size; i++)
    {
        if (item == arr[i])
        {
            k = 1;
            break;
        }
    }
    if (k == 1)
    {
        cout<<"Element found at position "<<i + 1<<endl;
    }
    else{
        cout<<"Element not found";
    }
    // linear search searches the whole array element by element (one by one) starting from index 0 (position 1).
    // here k is like a boolean value  i.e. true false.
}


void binarysearch(int arr[], int size){
    int begin, mid, last;
    int element, k = 0;

    cout<<"Enter the element you want to search : ";
    cin>>element;

    while(begin <= size){
        mid = (begin + last)/2;
        if(element == arr[mid]){
            k = 1;
            break;
            // meaning the element is in middle. 
        }

        else if(element < arr[mid]){
            begin = 0;
            last = mid - 1;
            k = 1;
            // element is greater than middle element.
        }

        else if(element > arr[mid]){
            begin = mid + 1;
            last = size - 1;
            k = 1;
            // element is smaller than middle element.
        }

        else{
            k = 0;
        }


        if(k == 1){
            cout<<"Element "<<element<<" found";
        }
        else{
            cout<<"Element "<<element<<" not found";
        }
    }
} // binary search not working. check from chauhan code, a bit different.


void selectionsort(){

}


int main(){
    int size, array[max], input;
    cout<<"Enter the size of array : ";
    cin>>size;

    for (int i = 0; i < size; i++){
        cout<<"Enter element "<<i+1<<" : ";
        cin>>array[i];
    }

    do{
    cout<<"Menu"<<endl;
    cout<<"Enter :-\n 1 for Insertion\n 2 for Deletion\n 3 for Append\n 4 for Traversal\n 5 for Searching\n 6 to exit\n Enter you choice : ";
    cin>>input;

    switch(input){
        case 1 :
            insertion(size, array);
            break;

        case 2 :
            deletion(array, size);
            break;

        case 3 :
            append(array, size);
            break;

        case 4 :
            traversal(array,size);
            break;

        case 5 :
            char x;
            cout<<"Enter L / l for linear Search  ;  B / b for Binary Search : ";
            cin>>x;
            if (x == 'L' || 'l')
            {
                linearsearch(array, size);
            }
            else if(x == 'B' || x == 'b'){
                binarysearch(array, size);
            }
            break;

        case 6 :
            cout<<"Exit";
            exit(0);

        default :
            break;
    }
    }
    while (true);

    return 0;
}