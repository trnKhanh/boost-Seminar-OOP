#include <boost/container/small_vector.hpp>
#include <iostream>
#include <vector>
#pragma pack(1)
using namespace boost::container;
using namespace std;
int main()
{
    small_vector<int, 10> a;
    std::vector<int> b(2);
    cout << sizeof(a) << endl;
    for(int i=0; i < 100; ++i) a.push_back(i);
    cout << a.size() << endl;
    cout << sizeof(a) << endl;
}