#include <iostream>
#include "library.h"

using std::string;

int main(){
    int size;
    setSize( size );
    string* names = new string[size];
    setNames( names, size );
    sortNames( names, size, 1, 0 );
    displayNames( names, size );
    delete[]names;
    names = NULL;
}