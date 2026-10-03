#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int b[n]={};
    int a[n]={};
    for (int i=0;i<n;i++){
        int temp=0;
        cin >> temp;
        b[i]=temp;
    }
    a[0]=b[0];
    for (int i=1;i<n;i++){
        a[i]=b[i]-b[i-1];
    }
    for (int i=0;i<n;i++){
        cout <<a[i];
        if (i!=n-1){
            cout<<" " ;
        }
    }
}