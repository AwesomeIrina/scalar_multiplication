#include <QCoreApplication>
#include <scalar_vectors.h>

int main()
{
    std::cout<<"Enter vector size"<<std::endl;
    int size;
    std::cin>>size;
    scalar_vectors<double> vector(size);
    system("pause");
    return 0;
}
