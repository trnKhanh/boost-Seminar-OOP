#include <boost/container/static_vector.hpp>
#include <vector>
#include <array>
#include <iostream>

const int Nmax = 10;

class A {
public:
    A()
    {
        std::cout << "I am constructed\n";
    }
};
int main()
{
    boost::container::static_vector<A, Nmax> v;
    std::cout << "Array\n";
    std::array<A, Nmax> a;
    
    return 0;
}