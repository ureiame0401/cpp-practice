#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a;
    int b;
    int c;
    cin >> a >> b >> c;
    int ra;
    int rb;
    int q04= b*b-4*(a*c);
    if (q04<0){
        cout << "No real root";
    }
    else if (q04==0){
        cout << "Two same roots x=" << ((-b))/(a*2);
    }
    else{
        ra=((-b+sqrt(q04)))/(a*2);
        rb=((-b-sqrt(q04)))/(a*2); 
        cout << "Two different roots x1=" << ra << " , x2=" << rb;
    }
}