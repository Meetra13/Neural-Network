#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

void func() {
  static int a = 1;
  cout << ++a << endl;
}

int main(void){

  for (int i = 0; i < 20; i++) {
   func();
  }

  {
    int a = 1234;
    cout << a << endl;
  }

  {
    int a = 41234;
    cout << a << endl;
  }

  return 0;
}
