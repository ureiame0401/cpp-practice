/*
這鬼寫法不好 不過gpt 有給我修好的寫法
*/
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int have=0,money=0;
    int d1,d2,d3,d4;
    int n,d=4;
    cin >> n;
    
    cin >> d1 >>d2 >>d3>>d4;
    while (d<n){
        if (d1>d2&&d2>d3){
            if (d3>d4){
                have+=1;
            }
            have+=1;
        }
        else if(d1<d2&&d2<d3&&d3<d4&&have>0){
            have-=1;
            money+=d4;
        }
        cout << "d=" << d
             << " prices=" << d1 << " " << d2 << " " << d3 << " " << d4
             << " have=" << have
             << " money=" << money << '\n';
        d1=d2;d2=d3;d3=d4;cin >> d4;
        d+=1;
    }
    cout << money+d4*have;
}