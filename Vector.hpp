#ifndef MYVECTOR_H
#define MYVECTOR_H

class MyVector {
private:
    int* data;
    int size;
    int capacity;
    void resize(int newCapacity);

public:
    MyVector();
    ~MyVector();

    void push_back(int value);
    void pop_back();
    int get(int index) const;
    void set(int index, int value);
    int getSize() const;
    int getCapacity() const;
    bool isEmpty() const;
    void clear();
};

#endif
