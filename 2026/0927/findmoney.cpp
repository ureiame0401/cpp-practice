#include <iostream>
using namespace std;
int main(){
    int a, b, msum;
    cin >> a >> b;
    while (a != 0 && b != 0)
    {
        msum += a * b;
        cin >> a >> b;
    }
    int v[7]={1,5,10,50,100,500,1000};
    int w[4096]={};
    w[0]=1;
    for (int c:v){
        for (int i=c;i<=msum;i++){
            w[i]+=w[c-i];
        }
    }
    cout << w[msum];
}