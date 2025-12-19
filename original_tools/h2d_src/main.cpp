#include <iostream>
#include <sstream>
#include <string>
using namespace std;
void print_bin(long int n) {
  cout << "bin:";
  for (int i = 63; i > 0; --i) {
    if ((n >> i) & 1) {
      cout << "1";
    } else {
      cout << "0";
    }
  }
  cout << endl;
}
int main(int argc, char *argv[]) {
  long int user_input = 0;
  if (argc < 2) {
    cout << "usage : h2d <dec or hex>" << endl;
    return 1;
  }
  string input = argv[1];
  // 16進数の判定
  if (input.size() > 2 && input.substr(0, 2) == "0x") {
    istringstream ss1(input);
    ss1 >> hex >> user_input;

    if (!ss1.fail() && ss1.eof()) {
      cout << user_input << endl;
      print_bin(user_input);
      return 0;
    }
  } else {
    istringstream ss2(input);
    ss2 >> dec >> user_input;
    if (!ss2.fail() && ss2.eof()) {
      cout << hex << "0x" << user_input << endl;
      print_bin(user_input);
      return 0;
    }
  }

  istringstream ss3(input);
  ss3 >> hex >> user_input;
  if (!ss3.fail() && ss3.eof()) {
    cout << user_input << endl;
    print_bin(user_input);
    return 0;
  }

  cout << "usage : h2d <dec or hex>" << endl;
  return 1;
}
