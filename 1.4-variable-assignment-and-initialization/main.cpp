/**
 * 列表初始化(花括号)是目前C++中推荐的初始化方式，能够有效防止窄化转换和未初始化变量的问题。
 */
#include <iostream>

int main() {

  int a; // 默认初始化（无初始化程序）

  // 传统初始化形式：
  int b = 5; // 复制初始化（等号后的初始值）
  int c(5); // 直接初始化（括号中的初始值）

  // 现代初始化形式（首选）：
  int d { 5 }; // 直接列表初始化（花括号中的初始值）
  int d2 = { 5 }; // 复制列表初始化到变量 d2 中（很少使用）
  int e {}; // 值初始化（空大括号）

  std::cout << "a: " << a << std::endl; // 未初始化的变量 e 可能包含垃圾值
  std::cout << "b: " << b << std::endl;
  std::cout << "c: " << c << std::endl;
  std::cout << "d: " << d << std::endl;
  std::cout << "d2: " << d2 << std::endl;
  std::cout << "e: " << e << std::endl;

  return 0;
}
