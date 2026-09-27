#include <iostream>
#include <cmath>
using namespace std;
int main(){
    bool ona =true;
    int n;
    cin >> n;
    do{
        ona =true;
        if (fmod(sqrt(double(n)),1)!=0){
            ona=false;
        }
        if (ona){
        cout<<"yes\n";
        }
        else{
        cout << "no\n";
        }
        cin >> n;
    }
    while(n!=0);
}