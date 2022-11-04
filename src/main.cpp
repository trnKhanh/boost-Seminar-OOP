#include <boost/container/stable_vector.hpp>
#include <iostream>
#include <vector>
using namespace boost::container;
using namespace std;
int main()
{
    stable_vector<int> a1;
    a1.push_back(0);
    a1.push_back(1);
    int *id1 = &a1[1];
    cout << *id1 << endl;
    for(int i=2;i<10;i++) a1.push_back(i);
    cout << *id1 << endl;
}