#include "mat.hpp"
#include <stdlib.h>
#include <iostream>
   
   using namespace std;
   using namespace ariel;
    int main(){
        int row, col;
        char x, y;
        cout << "Please enter positive number that is the row:";
        cin >> row;
        cout << "Please enter positive number that is the col :";
        cin >> col;
        cout << "Please enter char x :";
        cin >> x;
        cout << "Please enter char y:";
        cin >> y;
        
 

        cout << mat(col,row,x,y);

        return 0;
    }
