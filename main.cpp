#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B: ";
    int a, b;
    cin >> a >> b;

    cout << "A + B = " << a + b << '\n'
         << "A - B = " << a - b << '\n'
         << "A * B = " << a * b << '\n'
         << "A / B = " << a / b << '\n';


      int max;
        if (a > b) max = a;
        if (b > a) max = b;
        if (b == a) cout << "A = B";
            else cout << "MAX = " << max;


    int min;
        if (a > b) min = b;
        if (b > a) min = a;
        if (b == a) cout << "A = B";
            else cout << "MIN = " << min;

    return 0;
}
