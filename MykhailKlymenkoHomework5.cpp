#include <iostream>

template <typename T> class List {
public:
  List();
  ~List();

  //удаление первого элемента в списке
  void pop_front();

  //добавление элемента в конец списка
  void push_back(T data);

  // очистить список
  void clear();

  // получить количество елементов в списке
  int GetSize() { return Size; }

  // перегруженный оператор []
  T &operator[](const int index);

  //добавление элемента в начало списка
  void push_front(T data);

  //добавление элемента в список по указанному индексу
  void insert(T data, int index);

  //удаление элемента в списке по указанному индексу
  void removeAt(int index);

  //удаление последнего элемента в списке
  void pop_back();

private:
  template <typename T> class Node {
  public:
    Node *pNext;
    T data;

    Node(T data = T(), Node *pNext = nullptr) {
      this->data = data;
      this->pNext = pNext;
    }
  };
  int Size;
  Node<T> *head;
};

template <typename T> List<T>::List() {
  Size = 0;
  head = nullptr;
}

template <typename T> List<T>::~List() { clear(); }

template <typename T> void List<T>::pop_front() {
  Node<T> *temp{head};

  head = head->pNext;

  delete temp;

  Size--;
}

template <typename T> void List<T>::push_back(T data) {
  if (head == nullptr) {
    head = new Node<T>(data);
  } else {
    Node<T> *current = this->head;

    while (current->pNext != nullptr) {
      current = current->pNext;
    }
    current->pNext = new Node<T>(data);
  }

  Size++;
}

template <typename T> void List<T>::clear() {
  while (Size) {
    pop_front();
  }
}

template <typename T> T &List<T>::operator[](const int index) {
  int counter{0};

  Node<T> *current = this->head;

  while (current != nullptr) {
    if (counter == index) {
      return current->data;
    }
    current = current->pNext;
    counter++;
  }
}

template <typename T> void List<T>::push_front(T data) {
  head = new Node<T>(data, head);
  Size++;
}

template <typename T> void List<T>::insert(T data, int index) {

  if (index == 0) {
    push_front(data);
  } else {
    Node<T> *previous = this->head;

    for (int i{0}; i < index - 1; i++) {
      previous = previous->pNext;
    }

    Node<T> *newNode = new Node<T>(data, previous->pNext);

    previous->pNext = newNode;

    Size++;
  }
}

template <typename T> void List<T>::removeAt(int index) {
  if (index == 0) {
    pop_front();
  } else {
    Node<T> *previous = this->head;
    for (int i = 0; i < index - 1; i++) {
      previous = previous->pNext;
    }

    Node<T> *toDelete = previous->pNext;

    previous->pNext = toDelete->pNext;

    delete toDelete;

    Size--;
  }
}

template <typename T> void List<T>::pop_back() { removeAt(Size - 1); }

int main() {
  std::cout << "In this program we create the list of values and perform "
               "operations with it"
            << '\n';

  List<int> lst;
  lst.push_front(9);
  lst.push_front(7);
  lst.push_front(106);
  lst.push_front(32);
  lst.push_front(54);
  std::cout << "Our list is:" << '\n';
  for (int i = 0; i < lst.GetSize(); i++) {
    std::cout << lst[i] << '\n';
  }
  std::cout << "Size: " << lst.GetSize() << '\n';

  std::cout << '\n'
            << "We removed a number from the beginning of the list " << '\n';

  lst.pop_front();
  for (int i = 0; i < lst.GetSize(); i++) {
    std::cout << lst[i] << '\n';
  }

  std::cout << '\n'
            << "We added a number to the beginning of the list " << '\n';
  lst.push_back(23);
  for (int i = 0; i < lst.GetSize(); i++) {
    std::cout << lst[i] << '\n';
  }

  std::cout << '\n' << "We removed a number from the end of the list " << '\n';

  lst.pop_back();
  for (int i = 0; i < lst.GetSize(); i++) {
    std::cout << lst[i] << '\n';
  }

  lst.insert(44, 3);
  std::cout << '\n'
            << "We added a number to the list in accordance with its position"
            << '\n';
  for (int i = 0; i < lst.GetSize(); i++) {
    std::cout << lst[i] << '\n';
  }

  lst.removeAt(2);
  std::cout
      << '\n'
      << "We removed a number from the list in accordance with its position"
      << '\n';
  for (int i = 0; i < lst.GetSize(); i++) {
    std::cout << lst[i] << '\n';
  }

  std::cout << '\n'
            << "We added a number to the beginning of the list " << '\n';
  lst.push_front(4);

  for (int i = 0; i < lst.GetSize(); i++) {
    std::cout << lst[i] << '\n';
  }
  std::cout << '\n';
  lst.clear();
  std::cout << "The list is empty" << '\n';
  std::cout << "Size: " << lst.GetSize() << '\n';

  return 0;
}
