#include <iostream>

using namespace std;

int main()
{
    int binaryArray[10], num, i;

    cout << "Digite um número: ";
    cin >> num;

    for (i = 0; num > 0; i++)
    {
        binaryArray[i] = num % 2;
        num = num / 2;
    }

    cout << "O valor de " << num << "em binario é\n";
    for (i = i - 1; i >= 0; i--)
    {
        cout << binaryArray[i];
    }
    return 0;
}
