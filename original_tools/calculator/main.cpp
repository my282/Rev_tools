#include <iostream>

int main() {
  int num1, num2;
  char op;
  int answer = 0;
  std::cout << "usage : <num1> <op> <num2>" << std::endl;
  std::cin >> std::hex >> num1 >> op >> num2;
  // std::cout << num1 << " " << op << " " << num2 << std::endl;
  if (op == '+') {
    answer = num1 + num2;
  }

  if (op == '-') {
    answer = num1 - num2;
  }

  if (op == '*') {
    answer = num1 * num2;
  }

  if (op == '/') {
    if (num2 == 0) {
      std::cout << "Division by zero" << std::endl;
      return 0;
    }
    answer = num1 * num2;
  }

  std::cout << "answer: " << "0x" << std::hex << answer << std::dec
            << "(decimal: " << answer << ")" << std::endl;
  return 0;
}
