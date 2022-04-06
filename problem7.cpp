#include <iostream>
using namespace std;

int calculate(int a);
int main()
{
    int dollar;
    char rep;
    while(rep != 'p'){
        cout << "Enter the amount of dollar = ";
        cin >> dollar;
        calculate(dollar);
        cout << "Enter p to stop or press q to start new calculation" <<endl;
        cin >> rep;
    }

    system("pause");
    return 0;

}
int calculate(int a){
    int d50 = a / 50;
    a = a % 50;

    int d20 = a / 20;
    a = a % 20;

    int d10 = a / 10;
    a = a % 10;

    int d5 = a / 5;
    a = a % 5;

    int d1 = a / 1;
    a = a % 1;

    cout << "RM 50  has " << d50 << " bill/s" <<endl;
    cout << "RM 20  has " << d20 << " bill/s" <<endl;
    cout << "RM 10  has " << d10 << " bill/s" <<endl;
    cout << "RM 5  has " << d5 << " bill/s" <<endl;
    cout << "RM 1  has " << d1 << " bill/s" <<endl;
    return 0;
}



