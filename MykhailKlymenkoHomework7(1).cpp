#include <iostream>

template <typename T> class Stack {
private:
  T *arr;
  int size;
  int top;

public:
  Stack();
  void push(T);
  T pop();
  bool isFull();
  bool isEmpty();
};

template <typename T> Stack<T>::Stack() {
  size = 5;
  arr = new T[size];
  top = -1;
}

template <typename T> void Stack<T>::push(T data) { arr[++top] = data; }

template <typename T> T Stack<T>::pop() { return arr[top--]; }

template <typename T> bool Stack<T>::isFull() { return top == size - 1; }

template <typename T> bool Stack<T>::isEmpty() { return top == -1; }

int main() {
  Stack<int> s1;
  s1.push(10);
  s1.push(20);
  s1.push(30);
  s1.push(40);
  std::cout << s1.pop() << std::endl;
  std::cout << s1.pop() << std::endl;
  std::cout << s1.pop() << std::endl;
  std::cout << s1.pop() << std::endl;

  return 0;
}
