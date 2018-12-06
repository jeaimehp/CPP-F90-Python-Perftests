#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main () {
    int a;
    int array_5_elements [5] = { 10, 11, 12, 13, 14 };
    cout << "First Element = " << array_5_elements [0] << endl;
    cout << "Second Element = " << array_5_elements [1] << endl;
    cout << "Third Element = " << array_5_elements [2] << endl;
    cout << "Fourth Element = " << array_5_elements [3] << endl;
    cout << "Fifth Element = " << array_5_elements [4] << endl;
    cout << "True Sixth Element = " << array_5_elements [100] << endl;
    
    cout << "size of an int:" << sizeof(a) << endl;
    cout << "size of our array:" << sizeof(array_5_elements) << endl;

    }
