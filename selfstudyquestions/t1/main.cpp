#include "root.h"
#include <iostream>

using namespace std;

int main() {
  double x{2.0};
  cout << "give your value for x: ";
  cin >> x;
  cout << "root(" << x << ") = " << root(x) << "\n";
}
