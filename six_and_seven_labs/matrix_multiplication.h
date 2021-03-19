#ifndef MATRIX_MULTIPLICATION_H
#define MATRIX_MULTIPLICATION_H
#include "includes.h"

//чисто столбцов первой матрицы = числу строк второй матрицы

template<typename T>
class matrix_multiplication
{
private:
    std::vector<std::vector<T>> matrix;
    int columns = 0;
    int rows = 0;
public:
    matrix_multiplication(int rows, int columns)
    {
        this->columns = columns;
        this->rows = rows;
        matrix.resize(rows, std::vector<T>(columns));
    }

    void fillMatrix();
    void printMatrix();

};


template<typename T>
void matrix_multiplication<T>::fillMatrix()
{
    std::default_random_engine random_engine(rand()%10);
    std::uniform_real_distribution<T> distrib(0, 100);

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            matrix[i][j] = distrib(random_engine);
        }
    }
    printMatrix();
}

template<typename T>
void matrix_multiplication<T>::printMatrix()
{
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            std::cout<<matrix[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
}

#endif // MATRIX_MULTIPLICATION_H
