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
    int RandomArrayName[5];

    // To delete an array, you can use:
    delete[] RandomArrayName;
    // This will delete the array and release the memory back to the system.
}
