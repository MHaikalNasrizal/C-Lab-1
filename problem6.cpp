#include <iostream>
using namespace std;

void calculate(int a ,int b,char c,int *d);
int main()
{
    int num1,num2,result;
    char operation,rep;
    while(rep != 'p'){
        cout << "Enter number 1 = " ;
        cin >> num1;
        cout << "Enter number 2 = ";
        cin >> num2;
        cout << "Enter the arithmetic operartion (E.g = + , - , * , / )= ";
        cin >> operation;
        calculate(num1,num2,operation,&result);
        cout <<"\n" << num1 << operation << num2 << " = " << result << endl;
        cout << "___________________________________________________" <<endl;
        cout << "Enter p to stop or press q to start new calculation" <<endl;
        cin >> rep;
    }

    system("pause");
    return 0;

}
void calculate(int a, int b, char c, int *d){
    switch(c){
        case '+':
        {
        *d = a + b;
         
        break;
        }
    

        case '-':{
        *d = a - b;
        
        break;
        }

        case '*':{
        *d = a * b;
         
        break;
        }

        case '/':{
        *d = a / b;
        
        break;
        }


    }

}


