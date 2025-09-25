#include <iostream>

using namespace std;


// This method to create an array with a customizable size is not supported by 
// standalone C++ itself. (however some compilers may allow you to use it.)
int main(){
    int size;
    cout << "Enter the array size" << endl;
    cin >> size;
    int array[size];
}

// However a custom sized array can be created using the code below

int main2(){
    int size;
    cout << "Enter the array size" << endl;
    cin >> size;


    int* array = new int[size];
    // "int*" creates a pointer named "array" 
    // "new" allocates memory according to the "size" given in int[]
    // "int[]" just suggests that the array created will be of integers.  
}

int main3(){
    int arr[3] = {0, 1, 2};

    for (int i = 0; i < 3; i++){
        cout << arr[i] << endl; 
        // This will output the value present at each index of the array

        cout << arr << endl; 
        // In hindsight, it may seem this will print the entire array. However, it 
        // will print the address at the array is present in the memory.

        cout << (arr + i) << endl;
        // Similarly, this will print the address of the array added with the number "i"
        // e.g If the address is: 0F823A38 and "i" = 1 then it will print: 0F823A39

        // To get individual values, you can use;
        cout << *(arr + i) << endl;
        // The "*" before the "arr" is used for dereferencing; It will go in the memory
        // and look for the address that "arr" or "(arr + i)" is giving it and 
        // bring back the value present at the address to output.
    }
}

int main4(){
    int RandomArrayName[5];

    // To delete an array, you can use:
    delete[] RandomArrayName;
    // This will delete the array and release the memory back to the system.
}

