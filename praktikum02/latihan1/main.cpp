#include <iostream>

using namespace std;

int main()
{
    int A, B, C;
    cout << " Masukkan bilangan 1: ";
    cin >> A;
    cout << " Masukkan bilangan 2: ";
    cin >> B;
    cout << " Masukkan bilangan 3: ";
    cin >> C;

    if (A > B)
    {
        if (A>C)
            cout << "nilai terbesarnya adalah : " << A;
        else
            cout << "nilai terbesarnya adalah : " << C;
    }

    else

    {
        if (B>C)
            cout << "nilai terbesarnya adalah : " << B;
        else
            cout << "nilai terbesarnya adalah : " << C;

    }
    return 0;
}
