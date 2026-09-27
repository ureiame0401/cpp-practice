#include <iostream>
using namespace std;
int main(){
    int num;
    int t;
    int index=0;
    cin >> num;
    for (auto i=2;i<num;i++){
    
        if (num%i==0){
            if (index){cout <<" * ";}
            
            cout << i;
            if (num%(i*i)==0){
                cout <<"^"; 
                t=0;
                while (num%i==0){
                    t+=1;
                    num/=i;
                }
                cout << t ;
            }
            index++;
        }
    }
}