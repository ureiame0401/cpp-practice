#include <iostream>
using namespace std;
int main(){
    int a,b;
    long long ans;
    cin >> a >> b;
    ans=a;
    while ((a-b)>0){
        a-=b;
        ans*=a;
    }
    cout << ans;
}