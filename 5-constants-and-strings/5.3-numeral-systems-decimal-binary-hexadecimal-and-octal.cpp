/**
 * 数字系统
 *
 *
 * 二进制字面量：0b开头，c++14开始支持
 * 八进制字面量：0开头
 * 十六进制字面量：0x开头
 *
 */

#include <iostream>

int main() {

  int oct { 012 }; // 0 before the number means this is octal

  int hex { 0xF }; // 0x before the number means this is hexadecimal

  int dec { 10 };

  int bin {}; // assume 16-bit ints
  bin = 0b1; // assign binary 0000 0000 0000 0001 to the variable
  bin = 0b11; // assign binary 0000 0000 0000 0011 to the variable
  bin = 0b1010; // assign binary 0000 0000 0000 1010 to the variable
  bin = 0b11110000; // assign binary 0000 0000 1111 0000 to the variable

  // 数字分隔符
  bin = 0b1011'0010; // assign binary 1011 0010 to the variable
  long value { 2'132'673'462 }; // much easier to read than 2132673462

  // 输出进制数字
  int x { 12 };
  std::cout << x << '\n'; // decimal (by default)
  std::cout << std::hex << x << '\n'; // hexadecimal
  std::cout << x << '\n'; // now hexadecimal
  std::cout << std::oct << x << '\n'; // octal
  std::cout << std::dec << x << '\n'; // return to decimal
  std::cout << x << '\n'; // decimal
  std::cout << std::bitset<4> { 12 } << '\n'; // 输出二进制
}
