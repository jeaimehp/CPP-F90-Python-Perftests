#include <iostream>
using std::cout;
using std::endl;

int main(){
for ( int i = 0; i < 10; i=i+2 ) {
    cout << "The index i = " << i << endl;
    	for (int j = 0; j < 100; j += 10){
         cout << "The index j = " << j << endl;
	}
    }
}

