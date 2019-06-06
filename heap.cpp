#include "heap.h"

Heap::Heap() {
    values = vector<int>();
}

Heap::Heap(vector<int> vals) {
    values = vals;
}

int Heap::top() {
    return values.size() ? values[0] : -1;
}

void Heap::push(int val) {
    values.push_back(val);
    sift_up();
}

void Heap::pop() {
    if (values.empty()) return;
    int n = values.size();
    swap(values[0], values[n - 1]);
    values.pop_back();
    sift_down();
}

void Heap::sift_up() {
    int n = values.size();
    int cur = n - 1;
    int prt = (cur - 1) / 2;
    while (cur > 0 && values[cur] < values[prt]) {
        swap(values[cur], values[prt]);
        cur = prt;
        prt = (cur - 1) / 2;
    }
}

void Heap::sift_down() {
    int n = values.size();
    int cur = 0;
    int left = cur * 2 + 1, right = (cur + 1) * 2;
    while ((left < n && values[cur] > values[left]) || (right < n && values[cur] > values[right])) {
        if (right < n && values[right] < values[left]) { // attention check right here
            swap(values[cur], values[right]);
            cur = right;
        } else { // here handles more conditions than you may have thought
            swap(values[cur], values[left]);
            cur = left;
        }
        
        left = cur * 2 + 1;
        right = (cur + 1) * 2;
    }
}
