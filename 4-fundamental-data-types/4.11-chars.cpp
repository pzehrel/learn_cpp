/**
 * 字符
 *
 * char 只能存一个字符
 */

#include <iostream>

int main() {

  char ch2 { 'a' };
  char ch1 { 97 }; // 'a' 的ascii编码，不建议这样初始化，除非你知道自己在干什么

  std::cout << "Input a keyboard character: ";
  char ch {};
  std::cin >> ch;
  std::cout << "You entered: " << ch << '\n';

  return 0;
}
