#include <iostream>
using namespace std;
// comments added again
int main()
{
    int a[10][10], b[10][10], c[10][10];
    cout << "Enter a first 3*3 matrix\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << endl;
    cout << "enter a second 3*3 matrix\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; i < 3; j++)
        {
            cin >> b[i][j];
        }
    }
    cout << endl;
    // logic part
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {

            sum = sum + a[i][j] * b[j][i];
            c[i][j] = sum;
            cout << c[i][j];
        }
        cout << endl;
    }
    cout << "process done\n";

    return 0;
}