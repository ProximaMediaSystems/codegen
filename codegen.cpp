#include <iostream>

template<typename T>
class Stack{
    private:
       std::vector<T> elems;
    public:
       void push(T const& elem);
       T pop() const;
}

template<typename T>
void Stack<T>::push(T const& elem)
{
   elems.push_back(elem);
}


int main()
{
   return 0
}