#include <iostream>

using namespace std;


// If you have to delete a number/index from the array you can overwrite it using loops
int main(){
    int size = 4;
    int arr[size] = {1, 9, 5, 4};
    

    // You can ask the user to enter the index number they want to remove but we'll assume it is 2
    // cout << "Enter the index you want to remove" << endl;
    // cin >> IndexToBeRemoved;

    int IndexToBeRemoved = 2;
    for (int i= IndexToBeRemoved; i < size -1; i++){ // This wil start the loop from the index position to be deleted until the second last index
        arr[i] = arr[i+1]; // It will insert the value present in the next (i+1) index into the "i" index
    }
    size--; // After the loop runs, use this as the reduced array in the program that you need afterwards.

}

int main2(){
    int NumToBeInserted = 99; // Number to be inserted into the array
    int Index = 2; // Index at which the data is to be inserted

    int size = 4;
    int arr[4] = {1, 9 ,5 ,4};

    // This loop will start from the new/appended index of the array and input the preceding value in the every index up until the index where the new value is to be added.
    for (int i = size; i > Index; i++){
        arr[i] = arr[i-1];
    }
    arr[Index] = NumToBeInserted;
    size++; // After the loop runs, use this as the appended array in the program that you need afterwards


}