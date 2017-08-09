#ifndef _INT8_H_
#define _INT8_H_

#include <cstddef>

//! A minimized int8 type which will act mostly as int8_t but will be treated as integer by std::cout.
struct int8 {
  int8() {}
  int8(int8_t x) : val(x) {}
  operator int() {return val;}

  template <class = void>
  operator int8_t &() & {return val;}
  template <class = void>
  operator const int8_t &() const {return val;}

  // auto operator&() {return &val;} // may not needed
  // auto operator&() const {return &val;}

  int8_t val;
};

//! unsigned version of int8
struct uint8 {
  uint8() {}
  uint8(uint8_t x) : val(x) {}
  operator unsigned int() {return val;}

  template <class = void>
  operator uint8_t &() & {return val;}
  template <class = void>
  operator const uint8_t &() const {return val;}

  // auto operator&() {return &val;} // may not needed
  // auto operator&() const {return &val;}

  uint8_t val;
};

#endif // _INT8_H_
