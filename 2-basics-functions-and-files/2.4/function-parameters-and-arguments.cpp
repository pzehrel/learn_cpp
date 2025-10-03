/**
 * 函数参数
 *
 * -实参：调用函数时传递给函数的值（即函数外部的变量）
 * -形参：函数定义时声明的变量（即函数内部的变量）
 *
 *
 * 当调用一个函数时，该函数的所有参数都会被创建为变量，并且每个参数的值都会被复制到匹配的参数中（使用复制初始化）。这个过程被称为值传递。使用值传递的函数参数被称为值参数。
 */

#include <iostream>

int add(int a, int b) { // a 和 b 是形参
  return a + b;
}

int main() {
  int x = 5;
  int y = 10;

  int sum = add(x, y); // x 和 y 是实参
  std::cout << "Sum: " << sum << std::endl;

  return 0;
}
