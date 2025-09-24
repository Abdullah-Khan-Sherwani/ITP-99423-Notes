#include <iostream>

using namespace std;

// Make a code which checks values across an entire array and outputs 
// only the largest value in the array.
int main(){
    int num, max = 0;
    int arr[3] = {3, 11, 2};

    for (int i=0; i < 3; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    cout << "Maximum value is: " << max << endl;
}

// Optional: You can input the value in the first index (arr[0]) directly into "max"
// and then move into the "for" loop. That will reduce the number of iterations the
// code will run for and should work for every collection of numbers (positives or negatives)