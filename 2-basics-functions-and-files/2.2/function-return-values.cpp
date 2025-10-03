/**
 * 函数返回值
 */

#include <iostream>

int getValueFromUser() // 这个函数返回一个整数
{
  std::cout << "Enter an integer: ";
  int input {};
  std::cin >> input;

  return input; // 将用户输入的值返回给调用方
}

int main() {
  int num { getValueFromUser() }; // 用 getValueFromUser() 的返回值初始化 num

  std::cout << num << " doubled is: " << num * 2 << '\n';

  return 0;
}
