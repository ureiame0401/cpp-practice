#include <iostream>
#include <vector>
using namespace std;
int main(){
    int a,b;
    while (cin >> a >> b){
    int msum=0;
    while (a != 0 && b != 0)
    {
        msum += a * b;
        cin >> a >> b;
    }
    int v[7]={1,5,10,50,100,500,1000};
    vector<long long> w(msum+1,0);
    w[0]=1;
    for (int c:v){
        for (int i=c;i<=msum;i++){
            w[i]+=w[i-c];
        }
    }
    cout << w[msum];}
}