/**
 * 常量
 *
 * 使用 const 限定符（类型限定符）定义常量， 放在类型前后都可以，建议放在类型前。
 *
 * 当定义了常量之后，常量的类型是 const <类型>，并非 <类型>。
 * eg. const double pi 的类型是 const double
 *
 * 在C++中常量一般不会使用全大写命名，全大写一般用于预处理命令。
 * 由于常量和变量的区别只有不允许二次赋值，所以命名上面不需要有区别。
 */

#include <iostream>

int main() {

  const float g { 9.8 };
  double const pi { 3.1415926 };

  double dpi { pi };

  // 初始值可以是非字面量，也可以是非 const 值
  const double pi2 { dpi };

  return 0;
}

// 函数的形参也可以是常量，但一般情况下不需要使用。
void printInt(const int x) { std::cout << x << '\n'; }

// 返回值也可以使用常量，但通常没有用，反而会阻碍编译器优化
const int getValue() { return 5; }
