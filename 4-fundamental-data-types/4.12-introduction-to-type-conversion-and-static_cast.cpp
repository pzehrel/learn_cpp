/**
 * 类型转换和 static_cast 简介
 *
 *
 * 使用 static_cast 可以显示的转换类型，格式为：static_cast<目标类型>(带转换值):
 * eg. static_cast<unsigned int>(5.5)
 *
 *
 */
#include <cstdint>
#include <iostream>

void print(int x) { std::cout << x << '\n'; }

int main() {

  double d { 5.5 };
  print(static_cast<unsigned int>(d)); // (5)

  char ch { 'a' };
  std::cout << ch << " has value " << static_cast<int>(ch) << '\n'; // (97)

  int s { -1 };
  std::cout << static_cast<unsigned int>(s) << '\n'; // (4294967295) 回绕溢出

  unsigned int u { 4294967295 }; // largest 32-bit unsigned int
  std::cout << static_cast<int>(u) << '\n'; // C++20 前为实现定义（implementation-defined），C++20 起为模数环绕

  // std::int8_t 或 std::uint8_t 大多数情况下会被当作 chat 来处理
  // 如果需要打印出数字，需要显示的类型转换
  std::int8_t myInt { 65 };
  std::cout << static_cast<int>(myInt) << '\n'; // will always print 65

  return 0;
}
