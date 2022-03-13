#include "mat.hpp"
// #include "mat.cpp"
#include <stdlib.h>
#include <iostream>
   
   
   using namespace ariel;
    int main(){
        int row, col;
        std::cout << "the row :";
        std::cin >> row;
        std::cout << "the col :";
        std::cin >> col;
        char x, y;
        std::cout << "char x :";
        std::cin >> x;
        std::cout << "char y:";
        std::cin >> y;
        
 

        cout << mat(col,row,x,y);

        return 0;
    }