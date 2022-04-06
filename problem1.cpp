#include <iostream>
using namespace std;

int main()
{
    int var1;
    int *ptr1;

    cout << "Enter an integer: ";
    cin >> var1;

    ptr1 = &var1;

    cout << "var1 = " << var1 << endl;
    cout << "&var1 = " << &var1 <<endl;
    cout << "ptr = " << ptr1 << endl;
    cout << "*ptr = " << *ptr1 << endl;
    system("pause");
    
    return 0;
}
