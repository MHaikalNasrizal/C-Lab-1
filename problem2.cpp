#include <iostream>
using namespace std;

int main()
{
    int firstvalue = 5, secondvalue =15;
    int * p1, * p2;

    p1 = &firstvalue;
    p2 = &secondvalue;
    *p1 = 10;
    *p2 = *p1;
    p1 = p2;
    *p1 =20;

    cout << "firstvalue is " << firstvalue << endl;
    cout << "secondvalue is" << secondvalue << endl;
    cout << "p1 is " << p1 << endl;
    cout << "p2 is " << p2 << endl;
    cout << "*p1 is " << *p1 << endl;
    cout << "*p2 is " << *p2 << endl;

    
    return 0;
}
