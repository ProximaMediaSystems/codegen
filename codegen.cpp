#include <iostream>

template<typename T>
class Stack{
    private:
       std::vector<T> elems;
    public:
       void push(T const& elem);
}