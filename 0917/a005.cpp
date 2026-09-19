#include <iostream>
using namespace std;
int t,a,b,c,d;
int main(){
    t=0;
    a=0;
    b=0;
    c=0;
    d=0;
    cin >> t;
    while(t--){
        cin >> a>>b>>c>>d;
        if (a+c==2*b){
            cout << a << " " << b << " " << c << " "<< d << " " << d+(b-a)<< "\n";
        }
        else{
            cout << a << " " << b << " " << c << " "<< d << " " << d*(d/c)<< "\n";
        }
    }
}