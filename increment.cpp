/*Test incrementing a variable
 *Written by: Je'aime Powell
 *Class: COE322
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main () {
    int i = 0;
    cout << "i is equal to " << i << endl;
    i=i + 1; // increments the variable i by 1
    cout << "i+1 is equal to " << i << endl;
    cout << "i++ is equal to " << i++ << endl;
    cout << "i is equal to " << i << endl;
    cout << "i-- is equal to " << i-- << endl;
    cout << "i is equal to " << i << endl;
    cout << "++i is equal to " << ++i << endl;
    cout << "i is equal to " << i << endl;
    cout << "--i is equal to " << --i << endl;

}
