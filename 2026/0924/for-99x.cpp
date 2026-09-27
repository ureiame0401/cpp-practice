#include <iostream>
using namespace std;
int main(){
    for (int a=1;a<=9;a++){
        for (int b=1;b<=9;b++){
            cout << a<<"*"<<b<<"="<<a*b;
            if (b!=9){
                cout << " ";
            }
        }
        cout << "\n";
    }
}