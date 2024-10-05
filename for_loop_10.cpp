
// from english
#include <iostream>
using namespace std;

int main() {
    cout << "\n";
    float a, b, i, j;
    cin>> a;
    
    j = 0;
    for (i = 1; i <= a; i++) {
      j = j + 1/i;
    }
    cout<<"sum: " << j;
    cout << "\n";
  return 0;
}
