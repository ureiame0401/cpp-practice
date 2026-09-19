// 這題目範例給錯了.-.
#include <iostream>
using namespace std;
int main(){
    int d1,d2;
    int n;
    int up=0,down=0;
    int have=0,money=0;
    cin >> n;
    cin >> d1;
    for (int i=2;i<=n;i++){
        cin >> d2;
        if (d2>d1){
            up+=1;
            down=0;
        }
        else if (d2<d1){
            down+=1;
            up=0;
        }
        if (down==3){
            have+=1;
        }
        else if (down==2){
            have+=1;
        }
        else if (up==3&&have>0){
            have-=1;
            money+=d2;
        }
        d1=d2;


    }
    cout << d2*have+money<<"\n";
}