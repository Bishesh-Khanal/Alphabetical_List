#include <iostream>
#include <cmath>
#include "library.h"

using std::string;

void sortNames( string names[], int size, int position, int index ){
    if( position < size ){
        if( names[position][index] == ' ' || names[position - 1][index] == ' ' ){
            if( names[position][index] == ' ' && names[position - 1][index] != ' ' ){
                Swap( names[position], names[position - 1] );
                sortNames( names, size, position - 1, 0 );
            } else if( names[position][index] != ' ' && names[position - 1][index] == ' ' ){
                sortNames( names, size, position + 1, 0 );
            } else{
                sortNames( names, size, position, index + 1 );
            }
        } else{
            if( int( names[position][index] ) < int( names[position - 1][index] ) ){
                Swap( names[position], names[position - 1] );
                sortNames( names, size, position - 1, 0 );
            } else if( int( names[position][index] ) == int( names[position - 1][index] ) ){
                if( index == fmin( names[position].length(), names[position - 1].length() ) - 1 ){
                    if( names[position].length() < names[position - 1].length() ){
                        Swap( names[position], names[position - 1] );
                        sortNames( names, size, position - 1, 0 );
                    } else{
                        sortNames( names, size, position + 1, 0 );
                    }
                } else{
                    sortNames( names, size, position, index + 1 );    
                }
            } else{
                sortNames( names, size, position + 1, 0 );
            }
        }
    }
}