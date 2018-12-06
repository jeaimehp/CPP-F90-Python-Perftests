#include<iostream>
using std::cin;
using std::cout;
using std::endl;

bool the_function(int marty_mcfly_past, int &delorean_past)
    {
    cout << "marty_mcfly_past in function before set marty_mcfly_past= " << marty_mcfly_past << endl;
    marty_mcfly_past = 1955;
    delorean_past = marty_mcfly_past * 10;
    cout << "marty_mcfly_past in function after set marty_mcfly_past= " << marty_mcfly_past << endl;
    return true;
    }
int main()
    {
    int marty_mcfly =1985;
    int delorean = 0;
    cout << "marty_mcfly before function call= " << marty_mcfly << endl;
    bool worked = the_function(marty_mcfly,delorean);
    cout << "Did it work? " << std::boolalpha << worked << endl;
    cout << "var after function call= " << marty_mcfly << "," << delorean << endl;
    }
