#include <iostream>
#include "Vector.hpp"

int main() {
    MyVector vec;

    vec.push_back(5);
    vec.push_back(10);
    vec.push_back(15);

    for (int i = 0; i < vec.getSize(); i++) {
        std::cout << vec.get(i) << " ";
    }

    vec.set(1, 100);
    std::cout << "\nAfter set: " << vec.get(1) << "\n";

    vec.pop_back();
    std::cout << "Size after pop: " << vec.getSize() << "\n";

    vec.clear();
    std::cout << "Is empty: " << (vec.isEmpty() ? "Yes" : "No") << "\n";

    return 0;
}
