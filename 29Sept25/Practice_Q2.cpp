#include <iostream>

using namespace std;


// Make a program that takes an input from user and searches if that number is in
// the array and then prints whether it was found or not.

int main(){
    int key;
    bool found = false;
    int arr[5] = {0, 5, 2, 19, -4};
    
    cout << "Enter the number to search" << endl;
    cin >> key;
    
    for (int i = 0; i < 5; i++){
        if (key == arr[i]){
            found = true;
            break; // Optional: this will stop the code if the value is found and wont run further iterations making it more efficient
        }
    }
    cout << "Was the value found? " << found << endl; 
} // This will print "1" if found, "0" if not found.