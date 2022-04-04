#include <iostream>
#include "Matrix.hpp"
#include <vector>
#include <fstream>
using namespace std;

namespace zich{


        bool operator==(const Matrix& mat,const Matrix& other){
            return true;
        }
        bool operator!=(const Matrix& mat,const Matrix& other){
            return true;
        }
        bool operator<(const Matrix& mat,const Matrix& other){
            return true;
        }
        bool operator>(const Matrix& mat,const Matrix& other){
            return true;
        }
        bool operator<=(const Matrix& mat,const Matrix& other){
            return true;
        }
        bool operator>=(const Matrix& mat, const Matrix& other){
            return true;
        }


        // ostream operator
       std:: ostream& operator<<(ostream& os, const Matrix& matrix){
            // print the matrix
            return os;
        }
        // istream operator
        istream& operator>>(istream& is, Matrix& matrix){
            // read the matrix
            return is;
        } 

        
      

        // function to the minus operator
       Matrix operator-(const Matrix& mat ,const Matrix &other){
              return mat;
         } // minus between two matrixs
       Matrix operator-(const Matrix &mat){
                return mat;
             } // minus between this matrix and other   
       
       Matrix operator-(const Matrix & mat, int a){
           return mat;
           
           }// minus between matrix and a int number
       Matrix operator-(int a, const Matrix & mat){
              return mat;
              
              }// minus between a int number and matrix
       
       Matrix operator-(double a, const Matrix & mat){
                return mat;
                
               }// minus between a double number and matrix
       
       Matrix operator-(const Matrix & mat, double a){
                return mat;
                
                }// minus between matrix and a double number
       
       void operator-=(Matrix & mat, double a){
                
                
                }// minus between matrix and a double number
       
       void operator-=(Matrix & mat, int a){
                
                
                }// minus between matrix and a int number
       
       void operator--(Matrix & mat){
                
                
                }// decrement matrix by 1
       
       void operator-=(Matrix& mat1, const Matrix& mat2){
                
                
                }// minus between two matrixs
       



        // function to the multiplication operator
       Matrix operator*(const Matrix& mat , const Matrix &other){
                return mat;
             } // multiplication between two matrixs
       
       Matrix operator*(const Matrix &other){
                return other;
             } // multiplication between this matrix and other
       
       Matrix operator*(int a, const Matrix &mat){
              return mat;
              
              }// multiply between a int number and matrix  
       
       Matrix operator*(const Matrix &mat, int a){
                return mat;
                
                }// multiply between matrix and a int number
       
       Matrix operator*(double a, const Matrix &mat){
           
                return mat;
                
                }// multiply between a double number and matrix
       
       Matrix operator*(const Matrix &mat, double a){
                return mat;
                
                }// multiply between matrix and a double number
       
       void operator*=( Matrix & mat, double a){
                
                
                }// multiply between matrix and a double number
       
       void operator*=( Matrix & mat, int a){
               
                
                }// multiply between matrix and a int number
       
       void operator*=(Matrix& mat1, const Matrix& mat2){
                
                
                }// multiply between two matrixs
       

      




        // function to the plus operator
       Matrix operator+(const Matrix& mat , const Matrix & other){
                return mat;
             } // plus between two matrixs
       
        Matrix operator+(const Matrix &mat){
                return mat;
             } // plus between this matrix and other
        
        Matrix operator+(const Matrix & mat, int a){
                return mat;
                
                }// plus between a int number and matrix    
        
        Matrix operator+(int a, const Matrix & mat){
                return mat;
                
                }// plus between a int number and matrix    
        
        Matrix operator+(double a, const Matrix & mat){
                return mat;
                
                }// plus between a double number and matrix 
        
        Matrix operator+(const Matrix &mat, double a){
                return mat;
                
                }// plus between matrix and a double number
        
        void operator+=(Matrix & mat, double a){
                
                
                }// plus between matrix and a double number 
       
        void operator+=(Matrix & mat, int a){
                
                
                }// plus between matrix and a int number
      
        Matrix operator++(Matrix & mat){
                return mat;
                
                }// increment matrix by 1
      
        void operator+=(Matrix& mat1, const Matrix& mat2){
               
                
                }// plus between two matrixs
            
}