#include <iostream>
#include  "ArrayTemplate.h"

int main() {

    int*pArray = nullptr;
    int size = 0;

    cout << "Array: " << pArray << endl;
    cout << "input size: ";
    cin >> size; //3

    pArray = new int[size]; //.... .... ....
    cout << "Array: " << pArray << endl;

    randArray(pArray, size); // 4, 2, 6
    printArray(pArray, size);



    delete[] pArray;
    pArray = nullptr;

    return 0;
}