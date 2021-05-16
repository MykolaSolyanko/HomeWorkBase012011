#include <iostream>

template <typename T> void bubbleSort(T a[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = n - 1; i < j; j--) {
      if (a[j] < a[j - 1]) {
        std::swap(a[j], a[j - 1]);
      }
    }
  }
}

int main() {
  int a_int[5]{10, 50, 30, 40, 20};
  double a_double[5]{3.3, 4.2, 3.9, 7.2, 2.5};
  int n{5};

  bubbleSort<int>(a_int, 5);
  std::cout << "Integer Sorted array: ";
  for (int i = 0; i < n; i++) {
    std::cout << a_int[i] << "  ";
  }
  std::cout << std::endl;

  bubbleSort<double>(a_double, 5);
  std::cout << "Double Sorted array: ";
  for (int i = 0; i < n; i++) {
    std::cout << a_double[i] << "  ";
  }
  std::cout << std::endl;
  return 0;
}
