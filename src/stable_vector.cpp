#include <boost/container/stable_vector.hpp>
#include <boost/type_index.hpp>
#include <iostream>
#include <vector>
#include <iomanip>

template<class T>
void printVector(T v)
{
    for (int i = 0; i < v.size(); ++i)
        std::cout << v[i] << " ";
    std::cout << "\n";
}
template<class T>
void printVector(T start, int num)
{
    int count = 0;
    for (T it = start; count < num;++it, ++count)
        std::cout << *it << " ";
    std::cout << "\n";
}
int main()
{
    boost::container::stable_vector<int> stableVector; //Cách khai báo stable_vector của boost
    std::vector<int> stdVector;

    for (int i = 0; i < 2; ++i)
    {
        stableVector.push_back(i);
        stdVector.push_back(i);
    }
    boost::container::stable_vector<int>::iterator stableIter = stableVector.begin();
    std::vector<int>::iterator stdIter = stdVector.begin();

    int *stablePtr = &stableVector[1];
    int *stdPtr = &stdVector[1];

    std::wcout << "\t Duyệt thông thường\n";
    std::cout << std::left << std::setw(38) << "boost::container::stable_vector<int>: ";
    printVector(stableVector);
    std::cout << std::left << std::setw(38) << "std::vector<int>: ";
    printVector(stdVector);

    std::wcout << "\t Duyệt dùng iterator\n";
    std::cout << std::left << std::setw(38) << "boost::container::stable_vector<int>: ";
    printVector(stableIter, 2);
    std::cout << std::left << std::setw(38) << "std::vector<int>: ";
    printVector(stdIter, 2);

    std::wcout << "Con trỏ trỏ đến phần tử 1:\n";
    std::cout << std::left << std::setw(38) << "boost::container::stable_vector<int>: " << stablePtr << " " << &stableVector[1] << "\n";
    std::cout << std::left << std::setw(38) << "std::vector<int>: " << stdPtr << " " << &stdVector[1] << "\n";

    std::wcout << "\nSau khi thêm phần tử vượt quá max_size\n";
    for (int i = 2; i < 10; ++i)
    {
        stableVector.push_back(i);
        stdVector.push_back(i);
    }

    std::wcout << "\t Duyệt thông thường\n";
    std::cout << std::left << std::setw(38) << "boost::container::stable_vector<int>: ";
    printVector(stableVector);
    std::cout << std::left << std::setw(38) << "std::vector<int>: ";
    printVector(stdVector);

    std::wcout << "\t Duyệt dùng iterator\n";
    std::cout << std::left << std::setw(38) << "boost::container::stable_vector<int>: ";
    printVector(stableIter, 10);
    std::cout << std::left << std::setw(38) << "std::vector<int>: ";
    printVector(stdIter, 10);

    std::wcout << "Con trỏ trỏ đến phần tử 1:\n";
    std::cout << std::left << std::setw(38) << "boost::container::stable_vector<int>: " << stablePtr << " " << &stableVector[1] << "\n";
    std::cout << std::left << std::setw(38) << "std::vector<int>: " << stdPtr << " " << &stdVector[1] << "\n";

}