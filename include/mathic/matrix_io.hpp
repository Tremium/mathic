#ifndef MATHIC_MATRIX_IO_HPP_
#define MATHIC_MATRIX_IO_HPP_
#include "matrix.hpp"
#include "vector_io.hpp"
#include <iostream>

namespace mathic {
  namespace detail {
    template <size_t, typename T>
    struct matrix_output;
    template <size_t N, typename T, size_t RC, size_t CC>
    struct matrix_output<N, matrix<T, RC, CC>> {
      typedef matrix<T, RC, CC> matrix_type;
      static void
      output(std::ostream &out, matrix_type const &m) {
        matrix_output<N - 1, matrix_type>::output(out, m);
        out << ",\n\t" << m.template at<N>();
      }
    };
    template <typename T, size_t RC, size_t CC>
    struct matrix_output<0, matrix<T, RC, CC>> {
      typedef matrix<T, RC, CC> matrix_type;
      static void
      output(std::ostream &out, matrix_type const &m) {
        out << m.template at<0>();
      }
    };
  } // namespace detail
  template <typename T, size_t RC, size_t CC>
  std::ostream &
  operator<<(std::ostream &out, matrix<T, RC, CC> const &m) {
    std::ostream::sentry s(out);
    if (s) {
      out << "{\n\t";
      detail::matrix_output<RC - 1, matrix<T, RC, CC>>::output(out, m);
      out << "\n}";
    }
    return out;
  }
} // namespace mathic
#endif /* MATHIC_MATRIX_IO_HPP_ */