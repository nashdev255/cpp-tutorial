#ifndef TEMPLATE_CPP
#define TEMPLATE_CPP

#include <iostream>

template <typename T>
T power(const T n, const int a) {
  T b = 1;
  for( int i = 0; i < a; i++ ) b *= n;
  return b;
}

template <typename T>
class Vector2 {
  private:
    T x, y;

  public:
    Vector2(T x = 0, T y = 0) : x(x), y(y) {};
    T operator*(const Vector2<T>& v) { return x * v.x + y * v.y; }

    template <typename U>
    friend Vector2 operator*(const U i, const Vector2<T> v);

};

int main() {
  Vector2<double> v1(2.5, 2);
  Vector2<double> v2(2.5, 4);
  double v = v1 * v2;

  std::cout << v << std::endl;

  return 0;
}

#endif
