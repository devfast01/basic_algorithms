
// from english
#include <iostream>
using namespace std;

int main() {
    cout << "\n";
    int a, b, i, j;
    cout<< "1kg bahasyny girizin: ";
    cin>> a;
    j = 0;
    for (i = 0; i < 10; i++) {
      j = j+a;
    }
    cout<<"sum: " << j;
    cout << "\n";
  return 0;
}
