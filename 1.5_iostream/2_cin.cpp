// -*- C++ -*-
//===----------------------------------------------------------------------===//
//
// iostream Program in C++
// 标准输入输出流
//
//===----------------------------------------------------------------------===//

#include <iostream>

int main() {

  std::cout << "Enter a number: ";

  // 定义一个整数变量用于存储输入
  // 列表初始化可以确保变量被初始化为0
  int a{};

  // cin: 从标准输入读取数据，会自动换行
  // cin 的全称是 "console input"
  // 使用 >> 运算符将输入的数据存储到变量中
  std::cin >> a;

  std::cout << "You entered: " << a << '\n';


  int x{}, y{};

  // 提示用户输入两个整数
  // 使用 std::cin 读取两个整数，使用空格(空白字符都可以)分隔
  std::cout << "Enter a x and y, separated by a space: ";
  std::cin >> x >> y;
  std::cout << "You entered: x = " << x << ", y = " << y << '\n';
  

  // cin 是缓冲的，输入的数据会被暂时存储起来，知道输入\n结束或手动刷新才会更新到变量中，\n 也会被读取。
  // 下面的例子，在输入 x 的时候尝试使用 空白字符分隔。
  // 你将不会看到 y 的输入提示，而是直接将第二个输入的值作为 y 的值。
  std::cout << "Enter a x and y, separated by a space: ";
  std::cin >> x;
  std::cin >> y;
  std::cout << "You entered: x = " << x << ", y = " << y << '\n';
  
  return 0;
}
