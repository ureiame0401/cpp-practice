#include <iostream>
using namespace std;
int main(){
    int a=0;
    while (cin >> a){
        int ans[64]={};
        int i=-1;
        if (a==0){ans[0]=0;i++;}
        while (a>0){
            ans[++i]=a%2;
            a/=2;
        }
        for (;i>=0;i--){
            cout << ans[i];
        }
        cout << "\n";
            
    }
}