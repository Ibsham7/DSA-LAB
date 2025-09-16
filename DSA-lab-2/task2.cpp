// Write a C++ program that dynamically allocates an array of integers based on user input, calculates and prints the sum and average 
// of the array elements, and ensures proper memory deallocation.

#include <iostream>
using namespace std;

int calculateAvg(int arr[] , int size){
    int total = 0;
    for (int i = 0 ; i < size ; i++){
        total += arr[i];
    }
    cout<<"Sum: "<<total<<endl;
    return total/size;
}

int main() { 

    int size;
    cout<<"Enter the size of dynamic array :";
    cin>>size;

    int* arr = new int[size];
    
    int total = 0;

    for (int i = 0 ; i < size ; i++){
        arr[i] = i;
    
    }

    int average = calculateAvg(arr , size);
    cout<<"Average: "<<average<<endl;


    delete[] arr;

return 0 ;}

