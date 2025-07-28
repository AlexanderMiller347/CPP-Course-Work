#include <iostream>
#include <ctime>

using namespace std;

void sortArray(int array[], int size);

int main(){
    int numbers[] = {10,5,0,4,2,6,8,4};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    
    cout << "Unsorted: ";
    for(int num: numbers){
        cout << num << ' ';
    }
    
    sortArray(numbers, size);
    
    cout << "\nSorted: ";
    for(int num: numbers){
        cout << num << ' ';
    }
    
    
    return 0;
}

void sortArray(int array[], int size){
    int swaps;
    int temp;
    do{
        swaps = 0;
        for(int i = 0; i < size - 1; i++){
            if(array[i] > array[i+1]){
                temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
                swaps += 1;
        }
    }
    }while(swaps != 0);
}