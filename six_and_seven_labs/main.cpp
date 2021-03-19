#include <QCoreApplication>
#include <scalar_vectors.h>
#include <matrix_multiplication.h>

int main()
{
//    std::cout<<"Enter vector size"<<std::endl;
//    int size;
//    std::cin>>size;
//    scalar_vectors<double> vector(size);

    matrix_multiplication<int> A(5,6);
    system("pause");
    return 0;
}
