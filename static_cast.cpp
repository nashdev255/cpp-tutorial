#include <iostream>

class Degree {
  private:
    int degree;

  public:
    Degree(int d = 0) : degree(d) {}
    ~Degree() {}

    void operator=(int d) {
      degree = d;
    }

    // force to cast explicitly
    explicit operator int() {
      return degree;
    }

    friend std::ostream& operator<<(std::ostream& os, const Degree& d) {
      os << d.degree;
      return os;
    }

};

int main() {
  Degree theta_0 = 30;

  int val = static_cast<int>(theta_0);

  std::cout << val << std::endl;

  return 0;
}

/*
int main() {
  double pi = 3.14;

  // implicit cast
  // int p = pi;

  // explicit cast
  int p = static_cast<int>(pi);

  std::cout << p << std::endl;

  return 0;
}
*/
