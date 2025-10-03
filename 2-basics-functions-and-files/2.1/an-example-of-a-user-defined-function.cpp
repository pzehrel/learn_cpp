/**
 *
 * 一个用户定义函数的例子
 *
 *
 * 伪代码：
 * ```cpp
 * returnType functionName() // 这是函数头（告诉编译器函数的存在）
 * {
 *   // 这是函数体（告诉编译器函数做什么）
 * }
 * ```
 *
 * 函数一定要先声明在使用（即函数必须写在调用之前）
 */

#include <iostream>

void doPrint() { std::cout << "In doPrint()\n"; }

int main() {
  std::cout << "Starting main()\n";
  doPrint();
  std::cout << "Ending main()\n";

  return 0;
}
