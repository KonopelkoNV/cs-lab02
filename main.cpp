#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B: ";
    int a, b;
    cin >> a >> b;
    int max = a > b ? a : b;
    int min = a < b ? a : b;
    cout << "A + B = " << a + b << '\n'
         << "A - B = " << a - b << '\n'
         << "A * B = " << a * b << '\n'
         << "A / B = " << a / b << '\n'
         << "MAX = " << max << '\n'
         << "MIN = " << min << '\n';
    return 0;
}
