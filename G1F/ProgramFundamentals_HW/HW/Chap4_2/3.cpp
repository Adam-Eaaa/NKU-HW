#include <iostream>
#include <vector>
#include <utility>
// 堆的更新本质上就是在维护最大值，所以堆排序就是一种选择排序没问题吧:)
// 其实 std::priority_queue 就好了:) 但是堆排序很优雅想写一下

using namespace std;
vector<double> heap;
int ptr = 0;

void update(int index = 1) {
    // Update heap (subheap with root `index`)
    if ((index << 1) > ptr) // index is the leaf node
        return;
    // Child node: index << 1 and (index << 1) + 1
    if ((index << 1) + 1 > ptr) { // Orphan node
        if (heap[index] < heap[index << 1])
            swap(heap[index], heap[index << 1]);
        return;
    }

    int c1 = index << 1, c2 = (index << 1) + 1;
    if (heap[c1] < heap[c2]) swap(c1, c2);
    if (heap[index] < heap[c1]) swap(heap[c1], heap[index]);
    update(c1);
}

int main() {
    int n;
    cin >> n;
    heap.resize(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> heap[i];
    }
    ptr = n;
    for (int i = n / 2; i >= 1; --i) {
        update(i);
    }
    for (int i = 1; i < n; ++i) {
        swap(heap[1], heap[ptr--]); // 选择最大值并放在数组最后
        update(1);
    }
    for (auto i = 1; i <= n; ++i) {
        cout << heap[i] << ' ';
    }
    return 0;
}