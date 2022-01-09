#include<iostream>
using namespace std;

int main()
{
    int age;
    cout << " Enter age of user ";
    cin >> age;
// user is teenager or not
    if(age>=13 && age<=19){
        cout << " You are a teenager " << endl;
    }else{
        cout << " You are not a teenager " << endl;
    }
// condition tp check user are for voting or not
    if(age>=18){
        cout << "You are eligible for vote " << endl;

    }else{
        cout<< " You are not eligible for vote " << endl;
    }
    return 0;
}
