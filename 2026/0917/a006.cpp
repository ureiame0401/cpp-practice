#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b>>c;
    int q=b*b-4*a*c;
    int aa,ab;
    if (q>0){ //Two different roots x1=?? , x2=??
        aa=((-b+sqrt(float(q)))/(2*a));
        ab=((-b-sqrt(float(q)))/(2*a));
        int r1,r2;
        if (aa>ab){r1=aa;r2=ab;}else{r1=ab;r2=aa;}
        cout << "Two different roots x1="<< r1 <<" , x2="<< r2;
    }
    else if(q==0){//Two same roots x=??
        cout << "Two same roots x=" << -b/(2*a);
    }
    else{
        cout << "No real root";
    }
}