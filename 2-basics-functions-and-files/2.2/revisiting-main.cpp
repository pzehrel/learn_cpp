/**
 * 重新审视 main 函数
 *
 * - 必须返回一个 int，用于做为程序的退出状态码，0 表示成功，非 0 表示失败
 * - 不能显示的调用 main 函数，它应该被操作系统调用
 * - 如果未提供 return 语句，函数 main 将隐式返回 0
 *
 * 关于状态码，也可以使用系统的宏（需要包含 <cstdlib> 头文件）：
 * - EXIT_SUCCESS: 表示成功
 * - EXIT_FAILURE: 表示失
 *
 * 如果你想最大限度地提高可移植性，你应该只使用 0 或 EXIT_SUCCESS 来表示成功终止，
 * 或者使用 EXIT_FAILURE 来表示未成功终止。
 */

int main() {
  //
  return 0;
}
