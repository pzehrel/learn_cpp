/**
 * 没有返回值的函数
 *
 * - 使用 void 关键字来声明没有返回值的函数
 * - 没有返回值的函数不需要 return 语句，但可以使用 return 语句提前退出函数
 */

#include <iostream>

void printHello() { // 这个函数没有返回值
  std::cout << "Hello!\n";
}

int main() {
  printHello();
  return 0;
}
