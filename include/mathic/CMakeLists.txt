cmake_minimum_required(VERSION 2.8)

set(
  MATHIC_HDRS
  matrix_io.hpp
  matrix.hpp
  vector_io.hpp
  vector.hpp
  
)

install(
  FILES ${MATHIC_HDRS}
  DESTINATION include/mathic
)
