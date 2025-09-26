
/**
 * std::cin （代表“字符输入”）从键盘读取输入, 通常使用提取运算符 >> 将输入数据放入变量中。
 *
 * 全称是 "console input"
 *
 * cin 会将输入的内容存储在缓冲区中，直到遇到换行符（回车）或缓冲区满时才会处理这些输入。
 * 由于用户输入了换行，所以命令行上会自动换行，但是程序得到的输入数据中不包含换行符。
 *
 * 当需要输入多个值时，可以连续使用多个 >> 运算符进行流转。在交互式输入中，可以使用空格或换行符分隔这些值。
 *
 * 空白字符包括空格、制表符（Tab）和换行符（Enter）。
 *
 * 输入的时候，遇到最前面的空白字符都会被忽略掉，直到遇到非空白字符才开始读取。
 *
 */

#include <iostream>

void enterOne() {
  std::cout << "Enter a number: ";

  int a {}; // 定义一个整数变量用于存储输入
  std::cin >> a; // cin: 从标准输入读取数据，赋值给a。注意，会自动换行

  std::cout << "You entered: " << a << '\n';
}

void enterMulti() {
  std::cout << "Enter two numbers, separated by a space: ";

  int x, y; // 实际上可以使用无初始化

  // x 和 y 之间可以使用空白字符进行分割（遇到空白字符则写入变量），只有最后一个输入后按回车才会结束输入
  std::cin >> x >> y;

  std::cout << "You entered: x = " << x << ", y = " << y << '\n';
}

int main() {

  enterOne();
  enterMulti();

  return 0;
}
