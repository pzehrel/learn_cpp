/**
 * boolean
 */

#include <iostream>

int main() {

  bool b1 { true };
  bool b2 { false };
  b1 = false;
  bool b3 {}; // 默认 false

  // 一样可以使用取反
  bool b4 { !true };
  bool b5 { !false };

  // std::cout 默认输出 bool 值是 0 和 1
  std::cout << true << '\n'; // 1
  std::cout << !true << '\n'; // 0

  std::cout << '\n';

  std::cout << std::boolalpha; // 使用这个可以设置 std::cout 在输出bool的时候显示true和false
  std::cout << true << '\n'; // 1
  std::cout << !true << '\n'; // 0
  std::cout << std::noboolalpha; // 关闭显示 true 和 false

  std::cout << '\n';

  bool bFalse { 0 }; // 可以正确初始化 false
  bool bTrue { 1 }; // 可以正确初始化 true
  // bool bNo { 2 }; // 编译报错，列表初始化不允许这样写
  bool bNo2 = 2; // 正确 true

  std::cout << bNo2 << '\n'; // 1

  std::cout << '\n';

  // 命令输入的时候，默认任何非 0 的数值都会被bool隐式转换为 true（1）。
  // 任何非数值cin会进入失败模式,导致bool 得到结果 0。
  bool b6 {};
  std::cout << "Enter a boolean value: ";
  std::cin >> b6;
  std::cout << "You entered: " << b6 << '\n';

  std::cout << '\n';

  // 使用 std::boolalpha 可以让cin 支持输入 true / false。
  // 注意：启用 std::boolalpha 将只允许接受小写的 false 或 true 。带有大写字母的变体将不被接受。 0 和 1 也将不再被接受。
  bool b7 {};
  std::cout << "请键入 true 或 false: ";
  std::cin >> std::boolalpha;
  std::cin >> b7;
  std::cout << std::boolalpha;
  std::cout << "You entered: " << b7 << '\n'; // (You entered: true)

  std::cout << '\n';

  // 双等号进行判断会返回bool
  std::cout << std::boolalpha;
  std::cout << "1 is equal to 1 : " << (1 == 1) << '\n';

  return 0;
}
