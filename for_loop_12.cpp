
// from english
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int j = 0;

    for (int i = N; i <= 2 * N; i++) {
        j += i * i; 
    }

    cout << "sum: " << j;
    cout << "\n";
    return 0;
}
