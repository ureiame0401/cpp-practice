#include <iostream>
using namespace std;
int main(){
    int n;
    while (cin >> n){
        int p[100001] = {};
        int pn=0;
        int nn=0;
        for (int i=1;i<n+1;i++){
            int t=0;
            cin >>t;
            pn=0;
            cin>>pn;
            for (int hn=0;hn<pn;hn++){
                cin >> nn;
                p[nn]=i;
            }
        }
        int f=0;
        cin >> f;
        cout << p[f]<<"\n";
    }
}