// Данная програмка исполняет все, указанное в задании, но я решил добавить ввод вручную, чтобы попрактиковаться.
#include <cmath>
#include <iostream>
#include <stdlib.h>

struct Equotion {
  std::int64_t a{}, b{}, c{}, D{};
  float x1{}, x2{};
};

void stringToInt(std::string &x, Equotion &res) {
  int8_t time{0}, n{};
  char a[5]{' ', ' ', ' ', ' ', '\0'}, b[6]{' ', ' ', ' ', ' ', ' ', '\0'},
      c[5]{' ', ' ', ' ', ' ', '\0'};
  for (char d : x) // main for cicle
  {
    if (d == 'x' || d == 'X' || d == '=' || d == 'х' || d == 'Х') {
      time++;
      n = 0;
    }

    if (time == 0) {
      if (d == '-') {
        a[n] = d;
        n++;
      }
      if (d >= '0' && d <= '9') {
        a[n] = d;
        n++;
      }
    }
    // if (time == 1)time++;
    else if (time == 1) {
      if (d == '-') {
        b[n] = d;
        n++;
      }
      if (d >= '0' && d <= '9') {
        if (d == '2' && n != 0) {
          b[n] = d;
          n++;
        } else if (d >= '0' && d <= '9' && d != '2') {
          b[n] = d;
          n++;
        } else
          n++;
      }
    } else if (time == 2) {
      if (d == '-') {
        c[n] = d;
        n++;
      }
      if (d >= '0' && d <= '9') {
        c[n] = d;
        n++;
      }
    }
  }
  res.a = atoi(a);
  res.b = atoi(b);
  res.c = atoi(c);
}

Equotion diskrimin(Equotion &e) {
  e.D = (e.b * e.b) - 4 * (e.a * e.c);
  if (e.D > 0) {
    e.x1 = (-e.b - (sqrt(e.D))) / (2 * e.a);
    e.x2 = (-e.b + (sqrt(e.D))) / (2 * e.a);
    return e;
  } else if (e.D == 0) {
    e.x1 = -e.b / 2 * e.a;
    e.x2 = 0;
    return e;
  } else {
    std::cout << "Has no roots" << std::endl;
    return e;
  }
}
bool bordersCheck(Equotion const &e) {
  int s = 255;
  // return 1 if borders are true
  if (e.a > -s && e.a < s) {
    if (e.b > -s && e.b < s) {
      if (e.c > -s && e.c < s) {
        return true;
      }
    }
  } else {
    return false;
  }
}

int main() {
  Equotion curr;
  std::string s{};
  std::cout << "Enter your equoution according example (7x2 + 2x - 8 = 0): "
            << std::endl;
  std::cin >> s;
  // s = "3x2+314x-5 =0";

  stringToInt(s, curr);
  std::cout << "Coeficient: a " << curr.a << std::endl
            << "Coeficient: b " << curr.b << std::endl
            << "Coeficient: c " << curr.c << std::endl;
  if (bordersCheck(curr) == true) {
    diskrimin(curr);
    std::cout << "Discriminant: " << curr.D << std::endl
              << "Root_1: " << curr.x1 << std::endl
              << "Root_2: " << curr.x2 << std::endl;
  } else {
    std::cout << "\nWrong coefficients!";
  }
}
