#include <iostream>

using namespace std;


// We have an array[5] = {2, 3, 9, 6, 7}
// Create a program that gives the output:
// 2, 3
// 2, 9
// 2, 6
// 2, 7
// 3, 9
// 3, 6
// 3, 7
// 9, 6
// 9, 7
// 6, 7


int main(){
    int j;
    int arr[5] = {2, 3 , 9, 6, 7};
    for (int i = 0; i < 4; i++){ // The values of "i" were restricted to the second last index in the output hence we used "i < 4"
        j = i + 1; // "j"'s starting value was always one greater than "i" so we reset it before every inner loop

        for (j; j < 5; j++){
            cout << arr[i] << ", " << arr[j] << endl;
        }
    }
}