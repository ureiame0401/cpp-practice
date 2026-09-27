#include <iostream>
using namespace std;
int main(){
    int a=2147483647;
    {int a=0;}
    cout << a+1;
}