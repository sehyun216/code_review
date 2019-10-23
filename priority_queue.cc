#include "priority_queue.h"

template <>
PriorityQueue<int>::PriorityQueue() {
}

template <>
PriorityQueue<int>::~PriorityQueue() {
}

template <>
bool PriorityQueue<int>::empty() const {
        return storage.empty();
}

template <>
int PriorityQueue<int>::size() {
        return storage.size();
}

template <>
const int& PriorityQueue<int>::top() const {
        return storage.top();
}

template <>
void tPriorityQueue<int>::pop() {
        storage.pop();
}

template <>
void PriorityQueue<int>::push(const int& val) {
        storage.push(val);
}
