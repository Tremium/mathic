#ifndef MATHIC_PI_HPP_
#define MATHIC_PI_HPP_

#include <cmath>

namespace psst {
  namespace mathic {

    template <typename T>

    struct pi {
      static constexpr T value = ::std::atan((T)1) * 4;
    };

    template <typename T>
    constexpr T pi<T>::value;

  } // namespace mathic
} /* namespace psst */

#endif /* MATHIC_PI_HPP_ */