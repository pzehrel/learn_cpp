/**
 * 函数向前声明
 *
 * 让编译器知道函数的存在和它的签名，这样在调用函数时就不会报错。因为编译和运行是分开的两个阶段的。
 * 在头文件和 class 中都很有用。
 *
 * 在 cpp 中，你可以先声明函数然后再实现它。
 *
 * 当实现与声明不一致时，编译器会报错。
 */

#include <iostream>

int add(int a, int b); // 函数向前声明

int main() {

  int result = add(3, 4); // 现在可以调用 add 函数了
  std::cout << "Result: " << result << std::endl;
}

int add(int a, int b) { // 函数定义
  return a + b;
}
