#include "Vector.hpp"
#include <stdexcept>

MyVector::MyVector() {
    capacity = 4;
    size = 0;
    data = new int[capacity];
}

MyVector::~MyVector() {
    delete[] data;
}

void MyVector::resize(int newCapacity) {
    int* newData = new int[newCapacity];
    for (int i = 0; i < size; i++) {
        newData[i] = data[i];
    }
    delete[] data;
    data = newData;
    capacity = newCapacity;
}

void MyVector::push_back(int value) {
    if (size == capacity) {
        resize(capacity * 2);
    }
    data[size++] = value;
}

void MyVector::pop_back() {
    if (size > 0) {
        size--;
    }
}

int MyVector::get(int index) const {
    if (index < 0 || index >= size) {
        throw std::out_of_range("Index out of bounds");
    }
    return data[index];
}

void MyVector::set(int index, int value) {
    if (index < 0 || index >= size) {
        throw std::out_of_range("Index out of bounds");
    }
    data[index] = value;
}

int MyVector::getSize() const {
    return size;
}

int MyVector::getCapacity() const {
    return capacity;
}

bool MyVector::isEmpty() const {
    return size == 0;
}

void MyVector::clear() {
    size = 0;
}
