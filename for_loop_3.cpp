
// from english
#include <iostream>
using namespace std;

int main() {
    cout << "\n";
    int a, b, i, j;
    cin>> a;
    cin>> b;
    j = 0;
    for (i = b; i >= a; i--) {
    j++;
    cout << i << "\n";
    }
    cout<<"amount " << j;
    cout << "\n";
  return 0;
}
