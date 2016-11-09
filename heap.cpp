#include "heap.h"

Heap::Heap(int val) {
    values = vector<int>();    
    values.push_back(val);
}

int Heap::top() {
    return values.size() ? values[0] : -1;
}
