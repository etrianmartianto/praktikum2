#include <iostream>

using namespace std;

int main()
{
    int A, B, C, D;
    cout << " Masukkan bilangan 1: ";
    cin >> A;
    cout << " Masukkan bilangan 2: ";
    cin >> B;
    cout << " Masukkan bilangan 3: ";
    cin >> C;
    cout << " Masukkan bilangan 4: ";
    cin >> D;

    if (A > B)
    {
        if (A>C)
            cout << "nilai terbesarnya adalah : " << A;
        else if (A>D)
            cout << "nilai terbesarnya adalah : " << A;
        else
            cout << "nilai terbesarnya adalah : " << D;
    }

    else if (B>C)

    {
        if (B>D)
            cout << "nilai terbesarnya adalah : " << B;
        else
            cout << "nilai terbesarnya adalah : " << D;

    }

        else if (C>D)
      cout << "nilai terbesarnya adalah : " << C;
       else
            cout << "nilai terbesarnya adalah : " << D;

    return 0;
}
