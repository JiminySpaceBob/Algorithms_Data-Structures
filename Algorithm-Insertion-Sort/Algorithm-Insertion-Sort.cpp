#include <iostream>
#include <cstdlib>
using namespace std;

void printarray(int array_name[], int size); // Function to print the array by iterating over it 
void generate_array(int array_name[], int size); // Initialize an random array of size <size>
void insertion_sort(int array_name[], int size); // Sort the array using the Insertion Sort Algorithm - Worst Case time complexity of O(n^2)

int main(){
    srand(time(nullptr)); // Setting seed as current time from Jan 1, 1970 in seconds so random numbers are different each time 
    const int size = 10;
    int gen_array[size]; // Initializing integer array to be of size 10
    generate_array(gen_array, size);
    printarray(gen_array, size);
    insertion_sort(gen_array, size);
    return 0;
}

void printarray(int array_name[], int size){
    cout << "Array Elements: ";
    for (int i = 0; i < size; i++){ // Iterating over the array to print
        cout << array_name[i] << " ";
    }
    cout << endl;
}

void generate_array(int array_name[], int size){
    for(int i=0; i < size; i++){ // Filling the array with random numbers
        array_name[i] = rand();
    };
}

void insertion_sort(int array_name[], int size){
    
    for(int i = 1; i<size; i++){ // More efficient for when multiple numbers need to swapped since the actual swap occurs only once
        int key=array_name[i];
        int j = i-1;
        
        while(j >= 0 && array_name[j] > key){
            array_name[j+1] = array_name[j];
            j--;
        }
        array_name[j+1]=key;
        printarray(array_name, size);
    }
}