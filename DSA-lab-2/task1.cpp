#include <iostream>
using namespace std;

int main() { 
    int size;
    cout<<"Enter the size of dynamic array :";
    cin>>size;

    int* arr = new int[size];
    

    for (int i = 0 ; i < size ; i++){
        arr[i] = i;
    }

    cout<<"array: [";
    for (int i = 0 ; i < size ; i++){
       cout<<i;
    }
    cout<<"]";

    delete[] arr;
    
return 0 ;}