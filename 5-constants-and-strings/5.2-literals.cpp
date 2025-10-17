/**
 * 字面量
 *
 */

#include <iostream>

int main() {

  // 可以通过后缀指明字面量的类型
  // 后缀不区分大小写，但是 L 建议大写
  int u { 1u }; // u/U后缀表示 	unsigned int
  int l { 1l }; // l/L后缀表示 long
  int ul { 1ul }; // ul, uL, Ul, UL, lu, lU, Lu, LU	表示unsigned int
  int ull { 1ull }; // ull, uLL, Ull, ULL, llu, llU, LLu, LLU 表示 unsigned long long

  return 0;
}
