#include <boost/container/devector.hpp>
#include <iostream>

int main()
{
    boost::container::devector<int> A;
    for (int i = 0; i < 5; ++i)
        A.push_back(i);
    for (int i = 0; i < 5; ++i)
        A.push_front(-i);

    for (int i = 0; i < A.size(); ++i)
        std::cout << A[i] << " ";
    std::cout << "\n";

    A.pop_front();
    A.pop_back();
    std::wcout << "Mảng sau khi pop_front() và pop_back()\n";
    for (int i = 0; i < A.size(); ++i)
        std::cout << A[i] << " ";
    std::cout << "\n";
}