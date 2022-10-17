#include <iostream>

using std::cout;
using std::endl;
using std::string;

void displayNames( string names[], int size ){
    cout << "The names in alphabetical order are:" << endl;
    for( int i = 0; i < size; i++ ){
        cout << names[i] << endl;
    }
}