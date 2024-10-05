
// from english
#include <iostream>
using namespace std;

int main() {
    cout << "\n";
    int a, b, i, j;
    cin>> a;
    cin>> b;
    j = 0;
    for (i = a; i <= b; i++) {
      j = j+i;
    }
    cout<<"sum: " << j;
    cout << "\n";
  return 0;
}
