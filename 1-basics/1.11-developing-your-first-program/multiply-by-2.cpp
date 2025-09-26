/**
 * 该程序要求用户输入一个整数，等待他们输入一个整数，然后告诉他们该数字的 2 倍是多少。
 * 该程序应产生以下输出（假设我输入 4 作为输入）：
 *
 * ```cpp
 * Enter an integer: 4
 * Double that number is: 8
 * ```
 */

#include <iostream>

int byDouble(int x) { return x * 2; }

int main() {

  std::cout << "Enter an integer: ";

  int num;
  std::cin >> num;

  std::cout << "Double that number is: " << byDouble(num) << std::endl;

  return 0;
}
