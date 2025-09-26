/**
 * 未初始化（uninitialized）的变量行为
 *
 * C/C++ 不会主动为变量分配初始值，未初始化的变量可能包含垃圾值。
 *
 * 其实只要先赋值再使用变量，就都是初始化了。未初始化只存在于未赋值就使用的情况。
 */

#include <iostream>

// 这个函数用于欺骗编译器，让编译器认为变量被使用了
void doNothing(int&) { }

int main() {

  int x; // 未初始化的变量，包含垃圾值

  // 使用引用传递，避免编译器警告，有些编译器可能会警告 （warning C4700: uninitialized local variable 'x' used）
  doNothing(x);

  std::cout << "x is: " << x;

  return 0;
}
