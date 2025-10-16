/**
 * 浮点数
 *
 * 浮点数遵循 IEEE-754 标准
 *
 * 浮点数和整数不一样，位宽不代表最大数值容量（详见IEEE-754）
 *
 * 和整数一样，c++没有定义浮点数的实际大小
 * - float：最小4byte，6～7位有效数字(十进制，含小数)，通常是7
 * - double：最小8byte，15～18位有效数字(十进制，含小数)，通常是16
 * - long double：最小8byte
 *
 * long double 是一个奇怪的类型，在不同的平台上，它的大小可以在 8 到 16 字节之间变化，
 * 并且它可能使用也可能不使用符合 IEEE-754 的格式。我们建议避免使用 long double 。
 *
 * 除非空间非常宝贵，否则应优先使用 double 而不是 float，因为 float 精度不足通常会导致不准确。
 *
 * IEEE 754 兼容格式还支持一些特殊值：
 * - 无穷大：inf/-inf
 * - 非数值：NaN
 * - 带符号的零：-0/+0
 *
 */

#include <iomanip>
#include <iostream>
#include <limits>

int main() {

  // 以下代码查看浮点类型是否兼容 IEEE 754：
  std::cout << std::boolalpha; // 打印布尔值时显示 true 或 false，而不是 1 或 0。
  std::cout << "float: " << std::numeric_limits<float>::is_iec559 << '\n';
  std::cout << "double: " << std::numeric_limits<double>::is_iec559 << '\n';
  std::cout << "long double: " << std::numeric_limits<long double>::is_iec559 << '\n';

  std::cout << '\n';

  // 当使用浮点字面量时，始终包含至少一位小数（即使小数是 0）。这有助于编译器理解该数字是浮点数而不是整数。
  float f { 5.0 }; // 默认情况下浮点字面量是 double 类型的
  float ff { 5.0f }; // f后缀用于表示该浮点字面量是 float 类型
  std::cout << "f is : " << f << '\n';

  std::cout << '\n';

  std::cout << 5.0 << '\n'; // (5) 如果小数部分为 0， std::cout 将不会打印数字的小数部分。
  std::cout << 6.7f << '\n'; // (6.7)
  std::cout << 987654.21 << '\n'; // (987654) std::cout 默认情况下只会输出6位数字，这并不是精度丢失（是长度丢失）
  std::cout << 98765.21 << '\n'; // (98765.2) 验证上面的只会输出6位数字
  std::cout << 9876543.21 << '\n'; // (9.87654e+06) 超过一定位数的时候会使用科学计数法显示（我这是8位数开始）

  std::cout << '\n';

  std::cout << std::setprecision(17); // 覆盖 std::cout 显示的默认精度
  std::cout << 3.33333333333333333333333333333333333333f << '\n'; // (3.3333332538604736)
                                                                  // float没有这么高的精度，所以在7位之后就会出现误差
  std::cout << 3.33333333333333333333333333333333333333 << '\n'; // (3.3333333333333335)

  std::cout << '\n';

  float f1 { 123456789.0f }; // f has 10 significant digits
  std::cout << std::setprecision(9); // to show 9 digits in f
  std::cout << f1 << '\n'; // (123456792) 浮点数精度是所有数值，不只是小数

  std::cout << '\n';

  // 十进制转二进制计算小数位会不断的 *2, 直到没有小数为止,eg. 0.1*2*2....*2
  // 0.1 这种在二进制就是无法完全去除小数位的。这就会导致出现误差
  double d { 0.1 };
  std::cout << d << '\n'; // (0.1)
  std::cout << std::setprecision(17);
  std::cout << d << '\n'; // (0.10000000000000001)

  std::cout << '\n';

  // 误差计算会导致无法想象的后果
  std::cout << std::setprecision(17);
  double d1 { 1.0 }; // 1
  std::cout << d1 << '\n';
  double d2 { 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 }; // should equal 1.0
  std::cout << d2 << '\n'; // 0.99999999999999989
  std::cout << (d1 == d2) << '\n'; // false

  std::cout << '\n';

  // 特殊的格式
  double zero { 0.0 };

  double posinf { 5.0 / zero }; // (inf) 正无穷
  std::cout << posinf << '\n';

  double neginf { -5.0 / zero }; // (-inf) 负无穷
  std::cout << neginf << '\n';

  double z1 { 0.0 / posinf }; // (0) 正0
  std::cout << z1 << '\n';

  double z2 { -0.0 / posinf }; // (-0) 负0
  std::cout << z2 << '\n';

  double nan { zero / zero }; // (nan) 非数字 (数学上无效)
  std::cout << nan << '\n';

  return 0;
}
