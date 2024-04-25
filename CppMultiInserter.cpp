//////////////////////////////////////////////written by mht83/////////////////////////////////////////
#include <iostream>
#include <vector>


template <typename Container, typename T>
void addRangeToContainer(Container& container, T arg) {
    container.push_back(arg);
}

template <typename Container, typename... Args,typename T>
void addRangeToContainer(Container& container,T first_arg, Args... args) {
    
    container.push_back(first_arg);
    addRangeToContainer(container, args...);
}


int main() {
    std::vector<int> myVector = { 3,4 };
    addRangeToContainer(myVector, 10, 20, 30, 40, 50);

    
    std::cout << "Vector contents:";
    for ( auto value : myVector) {
        std::cout << " " << value;
    }
    std::cout << std::endl;

    return 0;
}

