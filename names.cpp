#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void setNames( string names[], int size ){
    cout << "Enter the names in random order:" << endl;
    getchar();
    for( int i = 0; i < size; i++ ){
        getline( cin, names[i] );
    }
}