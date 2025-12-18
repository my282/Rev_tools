#include <cstddef>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  long int user_input = 0;
  char *endp = NULL;
  if (argc < 2) {
    cout << "usage: ./h2d <hex or decimal>" << endl;
    return 1;
  }
  if (argv[1][0] == '0' && argv[1][1] == 'x') {
    user_input = strtol(argv[1], NULL, 16);
    cout << user_input << endl;
  } else {
    user_input = strtol(argv[1], &endp, 10);
    if (*endp != '\0') {

      user_input = strtol(argv[1], &endp, 16);
      if (*endp != '\0') {
        cout << "usage: ./h2d <hex or decimal>" << endl;
        return 1;
      }
      cout << user_input << endl;
      return 0;
    }
    cout << "0x" << hex << user_input << endl;
  }
  return 0;
}
