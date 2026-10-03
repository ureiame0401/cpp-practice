#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long b[n]={};
    long long a[n]={};
    for (int i=0;i<n;i++){
        int temp=0;
        cin >> temp;
        a[i]=temp;
    }
    b[0]=a[0];
    for (int i=1;i<n;i++){
        b[i]=b[i-1]+a[i];
    }
    for (int i=0;i<n;i++){
        cout <<b[i];
        if (i!=n-1){
            cout<<" " ;
        }
    }
}