#include <iostream>
#include <cstdlib>
using namespace std;

void printarray(int array_name[], int size); // Function to print the array by iterating over it 
void generate_array(int array_name[], int size); // Initialize an random array of size <size>
void bubble_sort(int array_name[], int size); // Sort the array using the Bubble Sort Algorithm - Worst Case time complexity of O(n^2)

int main(){
    srand(time(nullptr)); // Setting seed as current time from Jan 1, 1970 in seconds so random numbers are different each time 
    int gen_array[10]; // Initializing integer array to be of size 10
    generate_array(gen_array, 10);
    printarray(gen_array, 10);
    bubble_sort(gen_array, 10);
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

void bubble_sort(int array_name[], int size){
    bool swap;
    int passes=0;
    int length_to_check=0;
    do{
        swap = false;
        for(int j = 0; j < size-1; j++){
            if(array_name[j] > array_name[j+1]){
                int temp = array_name[j];
                array_name[j] = array_name[j+1];
                array_name[j+1] = temp;
                swap = true;
            }}
        length_to_check++;
        printarray(array_name, 10);
        passes++;
    } while (swap==true);
    cout << "No. of passes : " << passes; 
}