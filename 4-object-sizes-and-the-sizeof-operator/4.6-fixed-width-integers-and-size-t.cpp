/**
 * 固定宽度整数和 size_t
 *
 * C++只能保证整数类型的最小位宽，例如 int 最小是16位，但是在现代电脑中通常是32位架构的处理器。
 * 如果你用int来存储大于16位的值时，在16位架构的环境下运行就会出问题。
 * 为此，C++11 提供了一些定宽整数类型
 *
 * - std::int8_t     有符号1个字节
 * - std::uint8_t    无符号1个字节
 * - std::int16_t    有符号2个字节
 * - std::uint16_t   无符号2个字节
 * - std::int32_t    有符号4个字节
 * - std::uint32_t   无符号4个字节
 * - std::int64_t    有符号8个字节
 * - std::uint64_t   无符号8个字节
 *
 * 由于 C++ 规范中的一个疏忽，现代编译器通常将 std::int8_t 和 std::uint8_t 分别视为与 signed char 和 unsigned char
 * 相同。因此，在大多数现代系统中，8 位固定宽度整数类型的行为将类似于字符类型。
 *
 * 定宽类型也不能保证在所有架构上都支持，但是，鉴于现代架构已经围绕 8/16/32/64 位变量进行了标准化。
 * 除非程序需要移植到一些奇异的大型机或嵌入式架构，否则这不太可能成为问题。
 *
 * 由于设备的架构不同，处理不同宽度的整型效率是不一样的，并不是 8 位的运算就一定比 16 位的效率高。
 * 为了解决运算效率的问题，额外提供了“快速整型”
 *
 * 快速类型：
 *  - 根据程序运行环境提供最快且最小位宽符合需要的整数类型
 *  - 命名方式为：std::int_fast#_t 和 std::uint_fast#_t 其中 # 表示需要的位宽，可以是 8、16、32 或 64
 *
 * 最小类型：
 *  - 提供最小位宽符合需要的整数类型
 *  - 命名方式为：std::int_least#_t 和 std::uint_least#_t 其中 # 表示需要的位宽，可以是 8、16、32 或 64
 *
 * 避免使用快速和最小的整数类型，因为它们在解析为不同大小的架构上可能会表现出不同的行为。
 *
 * 最佳实践：
 * - 当整数的大小无关紧要时，首选 int （例如，该数字始终在 2 字节有符号整数的范围内）
 * - 当存储需要保证范围的量时，首选 std::int#_t
 * - 当需要进行位操作或明确定义的环绕行为时（例如，用于密码学或随机数生成），请首选 std::uint#_t
 *
 * 尽可能避免以下情况：
 * - short 和 long 整数（首选固定宽度整数类型）。
 * - 快速和最小整数类型（首选固定宽度整数类型）。
 * - 用于保存数量的无符号类型（建议使用带符号的整数类型代替）。
 * - 8 位固定宽度整数类型（建议使用 16 位固定宽度整数类型代替）。
 * - 任何编译器特定的固定宽度整数（例如，Visual Studio 定义了 __int8、__int16 等…）
 *
 *
 * std::size_t 间接的说明了运行程序的电脑最大支持内存空间，例如32位操作系统最高支持4GB的寻址空间。
 * 所以你不可能创建一个大于 std::size_t 位寻址空间的对象。
 * 有些编译器甚至将可创建的最大对象限制为 std::size_t 最大值的一半。
 * 当然，这在32位以上的系统中不重要，你几乎不可能创建这么大的对象。
 */

#include <iostream>

int main() {

  std::int8_t u { 65 };
  std::cout << u << '\n'; // A， 大多数编译器认为 std::int8_t 和 std::uint8_t 分别视为与 signed char 和 unsigned char
  std::cout << '\n';

  std::int_least8_t i { 65 };
  std::cout << i << '\n'; // A
  std::cout << '\n';

  std::cout << "least 8:  " << sizeof(std::int_least8_t) * 8 << " bits\n";
  std::cout << "least 16: " << sizeof(std::int_least16_t) * 8 << " bits\n";
  std::cout << "least 32: " << sizeof(std::int_least32_t) * 8 << " bits\n";
  std::cout << '\n';
  std::cout << "fast 8:  " << sizeof(std::int_fast8_t) * 8 << " bits\n";
  std::cout << "fast 16: " << sizeof(std::int_fast16_t) * 8 << " bits\n";
  std::cout << "fast 32: " << sizeof(std::int_fast32_t) * 8 << " bits\n";

  std::cout << sizeof(std::size_t) * 8 << '\n';
  return 0;
}
