/**
 * 逻辑运算符
 *
 * ... 省略早就掌握的内容
 *
 *
 * XOR 异或
 *
 * 在程序中可以使用 `!=` 来表示异或
 * eg. a != b
 *
 * 可以同时对比多个操作数
 * eg. a != b != c != ...
 *
 * 真集表：
 * 左边      右边   结果
 * false   false  false
 * false   true   true
 * true    false  true
 * true    true   false
 *
 * 规律：当操作数为true的数量是奇数时，得到的结果总为true。注意，一定要是bool，不能是其他类型
 *
 * 可以使用 static_cast<bool>(value) 将非bool值的数据转换为bool，也可以使用 `!!`
 *
 *
 * 可以使用 or and not 代替 && || !
 */

#include <iostream>

int main() {

  std::cout << std::boolalpha;
  // XOR
  std::cout << (true != true != true) << '\n'; // true 奇数个true，结果总是返回true
  std::cout << (true != true != false) << '\n'; // false 偶数个true，结果总是返回false

  std::cout << (false or true) << '\n'; // true 等同于 false || true
  std::cout << (false and true) << '\n'; // false 等同于 false && true
  std::cout << (not false) << '\n'; // true 等同于  !false

  return 0;
}
