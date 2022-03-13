#include "mat.hpp"
#include <stdlib.h>
#include <iostream>
#include <vector>


using namespace std;
namespace ariel{
    string mat(int col, int row, char x, char y){
        vector<vector<char>> newMat (row,vector<char>(col));
        string ans;
        const int a = 33;
        const int b = 126;
        if (row %2 == 0 || col%2 ==0 ){
            throw runtime_error("The row and column number is always odd");
        }
        if (row < 0 || col < 0 ) {
            throw runtime_error("The row and column must be positive");
        }

        if (x <  a || x >  b || y <  a || y >  b ) {
            throw runtime_error("Invalid char");
        }

        int k=0; //indexs to check if we fill all the matrix
        int j=0;
        int r = row; // save the colum and row to print the marix
        int c = col;
        char temp = x; 

        while (k < row && j< col){

            //fill the first row in this iteration
            for (int i = j; i<col; i++){  
                newMat[k][i]= temp;
            }
            k++;
            //fill the last col in this iteration
            for (int i = k; i< row; i++){
                newMat[i][col-1] = temp;
            }
            col--;

            // check if there are a colum that not filled in the spesific iteration
            if(j < col){
                for(int i = row-1; i>= k; i--){ //if there is - we fill the colum from the end
                    newMat[i][j] = temp;
                }
                j++;
            }

            // check if there are a row that not filled in this spesific iteration
            if (k < row){
                for (int i = col-1; i>=j; i--){ //if there is - we fill the row from the end
                    newMat[row-1][i] = temp;
                }
                row--;
            }
            // Replace the char after each iteration
            if (temp == x){
                temp = y;
            }
            else {
                temp = x;
            }
        }

        //print the rug
        for ( int i = 0; i < r; i++){
            for (int j = 0; j < c; j++){
                ans += newMat[i][j];
            }
            ans += "\n"; 
        }
        return ans;
    }
}
