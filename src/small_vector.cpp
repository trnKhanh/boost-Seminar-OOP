#include <boost/container/small_vector.hpp>
#include <iostream>

int main()
{
    boost::container::small_vector<int, 3> v;
    std::wcout << "Kích thươc lúc đầu: " << sizeof(v) << "\n"; //3 byte quản lý vector và 3 byte được khởi tạo trước
    
}