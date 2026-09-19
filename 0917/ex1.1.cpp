#include <iostream>
using namespace std;
int main(){
    int sum=0;
    int a=1;
    int i=0;
    while(a!=0){
        cin >> a;
        sum+=a;
        i+=1;
    }
    cout << sum << "\n" << i;
}