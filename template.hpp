#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP

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

#endif