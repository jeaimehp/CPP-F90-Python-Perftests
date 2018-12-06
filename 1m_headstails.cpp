/*Heads Tails 1M times
 * Jeaime Powell
 * COE322
 */

#include <iostream>
using std::cout;
using std::endl;
#include <time.h>
int main () {
    srand (time(NULL));
    int rand();
    int heads=0;
    int tails=0;
    for (int i=0; i < 1000000; i++) {
    int random_number = rand();
    //cout << "The random number is " << random_number << endl;
    if (random_number%2 == 0) {
        heads++;    
	}
    else {
        tails++;
	}
    }
cout << "There were " << heads << " Heads" << endl;
cout << "There were " << tails << " Tails" << endl;
}
