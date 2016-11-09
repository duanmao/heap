#include <vector>
using namespace std;

struct Heap {
    vector<int> values;
    Heap(int val);

    void insert(int val);
    void pop();
    int top();
};
