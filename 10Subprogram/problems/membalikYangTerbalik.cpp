#include <iostream>
using namespace std;

int reverse(int x) {
    int temp = x;
    int ret = 0;

    while (temp > 0) {
        ret = (ret * 10) + (temp % 10);
        temp = temp / 10;
    }

    return ret;
}

int main() {
    int A, B;
    cin >> A >> B;

    int A_reverse = reverse(A);
    int B_reverse = reverse(B);

    int C = A_reverse + B_reverse;
    int C_reverse = reverse(C);

    cout << C_reverse << endl;

    return 0;
}
