#include "../include/mathic/matrix.hpp"
#include "../include/mathic/vector.hpp"
#include "../include/mathic/vector_io.hpp"
#include <iostream>

typedef mathic::vector<int, 2> point;
int main() {
  point p1{1, 2}, p2{2, 3};

  std::cout << p1 << " " << p2
            << " " << p1 * p2
            << " " << p1 + p2
            << std::endl;
  return 0;
}