#include <iostream>
#include <vector>
using namespace std;



namespace zich{

class Matrix{

private:
    vector<double> _matrix;
    int _rows;
    int _cols;

public:
        Matrix(int rows,int cols){
            vector<double> arr((uint)(rows*cols),0);
            this->_matrix = arr;
            this->_rows = rows;
            this->_cols = cols;
        }
        Matrix(vector<double> arr, int rows, int cols){
            // transfer the vector to the matrix
            vector<vector<double>> matrix((uint)rows,vector<double>((uint)cols));
            for(uint i=0; i<rows; i++){
                for(uint j=0; j<cols; j++){
                    matrix[i][j] = arr[i*(uint)cols+j];
                }
            }
        }
        ~Matrix(){}
        


        friend bool operator==(const Matrix& mat,const Matrix& other);
        friend bool operator!=(const Matrix& mat,const Matrix& other);
        friend bool operator<(const Matrix& mat,const Matrix& other);
        friend bool operator>(const Matrix& mat,const Matrix& other);
        friend bool operator<=(const Matrix& mat,const Matrix& other);
        friend bool operator>=(const Matrix& mat, const Matrix& other);


        // ostream operator
        friend ostream& operator<<(ostream& os, const Matrix& matrix);
        // istream operator
        friend istream& operator>>(istream& is, Matrix& matrix);

        
      

        // function to the minus operator
       friend Matrix operator-(const Matrix& mat ,const Matrix &other); // minus between two matrixs
       friend Matrix operator-(const Matrix &mat); // minus between this matrix and other
       friend Matrix operator-(const Matrix & mat, int a); // minus between matrix and a int number
       friend Matrix operator-(int a, const Matrix & mat); // minus between a int number and matrix
       friend Matrix operator-(double a, const Matrix & mat); // minus between a double number and matrix
       friend Matrix operator-(const Matrix & mat, double a); // minus between matrix and a double number
       friend void operator-=(Matrix & mat, double a); // minus between matrix and a double number
       friend void operator-=(Matrix & mat, int a); // minus between matrix and a int number
       friend void operator--(Matrix & mat); // decrement matrix by 1
       friend void operator-=(Matrix& mat1, const Matrix& mat2);



        // function to the multiplication operator
       friend Matrix operator*(const Matrix& mat , const Matrix &other); // multiplication between two matrixs
       friend Matrix operator*(const Matrix &other); // multiplication between this matrix and other
       friend Matrix operator*(int a, const Matrix &mat); // multiply between a int number and matrix
       friend Matrix operator*(const Matrix &mat, int a); // multiply between matrix and a int number
       friend Matrix operator*(double a, const Matrix &mat); // multiply between a double number and matrix
       friend Matrix operator*(const Matrix &mat, double a); // multiply between matrix and a double number
       friend void operator*=( Matrix & mat, double a); // multiply between matrix and a double number
       friend void operator*=( Matrix & mat, int a); // multiply between matrix and a int number
       friend void operator*=(Matrix& mat1, const Matrix& mat2); // multiply between two matrixs

      




        // function to the plus operator
        friend Matrix operator+(const Matrix& mat , const Matrix & other); // plus between two matrixs
        friend Matrix operator+(const Matrix &mat); // plus between this matrix and other
        friend Matrix operator+(const Matrix & mat, int a); // plus between matrix and a int number
        friend Matrix operator+(int a, const Matrix & mat); // plus between a int number and matrix
        friend Matrix operator+(double a, const Matrix & mat); // plus between a double number and matrix
        friend Matrix operator+(const Matrix &mat, double a); // plus between matrix and a double number
        friend void operator+=(Matrix & mat, double a); // plus between matrix and a double number
        friend void operator+=(Matrix & mat, int a); // plus between matrix and a int number
        friend Matrix operator++(Matrix & mat); // increment matrix by 1
        friend void operator+=(Matrix& mat1, const Matrix& mat2); // plus between two matrixs






    

};
}


