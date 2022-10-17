#include <iostream>

using std::string;

void Swap( string& data1, string& data2 ){
    string temp = data1;
    data1 = data2;
    data2 = temp;
}