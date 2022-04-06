#include <iostream>
using namespace std;

int assignID(void);
int assignIDnonstatic(void);

int main()
{
   int i, id;

   cout << "Call a function with static variable \n";
   for (i=0; i<5;i++){
       id = assignID();
       cout << "Student ID #" << id << endl;
   }

   cout << "\nCall a function with non static varible\n";
   for(i=0;i<5;i++){
       id = assignIDnonstatic();
       cout << "Student Id #" << id << endl;
   }

    system("pause");
    return 0;
}
int assignID(void){
    static int ID = 0;
    ID++;
    return ID;
}

int assignIDnonstatic(void){
    int ID = 0;
    ID++;
    return ID;
}

