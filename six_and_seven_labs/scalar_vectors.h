#ifndef SCALAR_VECTORS_H
#define SCALAR_VECTORS_H
#include "includes.h"

template<typename T>
class scalar_vectors
{
private:
    std::vector<T> first_vector;
    std::vector<T> second_vector;
    int vector_size;
    double result;
public:
    scalar_vectors(int size){
        vector_size = size;
        result = 0;
        first_vector.resize(vector_size);
        second_vector.resize(vector_size);
        doThings();
    }
    void doThings();
    void fillVectors();
    void scalarMultiplication();
    void printResult();
};


template<typename T>
void scalar_vectors<T>::doThings(){
    fillVectors();
    scalarMultiplication();
    printResult();
}


template<typename T>
void scalar_vectors<T>::fillVectors()
{
    std::default_random_engine random_engine(rand()%10);
    std::uniform_int_distribution<T> distrib(0, 100);

    for(int i = 0; i < vector_size; i++){
        first_vector[i] = distrib(random_engine);
        second_vector[i] = distrib(random_engine);
    }
}


template<typename T>
void scalar_vectors<T>::scalarMultiplication()
{
    int i = 0;

    for(i = 0; i< vector_size; i++){
       result+=first_vector[i]*second_vector[i];
    }
}


template<typename T>
void scalar_vectors<T>::printResult()
{
    std::cout<<result<<std::endl;
}


#endif // SCALAR_VECTORS_H
